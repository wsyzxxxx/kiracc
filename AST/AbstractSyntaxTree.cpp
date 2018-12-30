//
// Created by lyk on 18-5-24.
//

#include <iostream>
#include <cstdarg>
#include "AbstractSyntaxTree.h"
#include "../util.h"
AbstractSyntaxTree createTree(const std::string &name, int subTreeNum, ...) {
    AbstractSyntaxTree treeNode = new(std::nothrow) AbstractSyntaxNode();
    if(treeNode == nullptr){
        std::cerr << "out of memory." << std::endl;
        exit(0);
    }
#ifdef DEBUG
    std::cout << name << endl;
#endif
    treeNode->name = name;
    va_list vargs;
    va_start(vargs, subTreeNum);
    if(subTreeNum > 0){
        AbstractSyntaxTree temp = va_arg(vargs, AbstractSyntaxTree);
#ifdef DEBUG
        std::cout << temp->name << endl;
#endif
        treeNode->sibling.push_back(temp);
        treeNode->line = temp->line;
        if(subTreeNum == 1){
            treeNode->content = temp->content;
        }else{
            for(int i = 1; i < subTreeNum; i++){
                AbstractSyntaxTree temp = va_arg(vargs, AbstractSyntaxTree);
                treeNode->sibling.push_back(temp);
            }
        }
    }else{
        int line = va_arg(vargs, int);
        treeNode->line = line;
        if(treeNode->name == "I_CONSTANT"){
            int val;
            if(isOct(yytext)){

                sscanf(yytext, "%o", &val);
            }else if(isHex(yytext)){
                sscanf(yytext, "%x", &val);
            }else{
                val = atoi(yytext);
            }
            treeNode->content = int2str(val);
        }else{
            treeNode->content = yytext;
        }
    }
    return treeNode;
}
void freeTree(AbstractSyntaxTree node) {
    if(!node){
        return;
    }
    for(auto i : node->sibling){
        freeTree(i);
    }
    delete node;
}