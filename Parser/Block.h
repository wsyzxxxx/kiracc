//
// Created by lyk on 18-6-9.
//

#ifndef KIRACC_BLOCK_H
#define KIRACC_BLOCK_H

#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;

//变量节点
struct varNode {
    string name;
    string type;
    int num = -1;
    bool useAddress = false;
    bool isConst = false;
    string boolString;
    bool empty();
};

//函数节点
struct funcNode {
    bool isdefinied = false;
    string name;				//函数名
    string rtype;				//函数返回类型
    vector<varNode> paralist;	//记录形参列表
};

//数组节点
struct arrayNode {
    string name;
    string type;
    int num = -1;
};


//block的内容
class Block {
public:
    Block(string labelName): breakLabelname(labelName) {} //for label
    Block(funcNode funcNode): func(funcNode) {} // for function
    Block(bool canBreak, string labelName): canBreak(canBreak), breakLabelname(labelName) {}
    Block() {}
    funcNode func;	//如果是函数，记录函数名
    bool isfunc = false;//记录是否是函数
    unordered_map<string, struct varNode> varMap;		//变量的map
    unordered_map<string, struct arrayNode> arrayMap;	//数组的map
    string breakLabelname;
    bool canBreak = false;

};


#endif //KIRACC_BLOCK_H
