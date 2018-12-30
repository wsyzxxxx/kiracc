//
// Created by lyk on 18-6-9.
//

#include <cassert>
#include "Parser.h"
#include "../util.h"
#include "../IRCode/IRCode.h"

using namespace std;

void Parser::parse() {
    Block x("global");
    blockStack.push_back(x);
    parseTree(root);
}

void Parser::parseTree(AbstractSyntaxTree node) {
    //cout << node->name << endl;
    if(node == nullptr){
        return;
    }
    if(node->name == "declaration"){
        parseDeclaration(node);
    }else if(node->name == "function_definition"){
        parseFuncDef(node);
    }else if(node->name == "statement"){
        parseStatement(node);
    }else{
        for(auto i: node->sibling){
            parseTree(i);
        }
    }
}

void Parser::parseStatement(AbstractSyntaxTree node) {
    string nodeType = node->name;
    if(nodeType == "labeled_statement"){
        parseLabelStatement(node);
    }else if(nodeType == "expression_statement"){
        parseExpStatement(node);
    }else if(nodeType == "selection_statement"){
        parseSelectStatement(node);
    }else if(nodeType == "iteration_statement"){
        parseIterStatement(node);
    }else if(nodeType == "jump_statement"){
        parseJmpStatement(node);
    }else{
        for(auto i: node->sibling){
            if(i->name == "declaration"){
                parseTree(i);
            }else{
                parseStatement(i);
            }
        }
    }

}

void Parser::parseFuncDef(AbstractSyntaxTree node) {
    AbstractSyntaxTree declaration_specifier = node->sibling[0];
    AbstractSyntaxTree declarator = node->sibling[1];
    AbstractSyntaxTree compound_statement = node->sibling[2];
    string funcType;
    if(declaration_specifier->content.empty()){
        funcType = getType(declaration_specifier);
        if(funcType.empty()){
            error(declaration_specifier, "incomplete return type");
            return;
        }
    }else{
        if(declaration_specifier->sibling[0]->name != "type_specifier"){
            error(declaration_specifier, "incomplete return type");
            return;
        }
        funcType = declaration_specifier->content;
    }


    // not support pointer
    if(declarator->sibling.size() != 1){
        error(declarator, "not support pointer type");
        return;
    }
    string funcName = declarator->sibling[0]->sibling[0]->content;
    if(funcName.empty()){
        error(declarator, "illegal function definition");
        return;
    }

    bool isdeclared = false;
    funcNode declarFunc;
    if (funcPool.find(funcName) != funcPool.end()) {
        //函数重复定义
        if (funcPool[funcName].isdefinied) {
            error(declarator, "Function " + funcName + " is duplicated definition.");
        }
            //函数事先声明过但是没有定义
        else {
            isdeclared = true;
            //先删除掉函数池中的函数的声明
            declarFunc = funcPool[funcName];
            funcPool.erase(funcPool.find(funcName));
            funcPool.erase(funcPool.find(funcName));
        }
    }

    //进入新的block
    Block funBlock;
    funBlock.isfunc = true;
    funBlock.func.name = funcName;
    funBlock.func.rtype = funcType;
    funBlock.func.isdefinied = true;
    //将函数记录在块内并添加到函数池
    blockStack.push_back(funBlock);
    funcPool[funcName] = funBlock.func;

    innerCode.addCode("FUNCTION " + funcName + " :");

    //获取函数形参列表
    AbstractSyntaxTree direct_declarator = declarator->sibling[0];
    if(direct_declarator->sibling[2]->name == "parameter_type_list")
        parseParameterList(direct_declarator->sibling[2], funcName, true);

    //此时函数池中的func已经添加了参数列表
    funcNode func = funcPool[funcName];
    //如果函数事先声明过，则比较函数的参数列表和返回类型
    if (isdeclared) {
        if (func.rtype != declarFunc.rtype) {
            error(declaration_specifier, "Function return type doesn't equal to the function declared before.");
        }
        cout << funBlock.func.paralist.size() << endl;
        if (func.paralist.size() != declarFunc.paralist.size()) {
            error(declarator, "The number of function parameters doesn't equal to the function declared before.");
        }
        for (int i = 0; i < funBlock.func.paralist.size(); i++) {
            if (func.paralist[i].type != declarFunc.paralist[i].type)
                error(declarator, "The parameter " + funBlock.func.paralist[i].name + "'s type doesn't equal to the function declared before." );
        }
    }
    //更新Block中func的参数列表
    funBlock.func = func;
    //分析函数的正文
    parseStatement(compound_statement);

    //函数结束后，弹出相应的block
    blockStack.pop_back();
}

void Parser::parseDeclaration(AbstractSyntaxTree node) {
    if(node->sibling.size() == 1){
        // is like 'struct id'
        // struct is not supported
    }else{
        // declaration_specifiers
        if(!node->sibling[0]->content.empty()){
            if(node->sibling[0]->name == "storage_class_specifier"){
                // typedef and struct is not supported
            }else if(node->sibling.size() == 1
                     && node->sibling[0]->name != "type_qualifier"){
                string varType = node->sibling[0]->content;
                if(varType == "void"){
                    error(node, "void var declaration");
                    return;
                }
                parseInitDeclarationList(varType, node->sibling[1]);
            }else{
                string varType = node->sibling[0]->content;
                parseInitDeclarationList(varType, node->sibling[1]);
            }
        }else{
            if(node->sibling[0]->name == "storage_class_specifier"){
                // typedef and struct is not supported
            }else{
                bool Const = isConst(node->sibling[0]);
                string varType = getType(node->sibling[0]);
                if(varType.empty()){
                    error(node, "unknown or unsupported type");
                    return;
                }
                parseInitDeclarationList(varType, node->sibling[1], Const);
            }

        }
    }
}

void Parser::parseLabelStatement(AbstractSyntaxTree node) {
    if(node->sibling[0]->name == "IDENTIFIER"){
        innerCode.addCodeforLabel(node->sibling[0]->name);
        parseStatement(node->sibling[1]);
    }else if(node->sibling[0]->name == "CASE"){

    }else{

    }
}

void Parser::parseSelectStatement(AbstractSyntaxTree node) {
    string nodeName = node->sibling[0]->name;
    if(nodeName == "SWITCH"){

    }else if(nodeName == "IF"){
        // if (exp) statement (optional 'else statement')
        //添加一个新的block
        Block newblock("");
        blockStack.push_back(newblock);

        AbstractSyntaxTree expression = node->sibling[1];
        varNode exp_rnode = parseExpression(expression);
        AbstractSyntaxTree statement = node->sibling[2];

        string label1 = innerCode.getLabelName();
        string label2 = innerCode.getLabelName();


        if (exp_rnode.type == "bool") {
            innerCode.addCode("IF " + exp_rnode.boolString + " GOTO " + label1);
        }
        else {
            string tempzeroname = "temp" + int2str(innerCode.tempNum++);
            varNode newznode = createTempVar(tempzeroname, "int");
            innerCode.addCode(tempzeroname + " := #0");

            innerCode.addCode("IF " + innerCode.getNodeName(exp_rnode) + " != " + tempzeroname + " GOTO " + label1);
        }

        innerCode.addCode("GOTO " + label2);
        innerCode.addCode("LABEL " + label1 + " :");


        parseStatement(statement);
        //弹出添加的block
        blockStack.pop_back();
        if(node->sibling.size() == 3){
            innerCode.addCode("LABEL " + label2 + " :");
            return;
        }else{
            // have else statement
            string label3 = innerCode.getLabelName();
            AbstractSyntaxTree statement2 = node->sibling[4];
            innerCode.addCode("GOTO " + label3);
            innerCode.addCode("LABEL " + label2 + " :");

            Block newblock2("");
            blockStack.push_back(newblock2);
            parseStatement(statement2);

            innerCode.addCode("LABEL " + label3 + " :");

            //弹出添加的block
            blockStack.pop_back();
        }
    }
}

varNode Parser::parseExpStatement(AbstractSyntaxTree node) {
    if(!node->sibling.empty()){
        return parseExpression(node->sibling[0]);
    }
    return varNode();
}

void Parser::parseIterStatement(AbstractSyntaxTree node) {
    if (node->sibling[0]->name == "WHILE") {

        //添加一个新的block
        Block newblock;
        newblock.canBreak = true;
        blockStack.push_back(newblock);

        AbstractSyntaxTree expression = node->sibling[1];
        AbstractSyntaxTree statement = node->sibling[2];

        string label1 = innerCode.getLabelName();
        string label2 = innerCode.getLabelName();
        string label3 = innerCode.getLabelName();

        blockStack.back().breakLabelname = label3;

        innerCode.addCode("LABEL " + label1 + " :");

        varNode var = parseExpression(expression);

        if (var.type == "bool") {
            innerCode.addCode("IF " + var.boolString + " GOTO " + label2);
        }
        else {
            string tempzeroname = "temp" + int2str(innerCode.tempNum++);
            varNode newznode = createTempVar(tempzeroname, "int");
            innerCode.addCode(tempzeroname + " := #0");

            innerCode.addCode("IF " + innerCode.getNodeName(var) + " != " + tempzeroname + " GOTO " + label2);
        }
        innerCode.addCode("GOTO " + label3);
        innerCode.addCode("LABEL " + label2 + " :");

        parseStatement(statement);

        innerCode.addCode("GOTO " + label1);
        innerCode.addCode("LABEL " + label3 + " :");


        //弹出添加的block
        blockStack.pop_back();
    } else if (node->sibling[0]->name == "DO") {
        //添加一个新的block
        Block newblock;
        newblock.canBreak = true;
        blockStack.push_back(newblock);

        AbstractSyntaxTree statement = node->sibling[1];
        AbstractSyntaxTree expression = node->sibling[3];

        string label1 = innerCode.getLabelName();
        string label2 = innerCode.getLabelName();

        blockStack.back().breakLabelname = label2;

        innerCode.addCode("LABEL " + label1 + " :");

        parseStatement(statement);

        varNode var = parseExpression(expression);

        if (var.type == "bool") {
            innerCode.addCode("IF " + var.boolString + " GOTO " + label1);
        }
        else {
            string tempzeroname = "temp" + int2str(innerCode.tempNum++);
            varNode newznode = createTempVar(tempzeroname, "int");
            innerCode.addCode(tempzeroname + " := #0");

            innerCode.addCode("IF " + innerCode.getNodeName(var) + " != " + tempzeroname + " GOTO " + label1);
        }

        /*innerCode.addCode("GOTO " + label1);*/
        innerCode.addCode("LABEL " + label2 + " :");

        //弹出添加的block
        blockStack.pop_back();

    } else if (node->sibling[0]->name == "FOR") {
        if (node->sibling[1]->name == "expression_statement") {
            //FOR '(' expression_statement expression_statement (expression)')'statement
            //添加一个新的block
            Block newblock;
            newblock.canBreak = true;
            blockStack.push_back(newblock);

            AbstractSyntaxTree exp_state1 = node->sibling[1];
            AbstractSyntaxTree exp_state2 = node->sibling[2];
            AbstractSyntaxTree statement = nullptr;
            AbstractSyntaxTree exp = nullptr;
            if(node->sibling.size() == 5){
                exp = node->sibling[3];
                statement = node->sibling[4];
            }else{
                statement = node->sibling[3];
            }

            string label1 = innerCode.getLabelName();
            string label2 = innerCode.getLabelName();
            string label3 = innerCode.getLabelName();

            blockStack.back().breakLabelname = label3;

            parseExpStatement(exp_state1);
            innerCode.addCode("LABEL " + label1 + " :");

            varNode var = parseExpStatement(exp_state2);
            if (!var.empty()) {
                if (var.type == "bool") {
                    innerCode.addCode("IF " + var.boolString + " GOTO " + label2);
                }
                else {
                    string tempzeroname = "temp" + int2str(innerCode.tempNum++);
                    varNode newznode = createTempVar(tempzeroname, "int");
                    innerCode.addCode(tempzeroname + " := #0");

                    innerCode.addCode("IF " + innerCode.getNodeName(var) + " != " + tempzeroname + " GOTO " + label2);
                }
            }
            else {
                innerCode.addCode("GOTO " + label2);
            }

            innerCode.addCode("GOTO " + label3);
            innerCode.addCode("LABEL " + label2 + " :");

            parseExpStatement(statement);
            if(exp){
                parseExpression(exp);
            }
            innerCode.addCode("GOTO " + label1);
            innerCode.addCode("LABEL " + label3 + " :");

            //弹出添加的block
            blockStack.pop_back();
        }else if (node->sibling[1]->name == "declaration") {
            //FOR '(' declaration expression_statement (expr)')' statement
            //添加一个新的block
            Block newblock;
            newblock.canBreak = true;
            blockStack.push_back(newblock);

            AbstractSyntaxTree declaration = node->sibling[1];
            AbstractSyntaxTree expression_statement = node->sibling[2];
            AbstractSyntaxTree statement = nullptr;
            AbstractSyntaxTree exp = nullptr;
            if(node->sibling.size() == 5){
                statement = node->sibling[4];
                exp = node->sibling[3];
            }else{
                statement = node->sibling[3];
            }
            string label1 = innerCode.getLabelName();
            string label2 = innerCode.getLabelName();
            string label3 = innerCode.getLabelName();

            blockStack.back().breakLabelname = label3;

            parseDeclaration(declaration);
            innerCode.addCode("LABEL " + label1 + " :");

            varNode var = parseExpStatement(expression_statement);
            if (!var.empty()) {
                if (var.type == "bool") {
                    innerCode.addCode("IF " + var.boolString + " GOTO " + label2);
                }
                else {
                    string tempzeroname = "temp" + int2str(innerCode.tempNum++);
                    varNode newznode = createTempVar(tempzeroname, "int");
                    innerCode.addCode(tempzeroname + " := #0");

                    innerCode.addCode("IF " + innerCode.getNodeName(var) + " != " + tempzeroname + " GOTO " + label2);
                }
            }
            else {
                innerCode.addCode("GOTO " + label2);
            }
            innerCode.addCode("GOTO " + label3);
            innerCode.addCode("LABEL " + label2 + " :");

            parseStatement(statement);
            if(exp){
                parseExpression(exp);
            }
            //cout << "here" << endl;
            innerCode.addCode("GOTO " + label1);
            innerCode.addCode("LABEL " + label3 + " :");

            //弹出添加的block
            blockStack.pop_back();
        }
    }
}

void Parser::parseJmpStatement(AbstractSyntaxTree node) {
    if (node->sibling[0]->name == "GOTO") {
        innerCode.addCode("GOTO" + node->sibling[1]->content);
    }
    else if (node->sibling[0]->name == "CONTINUE") {

    }
    else if (node->sibling[0]->name == "BREAK") {
        int num = getBreakNum();
        if (num < 0) {
            error(node->sibling[0], "This scope doesn't support break.");
        }

        innerCode.addCode("GOTO " + blockStack[num].breakLabelname);
    }
    else if (node->sibling[0]->name == "RETURN") {
        string funcType = getFuncRType();
        if (node->sibling.size() == 2) {//return expression
            varNode rnode = parseExpression(node->sibling[1]);
            innerCode.addCodeforReturn(rnode);
            if (rnode.type != funcType) {
                error(node->sibling[1], "return type doesn't equal to function return type.");
                return;
            }
        }
        else{//return ;
            innerCode.addCode("RETURN");
            if (funcType != "void") {
                error(node->sibling[0], "You should return " + blockStack.back().func.rtype);
                return;
            }

        }
    }
}

void Parser::parseInitDeclarationList(string type, AbstractSyntaxTree list, bool isConst) {
    for (auto i: list->sibling) {
        assert(i->name == "init_declarator");
        parseInitDeclarator(type, i, isConst);
    }
}

void Parser::parseInitDeclarator(string type, AbstractSyntaxTree node, bool isConst) {
    // node = initDeclarator
    if(node->sibling.size() == 1){
        AbstractSyntaxTree declarator = node->sibling[0];
        if(!declarator->content.empty()){
            string Var = declarator->content;
            if(curruntVarExist(Var)){
                error(node, "var redefination");
            }else{
                varNode newVar;
                newVar.name = Var;
                newVar.type = type;
                newVar.isConst = isConst;
                newVar.num = innerCode.varNum++;
                blockStack.back().varMap[Var] = newVar;
            }
        }else{
            //函数声明
            if(declarator->sibling.size() > 1){
                // not support pointer as return value
                return;
            }
            // is direct_declarator
            declarator = declarator->sibling[0];

            if (declarator->sibling[1]->name == "(") {
                string funcName = declarator->sibling[0]->content;
                string funcType = type;
                if (blockStack.size() > 1) {
                    error(node, "Functinon declaration must at global environment.");
                }
                funcNode newFunc;
                newFunc.isdefinied = false;
                newFunc.name = funcName;
                newFunc.rtype = funcType;
                funcPool[funcName] = newFunc;
                //分析函数形参列表
                if(declarator->sibling[2]->name != "parameter_type_list")
                    return;
                AbstractSyntaxTree parameterList = declarator->sibling[2];
                parseParameterList(parameterList, funcName, false);
            } else if (declarator->sibling[1]->name == "[") {
                //数组声明
                string arrayName = declarator->sibling[0]->content;
                string arrayType = type;
                AbstractSyntaxTree assign_exp = declarator->sibling[2];
                if(assign_exp->name != "assignment_expression"){
                    error(node, "can't get length of array");
                    return;
                }

                varNode rnode = parseAssignmentExpression(assign_exp);

                if (rnode.type != "int") {
                    error(node, "Array size must be int.");
                    return;
                }


                varNode tnode;
                //创建一个新的临时变量来储存数组的大小
                string tempname = "temp" + int2str(innerCode.tempNum);
                innerCode.tempNum++;
                tnode = createTempVar(tempname, arrayType);

                blockStack.back().varMap[tempname] = tnode;

                varNode tempVar3;
                string tempName3 = "temp" + int2str(innerCode.tempNum);
                ++innerCode.tempNum;
                tempVar3.name = tempName3;
                tempVar3.type = arrayType;
                blockStack.back().varMap[tempName3] = tempVar3;

               if(arrayType == "int"){
                   innerCode.addCode(tempName3 + " := #4");
               }else if(arrayType == "double"){
                   innerCode.addCode(tempName3 + " := #8");
               }

                innerCode.addCode(tnode.name + " := " + tempName3 +" * " + rnode.name);

                arrayNode anode;
                anode.name = arrayName;
                anode.type = arrayType;
                anode.num = innerCode.arrayNum++;
                innerCode.addCode("DEC " + innerCode.getarrayNodeName(anode) + " " + tnode.name);

                blockStack.back().arrayMap[arrayName] = anode;
            }
        }
    }else{
        // TODO: 带有初始化的情况
        //获取变量的名字
        //is direct_declarator
        AbstractSyntaxTree declarator = node->sibling[0];
        AbstractSyntaxTree directDeclarator = declarator->sibling[0];
        if(directDeclarator->name != "direct_declarator" || directDeclarator->content.empty()){
            error(directDeclarator, "not support pointer type");
        }
        varNode newVar;
        if (directDeclarator->sibling[0]->name == "IDENTIFIER") {
            string var = directDeclarator->content;
            if (!curruntVarExist(var)) {
                newVar.name = var;
                newVar.type = type;
                newVar.num = innerCode.varNum++;
                blockStack.back().varMap[var] = newVar;
            }
            else error(directDeclarator, "Variable multiple declaration.");
        }
        else error(directDeclarator, "It's not a variable");


        AbstractSyntaxTree initializer = node->sibling[2];
        if (initializer == NULL) {
            error(declarator, "Lack the initializer for variable.");
        }
        else {
            if (initializer->sibling[0]->name == "assignment_expression") {
                varNode rnode = parseAssignmentExpression(initializer->sibling[0]);
                innerCode.addCodeforAssign(newVar,rnode);
                string rtype = rnode.type;
                if (rtype != type)
                    error(initializer, "wrong type init for var " + newVar.name + ": " +
                                                   "expect a " + type + "but a " + rtype );
            }else{
                error(initializer, "not support array init");
            }
        }
    }
}

string Parser::lookupVarType(string name) {
    int blockSize = blockStack.size();
    for(int i = blockSize - 1; i >= 0; i--){
        if(blockStack[i].varMap.count(name)){
            return blockStack[i].varMap[name].type;
        }
    }
    return "";
}

bool Parser::curruntVarExist(string name) {
    Block cntBlock = blockStack.back();
    return cntBlock.varMap.count(name) != 0;
}

void Parser::parseParameterList(AbstractSyntaxTree paramTypeList,
                                string funcName,
                                bool isdefine) {
    AbstractSyntaxTree paramList = paramTypeList->sibling[0];
    for(auto i: paramList->sibling){
        parseParameterDeclaration(i, funcName, isdefine);
    }
}

void Parser::parseParameterDeclaration(AbstractSyntaxTree node, string funcName, bool isdefine) {
    AbstractSyntaxTree declarationSpecifier = node->sibling[0];
    AbstractSyntaxTree declarator = node->sibling[1];
    string typeName = declarationSpecifier->content;
    if (typeName == "void") {
        error(node, "void var is illegal");
    }

    //暂时只考虑变量，不考虑数组作为形参
    string varName = declarator->content;
    varNode newnode;
    newnode.name = varName;
    newnode.type = typeName;
    if (isdefine) {
        newnode.num = innerCode.varNum++;
        //将函数的形参添加到当前块的变量池中
        blockStack.back().varMap[varName] = newnode;
    }

    funcPool[funcName].paralist.push_back(newnode);


    blockStack.back().func.paralist.push_back(newnode);


    if(isdefine)
        innerCode.addCodeforParameter(newnode);
}

varNode Parser::createTempVar(string name, string type) {
    varNode var;
    var.name = name;
    var.type = type;
    var.num = -1;
    return var;
}


varNode Parser::parseExpression(AbstractSyntaxTree node)
{
    /*
    if (node->sibling[0]->name == "expression")
        return parseExpression(node->sibling[0]);
    else if (node->sibling[0]->name == "assignment_expression")
        return parseAssignmentExpression(node->sibling[0]);
    else if (node->sibling[1]->name == ",")
        return parseAssignmentExpression(node->sibling[2]);
    */
    if (node->sibling[0]->name == "expression")
        return parseExpression(node->sibling[0]);
    varNode res;
    for (auto i : node->sibling) {
        if (i->name == "assignment_expression")
            res = parseAssignmentExpression(i);
        if (i == node->sibling.back())
            return res;
    }
}

varNode Parser::parseAssignmentExpression(AbstractSyntaxTree node)
{
    if (node->sibling[0]->name == "conditional_expression")
        return parseLogicalOrExpression(node->sibling[0]->sibling[0]);
    
    else if (node->sibling[0]->name == "unary_expression") {
        AbstractSyntaxTree unary_exp = node->sibling[0];
        string operation = node->sibling[1]->sibling[0]->name;
        AbstractSyntaxTree next_exp = node->sibling[2];
        varNode node1 = parseUnaryExpression(unary_exp);
        varNode node2 = parseAssignmentExpression(next_exp);
        varNode node3;

        if (operation == "=") node3 = node2;
        else {
            string temp_name = "temp" + int2str(innerCode.tempNum++);
            node3 = createTempVar(temp_name, node1.type);

            blockStack.back().varMap[temp_name] = node3;
            // *=
            if (operation == "MUL_ASSIGN") {
                if (node1.type != node2.type) {
                    error(node, "Type not match!");
                }
                innerCode.addCodeforVar(temp_name, "*", node1, node2);
            }
            // /=
            else if (operation == "DIV_ASSIGN") {
                if (node1.type != node2.type) {
                    error(node, "Type not match!");
                }
                innerCode.addCodeforVar(temp_name, "/", node1, node2);
            }
            // %=
            else if (operation == "MOD_ASSIGN") {
                if (node1.type != node2.type || node1.type != "int") {
                    error(node, "Type not match!");
                }
                innerCode.addCodeforVar(temp_name, "%", node1, node2);
            }
            // +=
            else if (operation == "ADD_ASSIGN") {
                if (node1.type != node2.type) {
                    error(node, "Type not match!");
                }
                innerCode.addCodeforVar(temp_name, "+", node1, node2);
            }
            // -=
            else if (operation == "SUB_ASSIGN") {
                if (node1.type != node2.type) {
                    error(node, "Type not match!");
                }
                innerCode.addCodeforVar(temp_name, "-", node1, node2);
            }
            // <<=
            else if (operation == "LEFT_ASSIGN") {
                if (node1.type != node2.type || node1.type != "int") {
                    error(node, "Type not match!");
                }
                innerCode.addCodeforVar(temp_name, "<<", node1, node2);
            }
            // >>=
            else if (operation == "RIGHT_ASSIGN") {
                if (node1.type != node2.type || node1.type != "int") {
                    error(node, "Type not match!");
                }
                innerCode.addCodeforVar(temp_name, ">>", node1, node2);
            }
            // &=
            else if (operation == "AND_ASSIGN") {
                if (node1.type != node2.type || node1.type != "int") {
                    error(node, "Type not match!");
                }
                innerCode.addCodeforVar(temp_name, "&", node1, node2);
            }
            // ^=
            else if (operation == "XOR_ASSIGN") {
                if (node1.type != node2.type || node1.type != "int") {
                    error(node, "Type not match!");
                }
                innerCode.addCodeforVar(temp_name, "^", node1, node2);
            }
            // |=
            else if (operation == "OR_ASSIGN") {
                if (node1.type != node2.type || node1.type != "int") {
                    error(node, "Type not match!");
                }
                innerCode.addCodeforVar(temp_name, "|", node1, node2);
            }
        }

        innerCode.addCodeforAssign(node1, node3);
        return node1;
    }
}

varNode Parser::parseLogicalOrExpression(AbstractSyntaxTree node)
{
    if (node->sibling[0]->name == "logical_and_expression")
        return parseLogicalAndExpression(node->sibling[0]);

    else if (node->sibling[0]->name == "logical_or_expression") {
        varNode node1 = parseLogicalOrExpression(node->sibling[0]);
        varNode node2 = parseLogicalAndExpression(node->sibling[2]);

        if (node1.type != "bool" || node2.type != "bool") {
            error(node, "Type error");
        }

        string temp_name = "temp" + int2str(innerCode.tempNum++);
        varNode new_node = createTempVar(temp_name, node1.type);

        blockStack.back().varMap[temp_name] = new_node;
        innerCode.addCodeforVar(temp_name, "||", node1, node2);

        new_node.boolString = innerCode.getNodeName(node1) + " || " + innerCode.getNodeName(node2);

        return new_node;
    }
}

varNode Parser::parseLogicalAndExpression(AbstractSyntaxTree node)
{
    if (node->sibling[0]->name == "inclusive_or_expression")
        return parseInclusiveOrExpression(node->sibling[0]);

    else if (node->sibling[0]->name == "logical_and_expression") {
        varNode node1 = parseLogicalAndExpression(node->sibling[0]);
        varNode node2 = parseInclusiveOrExpression(node->sibling[2]);

        if (node1.type != "bool" || node2.type != "bool") {
            error(node, "Type error");
        }

        string temp_name = "temp" + int2str(innerCode.tempNum++);

        varNode new_node = createTempVar(temp_name, node1.type);
        blockStack.back().varMap[temp_name] = new_node;

        innerCode.addCodeforVar(temp_name, "&&", node1, node2);

        new_node.boolString = innerCode.getNodeName(node1) + " && " + innerCode.getNodeName(node2);

        return new_node;
    }
}

varNode Parser::parseInclusiveOrExpression(AbstractSyntaxTree node)
{
    if (node->sibling[0]->name == "exclusive_or_expression")
        return parseExclusiveOrExpression(node->sibling[0]);

    else if (node->sibling[0]->name == "inclusive_or_expression") {
        varNode node1 = parseInclusiveOrExpression(node->sibling[0]);
        varNode node2 = parseExclusiveOrExpression(node->sibling[2]);

        if (node1.type != "int" || node2.type != "int") {
            error(node, "Type error");
        }

        string temp_name = "temp" + int2str(innerCode.tempNum++);
        varNode new_node = createTempVar(temp_name, node1.type);
        blockStack.back().varMap[temp_name] = new_node;
        innerCode.addCodeforVar(temp_name, "|", node1, node2);
        return new_node;
    }
}

varNode Parser::parseExclusiveOrExpression(AbstractSyntaxTree node)
{
    if (node->sibling[0]->name == "and_expression")
        return parseAndExpression(node->sibling[0]);

    else if (node->sibling[0]->name == "exclusive_or_expression") {
        varNode node1 = parseExclusiveOrExpression(node->sibling[0]);
        varNode node2 = parseAndExpression(node->sibling[2]);

        if (node1.type != "int" || node2.type != "int") {
            error(node, "Type error");
        }

        string temp_name = "temp" + int2str(innerCode.tempNum++);
        varNode new_node = createTempVar(temp_name, node1.type);
        blockStack.back().varMap[temp_name] = new_node;
        innerCode.addCodeforVar(temp_name, "^", node1, node2);
        return new_node;
    }
}

varNode Parser::parseAndExpression(AbstractSyntaxTree node)
{
    if (node->sibling[0]->name == "equality_expression")
        return parseEqualExpression(node->sibling[0]);

    else if (node->sibling[0]->name == "and_expression") {
        varNode node1 = parseAndExpression(node->sibling[0]);
        varNode node2 = parseEqualExpression(node->sibling[2]);

        if (node1.type != "int" || node2.type != "int") {
            error(node, "Type error");
        }

        string temp_name = "temp" + int2str(innerCode.tempNum++);
        varNode new_node = createTempVar(temp_name, node1.type);
        blockStack.back().varMap[temp_name] = new_node;
        innerCode.addCodeforVar(temp_name, "&", node1, node2);
        return new_node;
    }
}

varNode Parser::parseEqualExpression(AbstractSyntaxTree node)
{
    if (node->sibling[0]->name == "relational_expression")
        return parseRelationalExpression(node->sibling[0]);

    else if (node->sibling[1]->name == "EQ_OP" || node->sibling[1]->name == "NE_OP") {
        string operation;
        if (node->sibling[1]->name == "EQ_OP") operation = "==";
        else operation = "!=";

        varNode node1 = parseEqualExpression(node->sibling[0]);
        varNode node2 = parseRelationalExpression(node->sibling[2]);

        if (node1.type != node2.type) {
            error(node, "Type not match");
        }

        string temp_name = "temp" + int2str(innerCode.tempNum++);
        varNode new_node = createTempVar(temp_name, "bool");
        blockStack.back().varMap[temp_name] = new_node;
        innerCode.addCodeforVar(temp_name, operation, node1, node2);
        new_node.boolString = innerCode.getNodeName(node1) + " " + operation + " " + innerCode.getNodeName(node2);
        return new_node;
    }
}

varNode Parser::parseRelationalExpression(AbstractSyntaxTree node)
{
    if (node->sibling[0]->name == "shift_expression")
        return parseShiftExpression(node->sibling[0]);

    else {
        string operation = node->sibling[1]->name;
        if (operation == "LE_OP") operation = "<=";
        else if (operation == "GE_OP") operation = ">=";

        if (operation == ">" || operation == "<" || operation == ">=" || operation == "<=") {
            varNode node1 = parseRelationalExpression(node->sibling[0]);
            varNode node2 = parseShiftExpression(node->sibling[2]);

            if (node1.type != node2.type) {
                error(node, "Type not match");
            }

            string temp_name = "temp" + int2str(innerCode.tempNum++);
            varNode new_node = createTempVar(temp_name, "bool");
            blockStack.back().varMap[temp_name] = new_node;
            innerCode.addCodeforVar(temp_name, operation, node1, node2);
            new_node.boolString = innerCode.getNodeName(node1) + " " + operation + " " + innerCode.getNodeName(node2);
            return new_node;
        }
    }
}

varNode Parser::parseShiftExpression(AbstractSyntaxTree node)
{
    if (node->sibling[0]->name == "additive_expression")
        return parseAdditiveExpression(node->sibling[0]);

    else if (node->sibling[1]->name == "LEFT_OP" || node->sibling[1]->name == "RIGHT_OP") {
        string operation;
        if (node->sibling[1]->name == "LEFT_OP") operation = "<<";
        else operation = ">>";

        varNode node1 = parseShiftExpression(node->sibling[0]);
        varNode node2 = parseAdditiveExpression(node->sibling[2]);

        if (node1.type != "int" || node2.type != "int") {
            error(node, "Type error");
        }

        string temp_name = "temp" + int2str(innerCode.tempNum++);
        varNode new_node = createTempVar(temp_name, node1.type);
        blockStack.back().varMap[temp_name] = new_node;
        innerCode.addCodeforVar(temp_name, operation, node1, node2);
        return new_node;
    }
}

varNode Parser::parseAdditiveExpression(AbstractSyntaxTree node)
{
    if (node->sibling[0]->name == "multiplicative_expression")
        return parseMultiplyExpression(node->sibling[0]);

    else if (node->sibling[1]->name == "+" || node->sibling[1]->name == "-") {
        varNode node1 = parseAdditiveExpression(node->sibling[0]);
        varNode node2 = parseMultiplyExpression(node->sibling[2]);

        if (node1.type != node2.type) {
            error(node, "Type not match");
        }

        string temp_name = "temp" + int2str(innerCode.tempNum++);
        varNode new_node = createTempVar(temp_name, node1.type);
        blockStack.back().varMap[temp_name] = new_node;
        innerCode.addCodeforVar(temp_name, node->sibling[1]->name, node1, node2);
        return new_node;
    }
}

varNode Parser::parseMultiplyExpression(AbstractSyntaxTree node)
{
    if (node->sibling[0]->name == "cast_expression") {
        if(node->sibling[0]->sibling[0]->name != "unary_expression"){
            error(node->sibling[0]->sibling[0], "not support cast expression");
            return varNode();
        }
        return parseUnaryExpression(node->sibling[0]->sibling[0]);
    }

    else if (node->sibling[1]->name == "*" || node->sibling[1]->name == "/" || node->sibling[1]->name == "%") {
        varNode node1 = parseMultiplyExpression(node->sibling[0]);
        varNode node2 = parseUnaryExpression(node->sibling[2]->sibling[0]);

        if (node1.type != node2.type) {
            error(node, "Type not match");
        }

        string temp_name = "temp" + int2str(innerCode.tempNum++);
        varNode new_node = createTempVar(temp_name, node1.type);
        blockStack.back().varMap[temp_name] = new_node;
        innerCode.addCodeforVar(temp_name, node->sibling[1]->name, node1, node2);
        return new_node;
    }
}

varNode Parser::parseUnaryExpression(AbstractSyntaxTree node)
{
    if (node->sibling[0]->name == "postfix_expression")
        return parsePostfixExpression(node->sibling[0]);

    else if (node->sibling[0]->name == "INC_OP") {
        varNode node1 = parseUnaryExpression(node->sibling[1]);
        if (node1.type != "int") {
            error(node, "Type error");
        }

        string temp_name = "temp" + int2str(innerCode.tempNum++);
        varNode new_node = createTempVar(temp_name, "int");
        blockStack.back().varMap[temp_name] = new_node;
        innerCode.addCode(temp_name + " := #1");

        if (node1.useAddress) 
            innerCode.addCode("*" + node1.name + " := *" + node1.name + " + " + temp_name);
        else
            innerCode.addCode(innerCode.getNodeName(node1) + " := " + innerCode.getNodeName(node1) + " + " + temp_name);

        return node1;
    }

    else if (node->sibling[0]->name == "DEC_OP") {
        varNode node2 = parseUnaryExpression(node->sibling[1]);
        if (node2.type != "int") {
            error(node, "Type error");
        }

        string temp_name = "temp" + int2str(innerCode.tempNum++);
        varNode new_node = createTempVar(temp_name, "int");
        blockStack.back().varMap[temp_name] = new_node;
        innerCode.addCode(temp_name + " := #1");

        if (node2.useAddress)
            innerCode.addCode("*" + node2.name + " := *" + node2.name + " - " + temp_name);
        else
            innerCode.addCode(innerCode.getNodeName(node2) + " := " + innerCode.getNodeName(node2) + " - " + temp_name);

        return node2;
    }

    else if (node->sibling[0]->name == "unary_operator") {
        string operation = node->sibling[1]->name;
        varNode node3 = parseUnaryExpression(node->sibling[2]);
        if (operation == "+") {
            if (node3.type != "int" && node3.type != "double") {
                error(node, "Type error");
            }
            return node3;
        }

        else if (operation == "-") {
            if (node3.type != "int" && node3.type != "double") {
                error(node, "Type error");
            }

            string temp_zero_name = "temp" + int2str(innerCode.tempNum++);
            varNode new_zero_node = createTempVar(temp_zero_name, "int");
            blockStack.back().varMap[temp_zero_name] = new_zero_node;
            innerCode.addCode(temp_zero_name + " := #0");

            string temp_name = "temp" + int2str(innerCode.tempNum++);
            varNode new_node = createTempVar(temp_name, "int");
            blockStack.back().varMap[temp_name] = new_node;

            if (node3.useAddress)
                innerCode.addCode(temp_name + " := " + temp_zero_name + " - *" + node3.name);
            else
                innerCode.addCode(temp_name + " := " + temp_zero_name + " - " + innerCode.getNodeName(node3));
            return new_node;
        }

        else if (operation == "~" || operation == "!") {}
    }
}

varNode Parser::parsePostfixExpression(AbstractSyntaxTree node)
{
    if (node->sibling[0]->name == "primary_expression")
        return parsePrimaryExpression(node->sibling[0]);

    else if (node->sibling[1]->name == "[") {
        string array_name = node->sibling[0]->sibling[0]->sibling[0]->content;
        //AbstractSyntaxTree expression = node->sibling[0]->sibling[1]->sibling[1];
        varNode exp_node = parseExpression(node->sibling[2]);
        arrayNode new_array_node = getArrayNode(array_name);

        if (new_array_node.num < 0) {
            error(node, "Array undefined");
        }

        varNode temp_node;
        string temp_name = "temp" + int2str(innerCode.tempNum++);
        temp_node.name = temp_name;
        temp_node.type = new_array_node.type;
        temp_node.useAddress = true;
        blockStack.back().varMap[temp_name] = temp_node;

        if (new_array_node.type == "int" || new_array_node.type == "double") {
            varNode node2;
            string temp_name2 = "temp" + int2str(innerCode.tempNum++);
            node2.name = temp_name2;
            node2.type = "int";
            blockStack.back().varMap[temp_name2] = node2;

            varNode node3;
            string temp_name3 = "temp" + int2str(innerCode.tempNum++);
            node3.name = temp_name3;
            if (new_array_node.type == "int") {
                node3.type = "int";
                blockStack.back().varMap[temp_name3] = node3;

                innerCode.addCode(temp_name3 + " := #4");
                innerCode.addCode(temp_name2 + " := " + innerCode.getNodeName(exp_node) + " * " + temp_name3);
            }

            else if (new_array_node.type == "double") {
                node3.type = "double";
                blockStack.back().varMap[temp_name3] = node3;

                innerCode.addCode(temp_name3 + " := #8");
                innerCode.addCode(temp_name2 + " := " + innerCode.getNodeName(exp_node) + " * " + temp_name3);
            }

            innerCode.addCode(temp_name + " := &" + innerCode.getarrayNodeName(new_array_node) + " + " + innerCode.getNodeName(node2));
            return temp_node;
        }

        innerCode.addCode(temp_name + " := & " + innerCode.getarrayNodeName(new_array_node) + " + " + innerCode.getNodeName(exp_node));
        return temp_node;
    }

    else if (node->sibling[1]->name == "(") {
        string func_name = node->sibling[0]->sibling[0]->sibling[0]->content;
        varNode new_node;

        if (funcPool.find(func_name) == funcPool.end()) {
            error(node, "undefined function");
            return varNode();
        }

        if (node->sibling[2]->name == "argument_expression_list") {
            ParseArgumentExpressionList(node->sibling[2], func_name);
        }

        funcNode func_node = funcPool[func_name];

        if (func_node.rtype == "void")
            innerCode.addCode("CALL " + func_name);
        else {
            string temp_name = "temp" + int2str(innerCode.tempNum++);
            new_node = createTempVar(temp_name, funcPool[func_name].rtype);
            innerCode.addCode(temp_name + " := CALL " + func_name);
        }

        return new_node;
    }

    else if (node->sibling[1]->name == "INC_OP" || node->sibling[1]->name == "DEC_OP") {
        varNode node4 = parsePostfixExpression(node->sibling[0]);

        if (node4.type != "int") {
            error(node, "Type error");
        }
        string temp_name = "temp" + int2str(innerCode.tempNum++);
        varNode new_node = createTempVar(temp_name, "int");
        blockStack.back().varMap[temp_name] =  new_node;

        string temp_name2 = "temp" + int2str(innerCode.tempNum++);
        varNode new_node2 = createTempVar(temp_name2, "int");
        blockStack.back().varMap[temp_name2] =  new_node2;

        innerCode.addCode(temp_name2 + " := #1");
        string op = node->sibling[1]->name == "INC_OP" ? "+" : "-";
        if (node4.useAddress) {
            innerCode.addCode(temp_name + " := *" + node4.name);
            innerCode.addCode("*" + node4.name + " := *" + node4.name + " " +op + " " + temp_name2);
        } else {
            innerCode.addCode(temp_name + " := " + innerCode.getNodeName(node4));
            innerCode.addCode(innerCode.getNodeName(node4) + " := " + innerCode.getNodeName(node4) + " " +op + " " + temp_name2);
        }

        return new_node;
    }

}

varNode Parser::parsePrimaryExpression(AbstractSyntaxTree node)
{
    if (node->sibling[0]->name == "IDENTIFIER") {
        string content = node->sibling[0]->content;
        varNode new_node = searchNode(content);
        if (new_node.num < 0) {
            error(node, "undefined variable");
        }
        return new_node;
    }
    else if(node->sibling[0]->name == "constant"){
        node = node->sibling[0];
        if (node->sibling[0]->name == "I_CONSTANT" || node->sibling[0]->name == "F_CONSTANT") {
            string content = node->sibling[0]->content;
            string temp_name = "temp" + int2str(innerCode.tempNum++);

            varNode new_node;
            if(node->sibling[0]->name == "I_CONSTANT"){
                new_node = createTempVar(temp_name, "int");
                blockStack.back().varMap[temp_name] = new_node;
                innerCode.addCode(temp_name + " := #" + content);
            }
            else{
                new_node = createTempVar(temp_name, "double");
                blockStack.back().varMap[temp_name] = new_node;
                innerCode.addCode(temp_name + " := F" + content);
            }
            return new_node;
        }
    } 
    else if (node->sibling[0]->name == "(")
        return parseExpression(node->sibling[1]);
}

void Parser::ParseArgumentExpressionList(AbstractSyntaxTree node, string func_name)
{
    funcNode func_node = funcPool[func_name];
    int count = 0;
    for (auto i : node->sibling) {
        varNode new_node = parseAssignmentExpression(i);

        innerCode.addCodeforArgument(new_node);

        count++;
        if (func_node.paralist[func_node.paralist.size() - count].type != new_node.type) {
            error(node, "wrong argument type");
        }
    }

    if (count != func_node.paralist.size()) {
        error(node, "wrong argument number");
    }
}

arrayNode Parser::getArrayNode(string name)
{
    int n = blockStack.size();
    for (int i = n - 1; i >= 0; i--) {
        if (blockStack[i].arrayMap.find(name) != blockStack[i].arrayMap.end())
            return blockStack[i].arrayMap[name];
    }
    arrayNode temp;
    temp.num = -1;
    return temp;
}

varNode Parser::searchNode(string name)
{
    int n = blockStack.size();
    for (int i = n - 1; i >= 0; i--) {
        if (blockStack[i].varMap.find(name) != blockStack[i].varMap.end())
            return blockStack[i].varMap[name];
    }
    varNode temp;
    temp.num = -1;
    return temp;
}

int Parser::getBreakNum() {
    int size = blockStack.size();
    for(int i = size - 1; i >=0; i--){
        if(blockStack[i].canBreak)
            return i;
    }
    return -1;
}

string Parser::getFuncRType() {
    int size = blockStack.size();
    for(int i = size - 1; i >= 0; i--){
        if(blockStack[i].isfunc){
            return blockStack[1].func.rtype;
        }
    }
    return "";
}

void Parser::generateIRCode() {
    innerCode.printCode();
}
