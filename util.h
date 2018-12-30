//
// Created by lyk on 18-5-24.
//

#ifndef KIRACC_UTIL_H
#define KIRACC_UTIL_H

#include <iostream>
#include <string>
#include <cstring>
#include <stack>
#include "AST/AbstractSyntaxTree.h"

bool isHex(const char* num);
bool isOct(const char* num);

std::string int2str(int val);
std::string getType(AbstractSyntaxTree node);
bool isConst(AbstractSyntaxTree node);

void error(AbstractSyntaxTree node, const std::string information);

#endif //KIRACC_UTIL_H
