cmake_minimum_required(VERSION 3.20)

project(mr_ast_tool LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if(DEFINED ENV{LLVM_DIR})
    set(LLVM_DIR "$ENV{LLVM_DIR}" CACHE PATH "LLVM CMake package path")
else()
    set(LLVM_DIR "/usr/lib/llvm-14/lib/cmake/llvm" CACHE PATH "LLVM CMake package path")
endif()

if(DEFINED ENV{Clang_DIR})
    set(Clang_DIR "$ENV{Clang_DIR}" CACHE PATH "Clang CMake package path")
else()
    set(Clang_DIR "/usr/lib/llvm-14/lib/cmake/clang" CACHE PATH "Clang CMake package path")
endif()

find_package(LLVM REQUIRED CONFIG)
find_package(Clang REQUIRED CONFIG)

message(STATUS "Using LLVM ${LLVM_PACKAGE_VERSION} from ${LLVM_DIR}")
message(STATUS "Using Clang from ${Clang_DIR}")

add_executable(mr_ast_tool
    src/main.cpp
)

target_include_directories(mr_ast_tool
    SYSTEM PRIVATE
        ${LLVM_INCLUDE_DIRS}
        ${CLANG_INCLUDE_DIRS}
)

target_compile_definitions(mr_ast_tool PRIVATE ${LLVM_DEFINITIONS})

if(TARGET clang-cpp)
    target_link_libraries(mr_ast_tool PRIVATE clang-cpp LLVMCore LLVMSupport)
else()
    target_link_libraries(mr_ast_tool
        PRIVATE
            clangTooling
            clangFrontend
            clangSerialization
            clangDriver
            clangParse
            clangSema
            clangAnalysis
            clangEdit
            clangAST
            clangLex
            clangBasic
            clangRewrite
            LLVMCore
            LLVMSupport
    )
endif()
