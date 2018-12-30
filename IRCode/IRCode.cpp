//
// Created by lyk on 18-6-9.
//

#include "IRCode.h"
#include "../util.h"
void IRCode::addCode(string str) {
    codeList.push_back(str);
}

void IRCode::printCode() {

    cout << "\n===============IRCODE===============" << endl;
    for (string s : codeList) {
        cout << s << endl;
    }
}

void IRCode::addCodeforVar(string tempname, string op, varNode node1, varNode node2) {
    string result = tempname + " := ";
    if (node1.useAddress) {
        result += "*" + node1.name;
    }
    else {
        if (node1.num < 0) {
            result += node1.name;
        }
        else result += "var" + int2str(node1.num);
    }

    result += " " + op + " ";

    if (node2.useAddress) {
        result += "*" + node2.name;
    }
    else {
        if (node2.num < 0) {
            result += node2.name;
        }
        else result += "var" + int2str(node2.num);
    }

    addCode(result);
}

void IRCode::addCodeforAssign(varNode node1, varNode node2) {
    string result;
    if (node1.useAddress) {
        result = "*" + node1.name + " := ";
    }
    else {
        result = "var" + int2str(node1.num);
        result += " := ";
    }

    if (node2.useAddress) {
        result += "*" + node2.name;
    } else {
        if (node2.num < 0) {
            result += node2.name;
        }
        else result += "var" + int2str(node2.num);
    }


    addCode(result);
}

void IRCode::addCodeforParameter(varNode node) {
    string result = "PARAM ";
    result += "var" + int2str(node.num);
    addCode(result);
}

void IRCode::addCodeforReturn(varNode node) {
    string result = "RETURN ";
    if (node.useAddress) {
        result += "*" + node.name;
    }
    else {
        if (node.num < 0) {
            result += node.name;
        }
        else result += "var" + int2str(node.num);
    }

    addCode(result);
}

void IRCode::addCodeforArgument(varNode node) {
    string result = "ARG ";
    if (node.useAddress) {
        result += "*" + node.name;
    }
    else {
        if (node.num < 0) {
            result += node.name;
        }
        else result += "var" + int2str(node.num);
    }

    addCode(result);
}

void IRCode::addCodeforLabel(string labelName) {
    string result = "LABEL " + labelName;
    addCode(result);
}

void IRCode::addCodeforLabel() {
    addCode(getLabelName());
}

string IRCode::getNodeName(varNode node) {
    if (node.useAddress) {
        return "*" + node.name;
    }
    else {
        if (node.num < 0) {
            return node.name;
        }
        else return ("var" + int2str(node.num));
    }

}

string IRCode::getarrayNodeName(arrayNode node) {
    return ("array" + int2str(node.num));
}

string IRCode::getLabelName() {
    return "label" + int2str(labelNum++);
}


