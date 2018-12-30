//
// Created by lyk on 18-6-9.
//

#ifndef KIRACC_PARSER_H
#define KIRACC_PARSER_H

#include <unordered_map>
#include "Block.h"
#include "../AST/AbstractSyntaxTree.h"
#include "../IRCode/IRCode.h"

class Parser {
public:
    Parser(AbstractSyntaxTree ast): progTree(ast) {}
    void parse();

    void generateIRCode();
private:
    void parseTree(AbstractSyntaxTree node);

    void parseStatement(AbstractSyntaxTree node);
    void parseLabelStatement(AbstractSyntaxTree node);
    varNode parseExpStatement(AbstractSyntaxTree node);
    void parseSelectStatement(AbstractSyntaxTree node);
    void parseIterStatement(AbstractSyntaxTree node);
    void parseJmpStatement(AbstractSyntaxTree node);

    void parseDeclaration(AbstractSyntaxTree node);
    void parseInitDeclarationList(string type, AbstractSyntaxTree list, bool isConst = false);
    void parseInitDeclarator(string type, AbstractSyntaxTree node, bool isConst = false);

    void parseFuncDef(AbstractSyntaxTree node);
    void parseParameterList(AbstractSyntaxTree paramList, string funcName, bool isdefine);
    void parseParameterDeclaration(AbstractSyntaxTree node, string funcName,bool isdefine);

    varNode parseExpression(AbstractSyntaxTree node);
    varNode parseAssignmentExpression(AbstractSyntaxTree node);
    varNode parseLogicalOrExpression(AbstractSyntaxTree node);
    varNode parseLogicalAndExpression(AbstractSyntaxTree node);
    varNode parseInclusiveOrExpression(AbstractSyntaxTree node);
    varNode parseExclusiveOrExpression(AbstractSyntaxTree node);
    varNode parseAndExpression(AbstractSyntaxTree node);
    varNode parseEqualExpression(AbstractSyntaxTree node);
    varNode parseRelationalExpression(AbstractSyntaxTree node);
    varNode parseShiftExpression(AbstractSyntaxTree node);
    varNode parseAdditiveExpression(AbstractSyntaxTree node);
    varNode parseMultiplyExpression(AbstractSyntaxTree node);
    varNode parseUnaryExpression(AbstractSyntaxTree node);
    varNode parsePostfixExpression(AbstractSyntaxTree node);
    varNode parsePrimaryExpression(AbstractSyntaxTree node);


    string lookupVarType(string name);			//返回变量类型，找不到返回""
    bool curruntVarExist(string name);		//查找当前块的var
    varNode createTempVar(string name, string type);

    unordered_map<string, funcNode> funcPool;			//函数池
    vector<Block> blockStack;				            //维护的栈
    IRCode innerCode;					                //中间代码生成工具
    AbstractSyntaxTree progTree;

    varNode searchNode(string name);
    void ParseArgumentExpressionList(AbstractSyntaxTree node, string func_name);
    int getBreakNum();
    string getFuncRType();
    varNode createTempVarNode(string temp_name, string node_type);
    arrayNode getArrayNode(string name);

};



//
#endif //KIRACC_PARSER_H
