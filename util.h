//
// Created by lyk on 18-5-24.
//

#ifndef KIRACC_UTIL_H
#define KIRACC_UTIL_H

#include <string>
#include <cstring>
#include <stack>

bool isHex(const char* num){
    return strlen(num) > 2 && num[0] == '0' && (num[1] == 'x' || num[1] == 'X');
}
bool isOct(const char* num){
    return strlen(num) > 1 && num[0] == '0' && num[1] != 'x' && num[1] != 'X';
}

std::string int2str(int val){
    std::string ret;
    std::stack<char> stack;
    while(val){
        stack.push(val % 10);
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
#endif //KIRACC_UTIL_H
