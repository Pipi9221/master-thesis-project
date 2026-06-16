# Mutators

Mutation orchestration code lives here.

This layer should decide:

- which MR family is being built
- which payload pattern is selected
- which AST site is requested from the tooling layer
- how retries and metadata are managed

The `Clang LibTooling` AST rewrite engine itself belongs under `tooling/`.
