//
// Created by lyk on 18-5-18.
//

#ifndef KIRACC_ABSTRACTSYNTAXTREE_H
#define KIRACC_ABSTRACTSYNTAXTREE_H
#include <string>
#include <vector>

extern char *yytext;
extern int yylineno;

struct AbstractSyntaxNode{
    typedef AbstractSyntaxNode* AbstractSyntaxTree;
    std::string content;
    std::string name;
    int line;
    std::vector<AbstractSyntaxTree> sibling;
};

typedef AbstractSyntaxNode* AbstractSyntaxTree;


extern AbstractSyntaxTree root;
AbstractSyntaxTree createTree(const std::string& name, int subTreeNum, ...);
void freeTree(AbstractSyntaxTree node);
#endif //KIRACC_ABSTRACTSYNTAXTREE_H
