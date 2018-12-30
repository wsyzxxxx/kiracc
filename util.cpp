//
// Created by lyk on 18-6-9.
//
#include "util.h"
#include "AST/AbstractSyntaxTree.h"
extern int errorState;
bool isHex(const char *num) {
    return strlen(num) > 2 && num[0] == '0' && (num[1] == 'x' || num[1] == 'X');
}

bool isOct(const char *num) {
    return strlen(num) > 1 && num[0] == '0' && num[1] != 'x' && num[1] != 'X';
}

std::string int2str(int val) {
    std::string ret;
    std::stack<char> stack;
    while(val){
        stack.push((val % 10) + '0');
        val /= 10;
    }
    if(stack.empty()){
        ret = "0";
    }else{
        while(!stack.empty()){
            ret.push_back(stack.top());
            stack.pop();
        }
    }
    return ret;
}

std::string getType(AbstractSyntaxTree node) {
    std::string result;
    bool confilct = false;
    for(auto i: node->sibling){
        if(i->name == "declaration_specifiers"){
            if(!i->content.empty()){
                return i->content;
            }
            result += getType(i);
            if(!result.empty() && !confilct){
                confilct = true;
            }else if(!result.empty() && confilct){
                error(node, "conflict type declaration");
                return "";
            }
        }
    }
    return result;
}

bool isConst(AbstractSyntaxTree node) {
    bool result = false;
    for(auto i: node->sibling){
        if(i->name == "type_qualifier" && i->content == "CONST"){
            return true;
        }else if(i->name == "declaration_specifiers"){
            result = result || isConst(i);
        }
    }
    return result;
}

void error(AbstractSyntaxTree node, std::string information){
    errorState = 1;
    std::cerr << "error at line" << node->line << ": " + information << std::endl;
}


