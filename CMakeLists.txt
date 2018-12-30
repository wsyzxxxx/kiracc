cmake_minimum_required(VERSION 3.1)
project(kiracc)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_C_COMPILER "g++")
set(CMAKE_CXX_COMPILER "g++")

add_executable(kiracc main.cpp Grammar/lex.yy.c AST/AbstractSyntaxTree.cpp AST/AbstractSyntaxTree.h util.h Grammar/y.tab.c Grammar/y.tab.h Parser/Parser.cpp Parser/Parser.h Parser/Block.cpp Parser/Block.h IRCode/IRCode.cpp IRCode/IRCode.h util.cpp)
