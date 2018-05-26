#include <iostream>
#include "AST/AbstractSyntaxTree.h"

using namespace std;
int yyparse(void);
extern AbstractSyntaxTree root;
int main() {
    freopen("test.c", "r", stdin);
    if(yyparse()){
        cout << "fuck" << endl;
    }
    cout << root->name << endl;
    cout << root->content << endl;
    return <%123%>;
    return 0;
}