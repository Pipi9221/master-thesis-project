#include "clang/AST/ASTContext.h"
#include "clang/AST/Decl.h"
#include "clang/AST/RecursiveASTVisitor.h"
#include "clang/AST/Stmt.h"
#include "clang/Frontend/ASTUnit.h"
#include "clang/Lex/Lexer.h"
#include "clang/Rewrite/Core/Rewriter.h"
#include "clang/Tooling/Tooling.h"
#include "llvm/ADT/SmallString.h"
#include "llvm/ADT/StringRef.h"
#include "llvm/Support/Error.h"
#include "llvm/Support/FileSystem.h"
#include "llvm/Support/FormatVariadic.h"
#include "llvm/Support/InitLLVM.h"
#include "llvm/Support/JSON.h"
#include "llvm/Support/MemoryBuffer.h"
#include "llvm/Support/Path.h"
#include "llvm/Support/raw_ostream.h"

#include <cstdint>
#include <cstdlib>
#include <memory>
#include <optional>
#include <string>
#include <utility>
#include <vector>

namespace {

struct SiteRecord {
  std::string SiteId;
  std::string SiteKind;
  std::vector<std::string> PreferredFor;
  std::string FunctionName;
  std::string NodeKind;
  unsigned Line;
  unsigned Column;
  unsigned Offset;
};

struct CriteriaSpec {
  std::string SeedId;
  std::vector<std::string> Variables;
};

struct MutationSelection {
  std::string FunctionName;
  std::string NodeKind;
  unsigned Line;
  unsigned Column;
  unsigned Offset;
  clang::SourceLocation InsertionLocation;
};

struct MutationPlan {
  std::string MutationRule;
  std::string SelectedPattern;
  MutationSelection Selection;
  std::vector<std::string> InsertedSymbols;
  std::string MutantSource;
};

struct MutationBuildInput {
  clang::ASTUnit &Unit;
  llvm::StringRef NormalizedSource;
  const CriteriaSpec &Criteria;
  int RngSeed;
};

std::optional<std::string> readFile(llvm::StringRef Path) {
  auto BufferOrError = llvm::MemoryBuffer::getFile(Path);
  if (!BufferOrError) {
    return std::nullopt;
  }
  return std::string(BufferOrError.get()->getBuffer());
}

bool writeFile(llvm::StringRef Path, llvm::StringRef Content) {
  std::error_code Error;
  llvm::raw_fd_ostream Output(Path, Error, llvm::sys::fs::OF_Text);
  if (Error) {
    return false;
  }

  Output << Content;
  return true;
}

llvm::json::Object siteToJson(const MutationSelection &Selection) {
  llvm::json::Object Payload;
  Payload["function_name"] = Selection.FunctionName;
  Payload["node_kind"] = Selection.NodeKind;
  Payload["line"] = Selection.Line;
  Payload["column"] = Selection.Column;
  Payload["source_offset"] = Selection.Offset;
  return Payload;
}

std::unique_ptr<clang::ASTUnit> buildAstUnit(llvm::StringRef SeedPath,
                                             llvm::StringRef Code) {
  std::vector<std::string> Arguments = {"-std=c11", "-xc", "-Wno-everything",
                                        "-I/usr/include/csmith"};
  if (const char *IncludeDir = std::getenv("CSMITH_INCLUDE_DIR");
      IncludeDir != nullptr && IncludeDir[0] != '\0') {
    Arguments.push_back(std::string("-I") + IncludeDir);
  }
  return clang::tooling::buildASTFromCodeWithArgs(Code.str(), Arguments,
                                                  SeedPath.str());
}

clang::SourceLocation expansionLoc(const clang::SourceManager &SourceManager,
                                   clang::SourceLocation Location) {
  return SourceManager.getExpansionLoc(Location);
}

bool isEditableLocation(const clang::SourceManager &SourceManager,
                        clang::SourceLocation Location) {
  Location = expansionLoc(SourceManager, Location);
  return Location.isValid() && !Location.isMacroID() &&
         SourceManager.isWrittenInMainFile(Location);
}

bool isEditableStatement(const clang::SourceManager &SourceManager,
                         const clang::Stmt *Statement) {
  return Statement != nullptr &&
         isEditableLocation(SourceManager, Statement->getBeginLoc()) &&
         isEditableLocation(SourceManager, Statement->getEndLoc());
}

clang::SourceLocation endOfToken(const clang::SourceManager &SourceManager,
                                 const clang::LangOptions &LangOptions,
                                 clang::SourceLocation Location) {
  return clang::Lexer::getLocForEndOfToken(expansionLoc(SourceManager, Location),
                                           0, SourceManager, LangOptions);
}

bool replaceBetween(clang::Rewriter &Rewrite,
                    const clang::SourceManager &SourceManager,
                    const clang::LangOptions &LangOptions,
                    clang::SourceLocation LeftToken,
                    clang::SourceLocation RightLocation,
                    llvm::StringRef Replacement) {
  const clang::SourceLocation Begin =
      endOfToken(SourceManager, LangOptions, LeftToken);
  const clang::SourceLocation End =
      expansionLoc(SourceManager, RightLocation);
  if (!isEditableLocation(SourceManager, Begin) ||
      !isEditableLocation(SourceManager, End) ||
      SourceManager.getFileID(Begin) != SourceManager.getFileID(End)) {
    return false;
  }

  const unsigned BeginOffset = SourceManager.getFileOffset(Begin);
  const unsigned EndOffset = SourceManager.getFileOffset(End);
  if (EndOffset < BeginOffset) {
    return false;
  }

  return !Rewrite.ReplaceText(Begin, EndOffset - BeginOffset, Replacement);
}

std::optional<CriteriaSpec> loadCriteriaSpec(llvm::StringRef CriteriaPath,
                                             std::string &ErrorMessage) {
  const std::optional<std::string> Raw = readFile(CriteriaPath);
  if (!Raw.has_value()) {
    ErrorMessage = "failed to read criteria: " + CriteriaPath.str();
    return std::nullopt;
  }

  llvm::Expected<llvm::json::Value> Parsed = llvm::json::parse(*Raw);
  if (!Parsed) {
    ErrorMessage = llvm::toString(Parsed.takeError());
    return std::nullopt;
  }

  const llvm::json::Object *Object = Parsed->getAsObject();
  if (Object == nullptr) {
    ErrorMessage = "criteria must be a JSON object";
    return std::nullopt;
  }

  const llvm::Optional<llvm::StringRef> CriterionKind =
      Object->getString("criterion_kind");
  if (!CriterionKind.hasValue() || *CriterionKind != "value") {
    ErrorMessage = "criterion_kind must be 'value'";
    return std::nullopt;
  }

  const llvm::json::Array *Variables = Object->getArray("variables");
  if (Variables == nullptr || Variables->empty()) {
    ErrorMessage = "variables must be a non-empty array";
    return std::nullopt;
  }

  CriteriaSpec Spec;
  const llvm::Optional<llvm::StringRef> SeedId = Object->getString("seed_id");
  Spec.SeedId = SeedId.hasValue() ? SeedId->str() : "";
  for (const llvm::json::Value &Value : *Variables) {
    const llvm::Optional<llvm::StringRef> Variable = Value.getAsString();
    if (!Variable.hasValue() || Variable->empty()) {
      ErrorMessage = "variables must contain non-empty strings";
      return std::nullopt;
    }
    Spec.Variables.push_back(Variable->str());
  }

  return Spec;
}

std::optional<clang::SourceLocation>
statementBoundary(const clang::Stmt *Statement,
                  const clang::SourceManager &SourceManager,
                  const clang::LangOptions &LangOptions) {
  if (!isEditableStatement(SourceManager, Statement)) {
    return std::nullopt;
  }

  const clang::SourceLocation Tail =
      expansionLoc(SourceManager, Statement->getEndLoc());
  const clang::SourceLocation AfterTail =
      endOfToken(SourceManager, LangOptions, Tail);
  if (AfterTail.isInvalid()) {
    return std::nullopt;
  }

  clang::Token NextToken;
  if (clang::Lexer::getRawToken(AfterTail, NextToken, SourceManager,
                                LangOptions, true)) {
    return AfterTail;
  }

  if (NextToken.is(clang::tok::semi) || NextToken.is(clang::tok::r_brace)) {
    const clang::SourceLocation AfterBoundary =
        endOfToken(SourceManager, LangOptions, NextToken.getLocation());
    if (AfterBoundary.isInvalid()) {
      return std::nullopt;
    }
    return AfterBoundary;
  }

  if (NextToken.is(clang::tok::kw_else) ||
      NextToken.is(clang::tok::kw_while)) {
    return NextToken.getLocation();
  }

  return AfterTail;
}

class Normalizer : public clang::RecursiveASTVisitor<Normalizer> {
public:
  explicit Normalizer(clang::ASTContext &Context, clang::Rewriter &Rewrite)
      : Context(Context),
        SourceManager(Context.getSourceManager()),
        LangOptions(Context.getLangOpts()), Rewrite(Rewrite) {}

  bool VisitIfStmt(clang::IfStmt *IfStatement) {
    if (IfStatement == nullptr) {
      return true;
    }

    const clang::Stmt *Then = IfStatement->getThen();
    const clang::Stmt *Else = IfStatement->getElse();

    if (Then != nullptr && !llvm::isa<clang::CompoundStmt>(Then) &&
        !llvm::isa<clang::IfStmt>(Then)) {
      wrapControlBody(IfStatement->getRParenLoc(), Then,
                      Else == nullptr ? " } else {}" : " }");
    } else if (Else == nullptr && Then != nullptr &&
               !llvm::isa<clang::IfStmt>(Then)) {
      insertAfterStatement(Then, " else {}");
    }

    if (Else != nullptr && !llvm::isa<clang::CompoundStmt>(Else) &&
        !llvm::isa<clang::IfStmt>(Else)) {
      wrapControlBody(IfStatement->getElseLoc(), Else, " }");
    }

    return true;
  }

  bool VisitWhileStmt(clang::WhileStmt *WhileStatement) {
    if (WhileStatement != nullptr) {
      wrapControlBody(WhileStatement->getRParenLoc(), WhileStatement->getBody(),
                      " }");
    }
    return true;
  }

  bool VisitForStmt(clang::ForStmt *ForStatement) {
    if (ForStatement != nullptr) {
      wrapControlBody(ForStatement->getRParenLoc(), ForStatement->getBody(),
                      " }");
    }
    return true;
  }

  bool VisitDoStmt(clang::DoStmt *DoStatement) {
    if (DoStatement != nullptr) {
      wrapControlBody(DoStatement->getDoLoc(), DoStatement->getBody(), " } ");
    }
    return true;
  }

private:
  bool wrapControlBody(clang::SourceLocation HeadToken, const clang::Stmt *Body,
                       llvm::StringRef ClosingSuffix) {
    if (Body == nullptr || llvm::isa<clang::CompoundStmt>(Body) ||
        !isEditableLocation(SourceManager, HeadToken) ||
        !isEditableStatement(SourceManager, Body)) {
      return false;
    }

    const std::optional<clang::SourceLocation> Boundary =
        statementBoundary(Body, SourceManager, LangOptions);
    if (!Boundary.has_value()) {
      return false;
    }

    if (!replaceBetween(Rewrite, SourceManager, LangOptions, HeadToken,
                        Body->getBeginLoc(), " { ")) {
      return false;
    }

    Rewrite.InsertText(Boundary.value(), ClosingSuffix, false, false);
    return true;
  }

  bool insertAfterStatement(const clang::Stmt *Statement,
                            llvm::StringRef Suffix) {
    const std::optional<clang::SourceLocation> Boundary =
        statementBoundary(Statement, SourceManager, LangOptions);
    if (!Boundary.has_value()) {
      return false;
    }

    Rewrite.InsertText(Boundary.value(), Suffix, false, false);
    return true;
  }

  clang::ASTContext &Context;
  clang::SourceManager &SourceManager;
  const clang::LangOptions &LangOptions;
  clang::Rewriter &Rewrite;
};

std::optional<std::string> normalizeSource(llvm::StringRef SeedPath,
                                           llvm::StringRef Code,
                                           std::string &ErrorMessage) {
  std::unique_ptr<clang::ASTUnit> Unit = buildAstUnit(SeedPath, Code);
  if (Unit == nullptr) {
    ErrorMessage = "failed to build AST for seed: " + SeedPath.str();
    return std::nullopt;
  }

  clang::Rewriter Rewrite;
  Rewrite.setSourceMgr(Unit->getSourceManager(), Unit->getLangOpts());

  Normalizer Visitor(Unit->getASTContext(), Rewrite);
  Visitor.TraverseDecl(Unit->getASTContext().getTranslationUnitDecl());

  if (const clang::RewriteBuffer *Buffer =
          Rewrite.getRewriteBufferFor(Unit->getSourceManager().getMainFileID());
      Buffer != nullptr) {
    return std::string(Buffer->begin(), Buffer->end());
  }

  return Code.str();
}

class SiteCollector : public clang::RecursiveASTVisitor<SiteCollector> {
public:
  explicit SiteCollector(clang::ASTContext &Context)
      : Context(Context),
        SourceManager(Context.getSourceManager()),
        LangOptions(Context.getLangOpts()) {}

  void addTranslationUnitAnchor() {
    const clang::SourceLocation Location =
        SourceManager.getLocForStartOfFile(SourceManager.getMainFileID());
    if (!isEditableLocation(SourceManager, Location)) {
      return;
    }

    addSite("tu_anchor", {"MR2"}, "", "TranslationUnitDecl", Location);
  }

  bool TraverseFunctionDecl(clang::FunctionDecl *Function) {
    const std::optional<std::string> PreviousFunction = CurrentFunctionName;
    if (Function != nullptr && Function->hasBody() &&
        Function->isThisDeclarationADefinition()) {
      CurrentFunctionName = Function->getNameAsString();
    } else {
      CurrentFunctionName.reset();
    }

    const bool Result =
        clang::RecursiveASTVisitor<SiteCollector>::TraverseFunctionDecl(
            Function);
    CurrentFunctionName = PreviousFunction;
    return Result;
  }

  bool VisitCompoundStmt(clang::CompoundStmt *Block) {
    if (Block == nullptr || !CurrentFunctionName.has_value()) {
      return true;
    }

    for (const clang::Stmt *Statement : Block->body()) {
      if (!isCandidateStatement(Statement)) {
        continue;
      }

      const clang::SourceLocation Location =
          expansionLoc(SourceManager, Statement->getBeginLoc());
      addSite("stmt_boundary", {"MR2", "MR3"}, *CurrentFunctionName,
              Statement->getStmtClassName(), Location);
      addSite("dead_wrapper_site", {"MR3"}, *CurrentFunctionName,
              Statement->getStmtClassName(), Location);
    }

    return true;
  }

  llvm::json::Array toJson() const {
    llvm::json::Array Result;
    for (const SiteRecord &Site : Sites) {
      llvm::json::Array PreferredFor;
      for (const std::string &Rule : Site.PreferredFor) {
        PreferredFor.push_back(Rule);
      }

      llvm::json::Object Payload;
      Payload["site_id"] = Site.SiteId;
      Payload["site_kind"] = Site.SiteKind;
      Payload["preferred_for"] = std::move(PreferredFor);
      Payload["function_name"] = Site.FunctionName;
      Payload["node_kind"] = Site.NodeKind;
      Payload["line"] = Site.Line;
      Payload["column"] = Site.Column;
      Payload["source_offset"] = Site.Offset;
      Result.push_back(std::move(Payload));
    }
    return Result;
  }

  std::size_t size() const { return Sites.size(); }

private:
  bool isCandidateStatement(const clang::Stmt *Statement) const {
    return Statement != nullptr && !llvm::isa<clang::CompoundStmt>(Statement) &&
           !llvm::isa<clang::NullStmt>(Statement) &&
           !llvm::isa<clang::LabelStmt>(Statement) &&
           !llvm::isa<clang::CaseStmt>(Statement) &&
           !llvm::isa<clang::DefaultStmt>(Statement) &&
           isEditableStatement(SourceManager, Statement);
  }

  void addSite(llvm::StringRef SiteKind,
               std::vector<std::string> PreferredFor,
               llvm::StringRef FunctionName, llvm::StringRef NodeKind,
               clang::SourceLocation Location) {
    if (!isEditableLocation(SourceManager, Location)) {
      return;
    }

    const clang::PresumedLoc Presumed = SourceManager.getPresumedLoc(Location);
    if (Presumed.isInvalid()) {
      return;
    }

    Sites.push_back(SiteRecord{
        nextSiteId(SiteKind, SourceManager.getFileOffset(Location)),
        SiteKind.str(),
        std::move(PreferredFor),
        FunctionName.str(),
        NodeKind.str(),
        Presumed.getLine(),
        Presumed.getColumn(),
        SourceManager.getFileOffset(Location),
    });
  }

  std::string nextSiteId(llvm::StringRef Prefix, unsigned Offset) {
    ++NextSiteId;
    return Prefix.str() + "-" + std::to_string(NextSiteId) + "-" +
           std::to_string(Offset);
  }

  clang::ASTContext &Context;
  clang::SourceManager &SourceManager;
  const clang::LangOptions &LangOptions;
  std::optional<std::string> CurrentFunctionName;
  std::vector<SiteRecord> Sites;
  unsigned NextSiteId = 0;
};

bool isMutationCandidateStatement(const clang::Stmt *Statement,
                                  const clang::SourceManager &SourceManager) {
  return Statement != nullptr && !llvm::isa<clang::CompoundStmt>(Statement) &&
         !llvm::isa<clang::DeclStmt>(Statement) &&
         !llvm::isa<clang::NullStmt>(Statement) &&
         !llvm::isa<clang::LabelStmt>(Statement) &&
         !llvm::isa<clang::CaseStmt>(Statement) &&
         !llvm::isa<clang::DefaultStmt>(Statement) &&
         isEditableStatement(SourceManager, Statement);
}

bool functionHasParameter(const clang::FunctionDecl *Function,
                          llvm::StringRef VariableName) {
  if (Function == nullptr) {
    return false;
  }

  for (const clang::ParmVarDecl *Parameter : Function->parameters()) {
    if (Parameter != nullptr && Parameter->getName() == VariableName) {
      return true;
    }
  }
  return false;
}

bool translationUnitHasGlobalVariable(clang::ASTContext &Context,
                                      llvm::StringRef VariableName) {
  for (const clang::Decl *Declaration :
       Context.getTranslationUnitDecl()->decls()) {
    const auto *Variable = llvm::dyn_cast<clang::VarDecl>(Declaration);
    if (Variable != nullptr && Variable->hasGlobalStorage() &&
        Variable->getName() == VariableName) {
      return true;
    }
  }
  return false;
}

bool blockDeclaresVariableBefore(const clang::CompoundStmt *Body,
                                 const clang::Stmt *Target,
                                 llvm::StringRef VariableName) {
  if (Body == nullptr || Target == nullptr) {
    return false;
  }

  for (const clang::Stmt *Statement : Body->body()) {
    if (Statement == Target) {
      return false;
    }

    const auto *DeclarationStatement = llvm::dyn_cast<clang::DeclStmt>(Statement);
    if (DeclarationStatement == nullptr) {
      continue;
    }

    for (const clang::Decl *Declaration : DeclarationStatement->decls()) {
      const auto *Variable = llvm::dyn_cast<clang::VarDecl>(Declaration);
      if (Variable != nullptr && Variable->getName() == VariableName) {
        return true;
      }
    }
  }

  return false;
}

bool variableIsLikelyInScope(clang::ASTContext &Context,
                             const clang::FunctionDecl *Function,
                             const clang::CompoundStmt *Body,
                             const clang::Stmt *Target,
                             llvm::StringRef VariableName) {
  return functionHasParameter(Function, VariableName) ||
         translationUnitHasGlobalVariable(Context, VariableName) ||
         blockDeclaresVariableBefore(Body, Target, VariableName);
}

std::optional<MutationSelection>
makeSelection(const clang::SourceManager &SourceManager,
              llvm::StringRef FunctionName, const clang::Stmt *Statement) {
  if (!isEditableStatement(SourceManager, Statement)) {
    return std::nullopt;
  }

  const clang::SourceLocation Location =
      expansionLoc(SourceManager, Statement->getBeginLoc());
  const clang::PresumedLoc Presumed = SourceManager.getPresumedLoc(Location);
  if (Presumed.isInvalid()) {
    return std::nullopt;
  }

  return MutationSelection{
      FunctionName.str(),
      Statement->getStmtClassName(),
      Presumed.getLine(),
      Presumed.getColumn(),
      SourceManager.getFileOffset(Location),
      Location,
  };
}

std::optional<MutationSelection>
selectPreferredStatementSite(clang::ASTContext &Context,
                             const std::string *CriterionVariable) {
  clang::FunctionDecl *FallbackFunction = nullptr;
  const clang::Stmt *FallbackStatement = nullptr;

  for (clang::Decl *Declaration :
       Context.getTranslationUnitDecl()->decls()) {
    auto *Function = llvm::dyn_cast<clang::FunctionDecl>(Declaration);
    if (Function == nullptr || !Function->hasBody() ||
        !Function->isThisDeclarationADefinition()) {
      continue;
    }

    const auto *Body = llvm::dyn_cast<clang::CompoundStmt>(Function->getBody());
    if (Body == nullptr) {
      continue;
    }

    for (const clang::Stmt *Statement : Body->body()) {
      if (!isMutationCandidateStatement(Statement,
                                        Context.getSourceManager())) {
        continue;
      }
      if (CriterionVariable != nullptr &&
          !variableIsLikelyInScope(Context, Function, Body, Statement,
                                   *CriterionVariable)) {
        continue;
      }

      if (Function->getName() == "main") {
        return makeSelection(Context.getSourceManager(), "main", Statement);
      }

      if (FallbackFunction == nullptr) {
        FallbackFunction = Function;
        FallbackStatement = Statement;
      }
    }
  }

  if (FallbackFunction != nullptr && FallbackStatement != nullptr) {
    return makeSelection(Context.getSourceManager(),
                         FallbackFunction->getName(), FallbackStatement);
  }

  return std::nullopt;
}

std::string makeIndent(unsigned Column) {
  if (Column <= 1) {
    return "";
  }
  return std::string(Column - 1, ' ');
}

unsigned translationUnitAnchorOffset(llvm::StringRef Source) {
  std::size_t Cursor = 0;
  std::size_t Anchor = 0;

  while (Cursor < Source.size()) {
    const std::size_t LineEnd = Source.find('\n', Cursor);
    const std::size_t EffectiveEnd =
        LineEnd == llvm::StringRef::npos ? Source.size() : LineEnd;
    const std::size_t Next =
        EffectiveEnd == Source.size() ? EffectiveEnd : EffectiveEnd + 1;

    const llvm::StringRef Line = Source.slice(Cursor, EffectiveEnd);
    const llvm::StringRef Trimmed = Line.trim();
    if (Trimmed.startswith("#include")) {
      Anchor = Next;
      Cursor = Next;
      continue;
    }
    if (Trimmed.empty() && Anchor > 0) {
      Anchor = Next;
      Cursor = Next;
      continue;
    }
    break;
  }

  return static_cast<unsigned>(Anchor);
}

clang::SourceLocation translationUnitAnchorLocation(clang::ASTUnit &Unit,
                                                    llvm::StringRef Source) {
  const clang::SourceLocation FileStart =
      Unit.getSourceManager().getLocForStartOfFile(
          Unit.getSourceManager().getMainFileID());
  return FileStart.getLocWithOffset(
      static_cast<int>(translationUnitAnchorOffset(Source)));
}

std::string materializeMutant(clang::ASTUnit &Unit, const clang::Rewriter &Rewrite,
                              llvm::StringRef OriginalSource) {
  std::string Mutant = OriginalSource.str();
  if (const clang::RewriteBuffer *Buffer =
          Rewrite.getRewriteBufferFor(Unit.getSourceManager().getMainFileID());
      Buffer != nullptr) {
    Mutant.assign(Buffer->begin(), Buffer->end());
  }
  return Mutant;
}

std::string buildMr2LocalAssignmentChainPayload(int RngSeed,
                                                llvm::StringRef Indent) {
  const std::string TmpName = "mr2_tmp_" + std::to_string(RngSeed);
  const std::string SinkName = "mr2_sink_" + std::to_string(RngSeed);
  const std::string BaseIndent = Indent.str();
  return BaseIndent + "int " + TmpName + " = " + std::to_string(RngSeed) +
         ";\n" + BaseIndent + "int " + SinkName + " = " + TmpName +
         " + 1;\n" + BaseIndent + "(void)" + SinkName + ";\n";
}

std::string buildMr2IndependentLoopPayload(int RngSeed, llvm::StringRef Indent) {
  const std::string AccName = "mr2_acc_" + std::to_string(RngSeed);
  const std::string IndexName = "mr2_i_" + std::to_string(RngSeed);
  const std::string BaseIndent = Indent.str();
  const std::string InnerIndent = BaseIndent + "    ";
  return BaseIndent + "int " + AccName + " = 0;\n" + BaseIndent + "for (int " +
         IndexName + " = 0; " + IndexName + " < 3; ++" + IndexName +
         ") {\n" + InnerIndent + AccName + " += " + IndexName + " + " +
         std::to_string(RngSeed) + ";\n" + BaseIndent + "}\n" + BaseIndent +
         "(void)" + AccName + ";\n";
}

std::string buildMr2HelperDefinition(int RngSeed) {
  const std::string HelperName = "mr2_helper_" + std::to_string(RngSeed);
  return "static int " + HelperName + "(int seed) {\n"
         "    return seed * 2 + 1;\n"
         "}\n\n";
}

std::string buildMr2HelperCallPayload(int RngSeed, llvm::StringRef Indent) {
  const std::string HelperName = "mr2_helper_" + std::to_string(RngSeed);
  const std::string SinkName = "mr2_sink_" + std::to_string(RngSeed);
  const std::string BaseIndent = Indent.str();
  return BaseIndent + "int " + SinkName + " = " + HelperName + "(" +
         std::to_string(RngSeed) + ");\n" + BaseIndent + "(void)" + SinkName +
         ";\n";
}

std::string buildMr3IfZeroReadRelatedPayload(llvm::StringRef CriterionVariable,
                                             int RngSeed, llvm::StringRef Indent) {
  const std::string TempName = "mr3_tmp_" + std::to_string(RngSeed);
  const std::string BaseIndent = Indent.str();
  const std::string InnerIndent = BaseIndent + "    ";
  return BaseIndent + "if (0) {\n" + InnerIndent + "int " + TempName +
         " = " + CriterionVariable.str() + ";\n" + InnerIndent + "(void)" +
         TempName + ";\n" + BaseIndent + "}\n";
}

std::string buildMr3ConstantFalseReadRelatedPayload(
    llvm::StringRef CriterionVariable, int RngSeed, llvm::StringRef Indent) {
  const std::string TempName = "mr3_tmp_" + std::to_string(RngSeed);
  const std::string BaseIndent = Indent.str();
  const std::string InnerIndent = BaseIndent + "    ";
  return BaseIndent + "if ((1 == 0) && (" + CriterionVariable.str() +
         " >= 0)) {\n" + InnerIndent + "int " + TempName + " = " +
         CriterionVariable.str() + " + 1;\n" + InnerIndent + "(void)" +
         TempName + ";\n" + BaseIndent + "}\n";
}

std::string buildMr3IfZeroScalarNoisePayload(int RngSeed, llvm::StringRef Indent) {
  const std::string NoiseName = "mr3_noise_" + std::to_string(RngSeed);
  const std::string BaseIndent = Indent.str();
  const std::string InnerIndent = BaseIndent + "    ";
  return BaseIndent + "if (0) {\n" + InnerIndent + "int " + NoiseName +
         " = " + std::to_string(RngSeed) + ";\n" + InnerIndent + NoiseName +
         " += 2;\n" + InnerIndent + "(void)" + NoiseName + ";\n" +
         BaseIndent + "}\n";
}

bool ensureDirectory(llvm::StringRef Path) {
  std::error_code Error = llvm::sys::fs::create_directories(Path);
  return !Error;
}

std::optional<MutationPlan>
buildMr2LocalAssignmentChain(const MutationBuildInput &Input) {
  const std::optional<MutationSelection> Selection =
      selectPreferredStatementSite(Input.Unit.getASTContext(), nullptr);
  if (!Selection.has_value()) {
    return std::nullopt;
  }

  clang::Rewriter Rewrite;
  Rewrite.setSourceMgr(Input.Unit.getSourceManager(), Input.Unit.getLangOpts());
  Rewrite.InsertText(
      Selection->InsertionLocation,
      buildMr2LocalAssignmentChainPayload(Input.RngSeed,
                                          makeIndent(Selection->Column)),
      false, false);

  return MutationPlan{
      "MR2",
      "local_assignment_chain",
      *Selection,
      {"mr2_tmp_" + std::to_string(Input.RngSeed),
       "mr2_sink_" + std::to_string(Input.RngSeed)},
      materializeMutant(Input.Unit, Rewrite, Input.NormalizedSource),
  };
}

std::optional<MutationPlan>
buildMr2IndependentLoopCompute(const MutationBuildInput &Input) {
  const std::optional<MutationSelection> Selection =
      selectPreferredStatementSite(Input.Unit.getASTContext(), nullptr);
  if (!Selection.has_value()) {
    return std::nullopt;
  }

  clang::Rewriter Rewrite;
  Rewrite.setSourceMgr(Input.Unit.getSourceManager(), Input.Unit.getLangOpts());
  Rewrite.InsertText(
      Selection->InsertionLocation,
      buildMr2IndependentLoopPayload(Input.RngSeed,
                                     makeIndent(Selection->Column)),
      false, false);

  return MutationPlan{
      "MR2",
      "independent_loop_compute",
      *Selection,
      {"mr2_acc_" + std::to_string(Input.RngSeed),
       "mr2_i_" + std::to_string(Input.RngSeed)},
      materializeMutant(Input.Unit, Rewrite, Input.NormalizedSource),
  };
}

std::optional<MutationPlan>
buildMr2IndependentHelperCall(const MutationBuildInput &Input) {
  const std::optional<MutationSelection> Selection =
      selectPreferredStatementSite(Input.Unit.getASTContext(), nullptr);
  if (!Selection.has_value()) {
    return std::nullopt;
  }

  clang::Rewriter Rewrite;
  Rewrite.setSourceMgr(Input.Unit.getSourceManager(), Input.Unit.getLangOpts());
  Rewrite.InsertText(translationUnitAnchorLocation(Input.Unit, Input.NormalizedSource),
                     buildMr2HelperDefinition(Input.RngSeed), false, false);
  Rewrite.InsertText(
      Selection->InsertionLocation,
      buildMr2HelperCallPayload(Input.RngSeed, makeIndent(Selection->Column)),
      false, false);

  return MutationPlan{
      "MR2",
      "independent_helper_call",
      *Selection,
      {"mr2_helper_" + std::to_string(Input.RngSeed),
       "mr2_sink_" + std::to_string(Input.RngSeed)},
      materializeMutant(Input.Unit, Rewrite, Input.NormalizedSource),
  };
}

std::optional<MutationPlan>
buildMr3IfZeroWrapperReadRelated(const MutationBuildInput &Input) {
  const std::optional<MutationSelection> Selection = selectPreferredStatementSite(
      Input.Unit.getASTContext(), &Input.Criteria.Variables.front());
  if (!Selection.has_value()) {
    return std::nullopt;
  }

  clang::Rewriter Rewrite;
  Rewrite.setSourceMgr(Input.Unit.getSourceManager(), Input.Unit.getLangOpts());
  Rewrite.InsertText(
      Selection->InsertionLocation,
      buildMr3IfZeroReadRelatedPayload(Input.Criteria.Variables.front(),
                                       Input.RngSeed,
                                       makeIndent(Selection->Column)),
      false, false);

  return MutationPlan{
      "MR3",
      "if_zero_wrapper_read_related",
      *Selection,
      {"mr3_tmp_" + std::to_string(Input.RngSeed)},
      materializeMutant(Input.Unit, Rewrite, Input.NormalizedSource),
  };
}

std::optional<MutationPlan>
buildMr3ConstantFalseWrapperReadRelated(const MutationBuildInput &Input) {
  const std::optional<MutationSelection> Selection = selectPreferredStatementSite(
      Input.Unit.getASTContext(), &Input.Criteria.Variables.front());
  if (!Selection.has_value()) {
    return std::nullopt;
  }

  clang::Rewriter Rewrite;
  Rewrite.setSourceMgr(Input.Unit.getSourceManager(), Input.Unit.getLangOpts());
  Rewrite.InsertText(
      Selection->InsertionLocation,
      buildMr3ConstantFalseReadRelatedPayload(Input.Criteria.Variables.front(),
                                              Input.RngSeed,
                                              makeIndent(Selection->Column)),
      false, false);

  return MutationPlan{
      "MR3",
      "constant_false_wrapper_read_related",
      *Selection,
      {"mr3_tmp_" + std::to_string(Input.RngSeed)},
      materializeMutant(Input.Unit, Rewrite, Input.NormalizedSource),
  };
}

std::optional<MutationPlan>
buildMr3IfZeroWrapperAdjacentScalarNoise(const MutationBuildInput &Input) {
  const std::optional<MutationSelection> Selection =
      selectPreferredStatementSite(Input.Unit.getASTContext(), nullptr);
  if (!Selection.has_value()) {
    return std::nullopt;
  }

  clang::Rewriter Rewrite;
  Rewrite.setSourceMgr(Input.Unit.getSourceManager(), Input.Unit.getLangOpts());
  Rewrite.InsertText(
      Selection->InsertionLocation,
      buildMr3IfZeroScalarNoisePayload(Input.RngSeed,
                                       makeIndent(Selection->Column)),
      false, false);

  return MutationPlan{
      "MR3",
      "if_zero_wrapper_adjacent_scalar_noise",
      *Selection,
      {"mr3_noise_" + std::to_string(Input.RngSeed)},
      materializeMutant(Input.Unit, Rewrite, Input.NormalizedSource),
  };
}

std::optional<MutationPlan>
selectMutationPlan(llvm::StringRef MutationRule, const MutationBuildInput &Input,
                   std::string &ErrorMessage) {
  using BuilderFn = std::optional<MutationPlan> (*)(const MutationBuildInput &);

  std::vector<BuilderFn> Builders;
  if (MutationRule == "MR2") {
    Builders = {
        buildMr2LocalAssignmentChain,
        buildMr2IndependentLoopCompute,
        buildMr2IndependentHelperCall,
    };
  } else {
    Builders = {
        buildMr3IfZeroWrapperReadRelated,
        buildMr3ConstantFalseWrapperReadRelated,
        buildMr3IfZeroWrapperAdjacentScalarNoise,
    };
  }

  std::vector<MutationPlan> Candidates;
  for (BuilderFn Builder : Builders) {
    if (std::optional<MutationPlan> Candidate = Builder(Input);
        Candidate.has_value()) {
      Candidates.push_back(std::move(*Candidate));
    }
  }

  if (Candidates.empty()) {
    ErrorMessage = "no candidate phase-1 patterns available for " +
                   MutationRule.str();
    return std::nullopt;
  }

  const std::size_t Index =
      static_cast<std::size_t>(static_cast<std::uint32_t>(Input.RngSeed)) %
      Candidates.size();
  return std::move(Candidates[Index]);
}

llvm::json::Object mutationMetaToJson(const CriteriaSpec &Criteria,
                                      int RngSeed,
                                      const MutationPlan &Plan) {
  llvm::json::Array InsertedSymbols;
  for (const std::string &Symbol : Plan.InsertedSymbols) {
    InsertedSymbols.push_back(Symbol);
  }

  llvm::json::Array FailureHistory;

  llvm::json::Object Root;
  Root["mr"] = Plan.MutationRule;
  Root["seed_id"] = Criteria.SeedId;
  Root["rng_seed"] = RngSeed;
  Root["selected_pattern"] = Plan.SelectedPattern;
  Root["selected_site"] = siteToJson(Plan.Selection);
  Root["inserted_symbols"] = std::move(InsertedSymbols);
  Root["attempt_count"] = 1;
  Root["validation_status"] = "not_run";
  Root["failure_reason"] = nullptr;
  Root["failure_history"] = std::move(FailureHistory);
  return Root;
}

int runDiscoverSites(int Argc, const char **Argv) {
  std::string SeedPath;
  for (int Index = 1; Index < Argc; ++Index) {
    const llvm::StringRef Argument(Argv[Index]);
    if (Argument == "--seed" && Index + 1 < Argc) {
      SeedPath = Argv[++Index];
      continue;
    }

    llvm::errs() << "unknown or incomplete argument: " << Argument << "\n";
    return 1;
  }

  if (SeedPath.empty()) {
    llvm::errs() << "discover-sites requires --seed <path>\n";
    return 1;
  }

  const std::optional<std::string> Code = readFile(SeedPath);
  if (!Code.has_value()) {
    llvm::errs() << "failed to read seed: " << SeedPath << "\n";
    return 2;
  }

  std::unique_ptr<clang::ASTUnit> Unit = buildAstUnit(SeedPath, Code.value());
  if (Unit == nullptr) {
    llvm::errs() << "failed to build AST for seed: " << SeedPath << "\n";
    return 2;
  }

  SiteCollector Collector(Unit->getASTContext());
  Collector.addTranslationUnitAnchor();
  Collector.TraverseDecl(Unit->getASTContext().getTranslationUnitDecl());

  llvm::json::Object Root;
  Root["seed"] = SeedPath;
  Root["site_count"] = static_cast<std::int64_t>(Collector.size());
  Root["sites"] = Collector.toJson();

  llvm::outs() << llvm::formatv("{0:2}\n", llvm::json::Value(std::move(Root)));
  return 0;
}

int runNormalize(int Argc, const char **Argv) {
  std::string SeedPath;
  std::string OutputPath;
  for (int Index = 1; Index < Argc; ++Index) {
    const llvm::StringRef Argument(Argv[Index]);
    if (Argument == "--seed" && Index + 1 < Argc) {
      SeedPath = Argv[++Index];
      continue;
    }
    if (Argument == "--output" && Index + 1 < Argc) {
      OutputPath = Argv[++Index];
      continue;
    }

    llvm::errs() << "unknown or incomplete argument: " << Argument << "\n";
    return 1;
  }

  if (SeedPath.empty() || OutputPath.empty()) {
    llvm::errs() << "normalize requires --seed <path> --output <path>\n";
    return 1;
  }

  const std::optional<std::string> Code = readFile(SeedPath);
  if (!Code.has_value()) {
    llvm::errs() << "failed to read seed: " << SeedPath << "\n";
    return 2;
  }

  std::string ErrorMessage;
  const std::optional<std::string> Normalized =
      normalizeSource(SeedPath, Code.value(), ErrorMessage);
  if (!Normalized.has_value()) {
    llvm::errs() << ErrorMessage << "\n";
    return 2;
  }

  if (!writeFile(OutputPath, *Normalized)) {
    llvm::errs() << "failed to write normalized output: " << OutputPath
                 << "\n";
    return 2;
  }

  return 0;
}

int runMutate(int Argc, const char **Argv) {
  std::string MutationRule;
  std::string SeedPath;
  std::string CriteriaPath;
  std::string OutputDir;
  int RngSeed = 0;

  for (int Index = 1; Index < Argc; ++Index) {
    const llvm::StringRef Argument(Argv[Index]);
    if (Argument == "--mr" && Index + 1 < Argc) {
      MutationRule = Argv[++Index];
      continue;
    }
    if (Argument == "--seed" && Index + 1 < Argc) {
      SeedPath = Argv[++Index];
      continue;
    }
    if (Argument == "--criteria" && Index + 1 < Argc) {
      CriteriaPath = Argv[++Index];
      continue;
    }
    if (Argument == "--rng-seed" && Index + 1 < Argc) {
      const llvm::StringRef RawSeed(Argv[++Index]);
      if (RawSeed.getAsInteger(10, RngSeed)) {
        llvm::errs() << "invalid rng seed: " << RawSeed << "\n";
        return 1;
      }
      continue;
    }
    if (Argument == "--output-dir" && Index + 1 < Argc) {
      OutputDir = Argv[++Index];
      continue;
    }

    llvm::errs() << "unknown or incomplete argument: " << Argument << "\n";
    return 1;
  }

  if (MutationRule != "MR2" && MutationRule != "MR3") {
    llvm::errs() << "mutate currently supports only --mr MR2|MR3\n";
    return 1;
  }
  if (SeedPath.empty() || CriteriaPath.empty() || OutputDir.empty()) {
    llvm::errs()
        << "mutate requires --mr --seed --criteria --rng-seed --output-dir\n";
    return 1;
  }

  std::string CriteriaError;
  const std::optional<CriteriaSpec> Criteria =
      loadCriteriaSpec(CriteriaPath, CriteriaError);
  if (!Criteria.has_value()) {
    llvm::errs() << CriteriaError << "\n";
    return 2;
  }

  const std::optional<std::string> Code = readFile(SeedPath);
  if (!Code.has_value()) {
    llvm::errs() << "failed to read seed: " << SeedPath << "\n";
    return 2;
  }

  std::string NormalizeError;
  const std::optional<std::string> Normalized =
      normalizeSource(SeedPath, Code.value(), NormalizeError);
  if (!Normalized.has_value()) {
    llvm::errs() << NormalizeError << "\n";
    return 2;
  }

  std::unique_ptr<clang::ASTUnit> Unit = buildAstUnit(SeedPath, *Normalized);
  if (Unit == nullptr) {
    llvm::errs() << "failed to build normalized AST for seed: " << SeedPath
                 << "\n";
    return 2;
  }

  const MutationBuildInput Input{
      *Unit,
      *Normalized,
      *Criteria,
      RngSeed,
  };

  std::string MutationError;
  const std::optional<MutationPlan> Plan =
      selectMutationPlan(MutationRule, Input, MutationError);
  if (!Plan.has_value()) {
    llvm::errs() << MutationError << "\n";
    return 2;
  }

  if (!ensureDirectory(OutputDir)) {
    llvm::errs() << "failed to create output dir: " << OutputDir << "\n";
    return 2;
  }

  llvm::SmallString<256> MutantPath(OutputDir);
  llvm::sys::path::append(MutantPath, "mutant.c");
  if (!writeFile(MutantPath, Plan->MutantSource)) {
    llvm::errs() << "failed to write mutant: " << MutantPath << "\n";
    return 2;
  }

  llvm::SmallString<256> MetaPath(OutputDir);
  llvm::sys::path::append(MetaPath, "mutation_meta.json");
  llvm::json::Object MetaPayload =
      mutationMetaToJson(*Criteria, RngSeed, *Plan);
  std::string MetaText;
  llvm::raw_string_ostream MetaStream(MetaText);
  MetaStream << llvm::formatv("{0:2}\n", llvm::json::Value(std::move(MetaPayload)));
  MetaStream.flush();
  if (!writeFile(MetaPath, MetaText)) {
    llvm::errs() << "failed to write mutation meta: " << MetaPath << "\n";
    return 2;
  }

  llvm::json::Object Root;
  Root["mr"] = Plan->MutationRule;
  Root["selected_pattern"] = Plan->SelectedPattern;
  Root["selected_site"] = siteToJson(Plan->Selection);
  llvm::json::Array InsertedSymbols;
  for (const std::string &Symbol : Plan->InsertedSymbols) {
    InsertedSymbols.push_back(Symbol);
  }
  Root["inserted_symbols"] = std::move(InsertedSymbols);
  Root["mutant_path"] = MutantPath.str().str();
  Root["mutation_meta_path"] = MetaPath.str().str();
  Root["seed_id"] = Criteria->SeedId;

  llvm::outs() << llvm::formatv("{0:2}\n", llvm::json::Value(std::move(Root)));
  return 0;
}

} // namespace

int main(int Argc, const char **Argv) {
  llvm::InitLLVM Init(Argc, Argv);

  if (Argc < 2) {
    llvm::errs() << "usage: mr_ast_tool <command> [options]\n";
    return 1;
  }

  const llvm::StringRef Command(Argv[1]);
  if (Command == "discover-sites") {
    return runDiscoverSites(Argc - 1, Argv + 1);
  }
  if (Command == "normalize") {
    return runNormalize(Argc - 1, Argv + 1);
  }
  if (Command == "mutate") {
    return runMutate(Argc - 1, Argv + 1);
  }

  llvm::errs() << "unknown command: " << Command << "\n";
  return 1;
}
