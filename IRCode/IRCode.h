//
// Created by lyk on 18-6-9.
//

#ifndef KIRACC_IRCODE_H
#define KIRACC_IRCODE_H

#include <iostream>
#include <vector>
#include "../AST/AbstractSyntaxTree.h"
#include "../Parser/Block.h"
#include <string>
extern AbstractSyntaxTree root;

using namespace std;

class IRCode {
private:

    vector<string> codeList;
    unordered_map<string, int> label;
public:
    void addCode(string statement);
    void printCode();
    void addCodeforVar(string tempname, string op, varNode node1, varNode node2);
    void addCodeforAssign(varNode node1,varNode node2);
    void addCodeforParameter(varNode node);
    void addCodeforReturn(varNode node);
    void addCodeforArgument(varNode node);
    void addCodeforLabel(string labelName);
    void addCodeforLabel();

    string getNodeName(varNode node);
    string getarrayNodeName(arrayNode node);
    string getLabelName();

    int tempNum = 0;
    int varNum = 0;
    int labelNum = 0;
    int arrayNum = 0;

};


#endif //KIRACC_IRCODE_H
