#include <cstdio>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define REGISTERS_NUM 17
#define MAX_LINE_NUM 100000
#define MAX_VAR_NUM 100000

const string registers[REGISTERS_NUM] = {"t1","t2","t3","t4","t5","t6","t7","t8","t9","s0","s1","s2","s3","s4","s5","s6","s7"};
string assigned_register_table[REGISTERS_NUM];
bool is_register_available[REGISTERS_NUM];
//string variables[MAX_VAR_NUM];
int line_num;
vector<string> read_words[MAX_LINE_NUM];
vector<string> variables;
vector<string> result_string;

vector<string> split(const string &s, const string &seperator)
{
    vector<string> result;
    typedef string::size_type string_size;
    string_size i = 0;

    while(i != s.size()){
        //找到字符串中首个不等于分隔符的字母；
        int flag = 0;
        while(i != s.size() && flag == 0){
            flag = 1;
            for(string_size x = 0; x < seperator.size(); ++x) {
                if (s[i] == seperator[x]) {
                    ++i;
                    flag = 0;
                    break;
                }
            }
        }

        //找到又一个分隔符，将两个分隔符之间的字符串取出；
        flag = 0;
        string_size j = i;
        while(j != s.size() && flag == 0){
            for(string_size x = 0; x < seperator.size(); ++x)
                if(s[j] == seperator[x]){
                    flag = 1;
                    break;
                }
            if(flag == 0)
                ++j;
        }
        if(i != j){
            result.push_back(s.substr(i, j-i));
            i = j;
        }
    }
    return result;
}

void readFile(string file_name, vector<string> read_words[])
{
    fstream fs;
    fs.open(file_name, ios::in);
    if (!fs)
        cout << "Read File error!" << endl;
    string temp_string;
    vector<string> temp_line;
    while (getline(fs, temp_string)) {
        temp_line.clear();
        temp_line = split(temp_string, " ");
        read_words[line_num++] = temp_line;
    }
}

void readVariables(vector<string> words[])
{
    for (int i = 0; i < line_num; i++) {
        for (vector<string>::iterator it = words[i].begin(); it != words[i].end(); it++) {
            if (it->length() >= 4) {
                if ((*it)[0] == 't' && (*it)[1] == 'e' && (*it)[2] == 'm' && (*it)[3] == 'p')
                    variables.push_back(*it);
            }
        }
    }
}

string assignRegister(string var)
{
    vector<string>:: iterator result = find(variables.begin(), variables.end(), var);
    if (result != variables.end())
        variables.erase(result);

    for (int i = 0; i < REGISTERS_NUM; i++)
        if (assigned_register_table[i] == var)
            return "$" +  registers[i];

    for (int i = 0; i < REGISTERS_NUM; i++) {
        if (assigned_register_table[i] != "") {
            if (assigned_register_table[i].substr(0, 4) == "temp" &&  find(variables.begin(), variables.end(), assigned_register_table[i]) == variables.end()) {
                is_register_available[i] = true;
                assigned_register_table[i] = "";
            }
        }
    }

    for (int i = 0; i < REGISTERS_NUM; i++) {
        if (is_register_available[i] == true) {
            assigned_register_table[i] = registers[i];
            is_register_available[i] = 0;
            return '$' + registers[i];
        }
    }

    return "";
}


string translateOneLine(vector<string> line)
{
    if (line[0] == "LABEL")
        return line[1] + ":";
    if (line[1] == ":=") {
        if (line.size() == 3) {
            if (line.back()[0] == '#')
                return "\tli " + assignRegister(line[0]) + "," + line.back().substr(1, line.back().length() - 1);
            else
                return "\tmove " + assignRegister(line[0]) + "," + assignRegister(line[2]);
        }
        if (line.size() == 5) {
            if (line[3] == "+") {
                if (line.back()[0] == '#')
                    return "\taddi " + assignRegister(line[0]) + "," + assignRegister(line[2]) + "," +
                           line.back().substr(1, line.back().length() - 1);
                else
                    return "\tadd " + assignRegister(line[0]) + "," + assignRegister(line[2]) + "," +
                           assignRegister(line.back());
            } else if (line[3] == "-") {
                if (line.back()[0] == '#')
                    return "\taddi " + assignRegister(line[0]) + "," + assignRegister(line[2]) + ",-" +
                           line.back().substr(1, line.back().length() - 1);
                else
                    return "\tsub " + assignRegister(line[0]) + "," + assignRegister(line[2]) + "," +
                           assignRegister(line.back());
            } else if (line[3] == "*")
                return "\tmul " + assignRegister(line[0]) + "," + assignRegister(line[2]) + "," +
                       assignRegister(line.back());
            else if (line[3] == "/")
                return "\tdiv " + assignRegister(line[2]) + "," + assignRegister(line.back()) + "\n\tmflo " +
                       assignRegister(line[0]);
            else if (line[3] == "<")
                return "\tslt " + assignRegister(line[0]) + "," + assignRegister(line[2]) + "," +
                       assignRegister(line.back());
            else if (line[3] == ">")
                return "\tslt " + assignRegister(line[0]) + "," + assignRegister(line.back()) + "," +
                       assignRegister(line[2]);
        }
        if (line[2] == "CALL") {
            if (line[3] == "read" || line[3] == "print")
                return "\taddi $sp,$sp,-4\n\tsw $ra,0($sp)\n\tjal " + line.back() + "\n\tlw $ra,0($sp)\n\tmove " +
                       assignRegister(line[0]) + ",$v0\n\taddi $sp,$sp,4";
            else
                return "\taddi $sp,$sp,-24\n\tsw $t0,0($sp)\n\tsw $ra,4($sp)\n\tsw $t1,8($sp)\n\tsw $t2,12($sp)\n\tsw $t3,16($sp)\n\tsw $t4,20($sp)\n\tjal " +
                       line.back() +
                       "\n\tlw $a0,0($sp)\n\tlw $ra,4($sp)\n\tlw $t1,8($sp)\n\tlw $t2,12($sp)\n\tlw $t3,16($sp)\n\tlw $t4,20($sp)\n\taddi $sp,$sp,24\n\tmove " +
                       assignRegister(line[0]) + " $v0";
        }
    }
    if (line[0] == "GOTO")
        return "\tj " + line[1];
    if (line[0] == "RETURN")
        return "\tmove $vo," + assignRegister(line[1]) + "\n\tjr $ra";
    if (line[0] == "IF") {
        if (line[2] == "==")
            return "\tbeq " + assignRegister(line[1]) + "," + assignRegister(line[3]) + "," +
                   line.back();
        if (line[2] == "!=")
            return "\tbne " + assignRegister(line[1]) + "," + assignRegister(line[3]) + "," +
                   line.back();
        if (line[2] == ">")
            return "\tbgt " + assignRegister(line[1]) + "," + assignRegister(line[3]) + "," +
                   line.back();
        if (line[2] == "<")
            return "\tblt " + assignRegister(line[1]) + "," + assignRegister(line[3]) + "," +
                   line.back();
        if (line[2] == ">=")
            return "\tbge " + assignRegister(line[1]) + "," + assignRegister(line[3]) + "," +
                   line.back();
        if (line[2] == "<=")
            return "\tble " + assignRegister(line[1]) + "," + assignRegister(line[3]) + "," +
                   line.back();
    }
    if (line[0] == "FUNCTION")
        return line[1] + ":";
    if (line[0] == "CALL") {
        if (line.back() == "read" || line.back() == "print")
            return "\taddi $sp,$sp,-4\n\tsw $ra,0($sp)\n\tjal " + line.back() + "\n\tlw $ra,0($sp)\n\taddi $sp,$sp,4";
        else
            return "\taddi $sp,$sp,-24\n\tsw $t0,0($sp)\n\tsw $ra,4($sp)\n\tsw $t1,8($sp)\n\tsw $t2,12($sp)\n\tsw $t3,16($sp)\n\tsw $t4,20($sp)\n\tjal " +
                   line.back() +
                   "\n\tlw $a0,0($sp)\n\tlw $ra,4($sp)\n\tlw $t1,8($sp)\n\tlw $t2,12($sp)\n\tlw $t3,16($sp)\n\tlw $t4,20($sp)\n\taddi $sp,$sp,24\n\tmove " +
                   assignRegister(line[0]) +" $v0";
    }
    if (line[0] == "ARG")
        return "\tmove $t0,$a0\n\tmove $a0," + assignRegister(line.back());
    if (line[0] == "PARAM") {
        for (int i = 0; i < REGISTERS_NUM; i++) {
            if (assigned_register_table[i] == line.back())
                assigned_register_table[i] = "a0";
        }
    }

    return "";
}

void translateIntoMips(vector<string> words[])
{
    for (int i = 0; i < line_num; i++) {
        string temp_result;
        temp_result = translateOneLine(words[i]);
        if (temp_result != "")
            result_string.push_back(temp_result);
    }
}

void writeToFile(void) {
    fstream fs;
    fs.open("result.asm", ios::out);
    for (vector<string>::iterator it = result_string.begin(); it != result_string.end(); it++)
        fs << *it << endl;

}

int main(void)
{
    for (int i = 0; i < REGISTERS_NUM; i++) {
        is_register_available[i] = true;
        assigned_register_table[i] = "";
    }
    for (int i = 0; i < MAX_LINE_NUM; i++)
        read_words[i].clear();
    line_num = 0;
    variables.clear();
    result_string.clear();

    readFile("ircode", read_words);
    readVariables(read_words);
    translateIntoMips(read_words);
    writeToFile();

    return 0;
}