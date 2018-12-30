#include <iostream>
#include "AST/AbstractSyntaxTree.h"
#include "Parser/Parser.h"

using namespace std;
int yyparse(void);
int errorState;
extern AbstractSyntaxTree root;
void printTree(AbstractSyntaxTree root){
    cout << root->name << endl;;
    for(auto i: root->sibling){
        printTree(i);
    }

}
int main() {
    errorState = 0;
    freopen("test.c", "r", stdin);
    if(yyparse()){

        return 0;
    }
    Parser parser(root);
    parser.parse();
    if(errorState){
        cout << "error occurred, can't generate IRCode" << endl;
        return 0;
    }
    parser.generateIRCode();
    cout << root->name << endl;
    cout << root->content << endl;
    //printTree(root);
    return <%123%>;
}