/*
ANSI C Yacc grammar
(This Yacc file is accompanied by a matching Lex file.)
In 1985, Jeff Lee published his Yacc grammar based on a draft version of the ANSI C standard, along with a supporting Lex specification. Tom Stockfisch reposted those files to net.sources in 1987; as mentioned in the answer to question 17.25 of the comp.lang.c FAQ, they used to be available from ftp.uu.net as usenet/net.sources/ansi.c.grammar.Z.

The version you see here has been updated based on the 2011 ISO C standard. (The previous version's Lex and Yacc files for ANSI C9X still exist as archived copies.)

This grammar assumes that translation phases 1..5 have already been completed, including preprocessing and _Pragma processing. The Lex rule for string literals will perform concatenation (translation phase 6). Transliteration of universal character names (\uHHHH or \UHHHHHHHH) must have been done by either the preprocessor or a replacement for the input() macro used by Lex (or the YY_INPUT function used by Flex) to read characters. Although comments should have been changed to space characters during translation phase 3, there are Lex rules for them anyway.

I want to keep this version as close to the current C Standard grammar as possible; please let me know if you discover discrepancies.
(There is an FAQ for this grammar that you might want to read first.)

jutta@pobox.com, 2012

Last edit: 2012-12-18 DAGwyn@aol.com

Note: There are two shift/reduce conflicts, correctly resolved by default:
  IF '(' expression ')' statement _ ELSE statement
and
  ATOMIC _ '(' type_name ')'
where "_" has been used to flag the points of ambiguity.
*/

%{
#include "../AST/AbstractSyntaxTree.h"
#include <cstdlib>
#include <cstdio>
#include <string>
#include "y.tab.h"
using namespace std;
/* #include "symtab.h" */

#define YYDEBUG 1
extern char *yytext;
extern int column;
extern FILE * yyin;
extern FILE * yyout;
extern int yylineno;
extern int errorState;
int yylex(void);

AbstractSyntaxTree root = NULL;

void yyerror(const char *s)
{
    errorState = 1;
	fflush(stdout);
	fprintf(stderr, "*** %s at line: %d\n", s, yylineno);
}
%}

%union {
    AbstractSyntaxTree ast;
}

%token	<ast> IDENTIFIER STRING_LITERAL SIZEOF
%token  <ast> I_CONSTANT
%token  <ast> F_CONSTANT
%token  <ast> C_CONSTANT
%token	<ast> PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token	<ast> AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token	<ast> SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token	<ast> XOR_ASSIGN OR_ASSIGN

%token	<ast> TYPEDEF_NAME ENUMERATION_CONSTANT

%token	<ast> TYPEDEF EXTERN STATIC AUTO REGISTER INLINE
%token	<ast> CONST RESTRICT VOLATILE
%token	<ast> CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE VOID
%token	<ast> STRUCT UNION ENUM ELLIPSIS
%token  <ast> ';' ',' ':' '=' '[' ']' '.' '&' '!' '~' '-' '+' '*' '/' '%' '<' '>' '^' '|' '?' '{' '}' '(' ')'
%token	<ast> CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%type <ast> primary_expression constant enumeration_constant string postfix_expression argument_expression_list unary_expression unary_operator cast_expression multiplicative_expression additive_expression shift_expression relational_expression equality_expression and_expression exclusive_or_expression inclusive_or_expression logical_and_expression logical_or_expression conditional_expression assignment_expression expression constant_expression declaration declaration_specifiers init_declarator_list init_declarator storage_class_specifier type_specifier struct_or_union_specifier struct_or_union struct_declaration_list struct_declaration specifier_qualifier_list struct_declarator_list struct_declarator enum_specifier enumerator_list enumerator type_qualifier function_specifier declarator direct_declarator pointer type_qualifier_list parameter_type_list parameter_list parameter_declaration identifier_list type_name abstract_declarator direct_abstract_declarator initializer initializer_list designation designator_list designator statement labeled_statement compound_statement block_item_list block_item expression_statement selection_statement iteration_statement jump_statement translation_unit external_declaration function_definition declaration_list assignment_operator
%start program
%%
program
    : translation_unit
    {
        root = createTree("program", 1, $1);
    }

primary_expression
	: IDENTIFIER
	{
        $$ =   createTree("primary_expression", 1, $1);
	}
	| constant
	{
        $$ =   createTree("primary_expression", 1, $1);
	}
	| string
	{
        $$ =   createTree("primary_expression", 1, $1);
	}
	| '(' expression ')'
	{
        $$ =   createTree("primary_expression", 1, $2);
	}
	;

constant
	: I_CONSTANT
	{
	    $$ = createTree("constant", 1, $1);
	}
	| F_CONSTANT
	{
    	$$ = createTree("constant", 1, $1);
    }
	| C_CONSTANT
	{
    	$$ = createTree("constant", 1, $1);
    }
	| ENUMERATION_CONSTANT	/* after it has been defined as such */
	{
    	$$ = createTree("constant", 1, $1);
    }
	;

enumeration_constant		/* before it has been defined as such */
	: IDENTIFIER
	{
	    $$ = createTree("enumeration_constant", 1, $1);
	}
	;

string
	: STRING_LITERAL
	{
	    $$ = createTree("string", 1, $1);
	}
	;

postfix_expression
	: primary_expression
	{
	    $$ = createTree("postfix_expression", 1, $1);
	}
	| postfix_expression '[' expression ']'
	{
	    // array
	    $$ = createTree("postfix_expression", 4, $1, $2, $3, $4);
	}
	| postfix_expression '(' ')'
	{
	    // function call
        $$ = createTree("postfix_expression", 3, $1, $2, $3);
	}
	| postfix_expression '(' argument_expression_list ')'
	{
	    //...
	    $$ = createTree("postfix_expression", 4, $1, $2, $3, $4);
	}
	// | postfix_expression '.' IDENTIFIER
	// {
	//     // point.x
	//     $$ = createTree("postfix_expression", 2, $1, $3);
	// }
	// | postfix_expression PTR_OP IDENTIFIER
	// {
	//     // point->x
    //     $$ = createTree("postfix_expression", 3, $1, $2, $3);
	// }
	| postfix_expression INC_OP
	{
	    //i++
        $$ = createTree("postfix_expression", 2, $1, $2);
	}
	| postfix_expression DEC_OP
	{
	    //i--
        $$ = createTree("postfix_expression", 2, $1, $2);
	}
	;
	// | '(' type_name ')' '{' initializer_list '}'
	// {
	//     $$ = createTree("postfix_expression", 2, $2, $5);
	// }
	// | '(' type_name ')' '{' initializer_list ',' '}'
	// {
	//     $$ = createTree("postfix_expression", 2, $2, $5);
	// }
	// ;

argument_expression_list
	: assignment_expression
	{
	    $$ = createTree("argument_expression_list", 1, $1);
	}
	| argument_expression_list ',' assignment_expression
	{
	    $1->sibling.push_back($3);
	    $$ = $1;
	}
	;

unary_expression
	: postfix_expression
	{
	    $$ = createTree("unary_expression", 1, $1);
	}
	| INC_OP unary_expression
	{
	    $$ = createTree("unary_expression", 2, $1, $2);
	}
	| DEC_OP unary_expression
	{
	    $$ = createTree("unary_expression", 2, $1, $2);
	}
	| unary_operator unary_expression
	{
	    $$ = createTree("unary_expression", 2, $1, $2);
	}
	// | SIZEOF unary_expression
	// {
	//     $$ = createTree("unary_expression", 2, $1, $2);
	// }
	// | SIZEOF '(' type_name ')'
	// {
	//     $$ = createTree("unary_expression", 2, $1, $3);
	// }
	// ;

unary_operator
	: '&'
	{
        $$ = createTree("unary_expression", 1, $1);
	}
	| '*'
	{
	    $$ = createTree("unary_expression", 1, $1);
	}
	| '+'
	{
	    $$ = createTree("unary_expression", 1, $1);
	}
	| '-'
	{
	    $$ = createTree("unary_expression", 1, $1);
	}
	| '~'
	{
	    $$ = createTree("unary_expression", 1, $1);
	}
	| '!'
	{
	    $$ = createTree("unary_expression", 1, $1);
	}
	;

cast_expression
	: unary_expression
	{
	    $$ = createTree("cast_expression", 1, $1);
	}
	| '(' type_name ')' cast_expression
	{
	    $$ = createTree("cast_expression", 2, $2, $4);
	}
	;

multiplicative_expression
	: cast_expression
	{
	    $$ = createTree("multiplicative_expression", 1, $1);
	}
	| multiplicative_expression '*' cast_expression
	{
	    $$ = createTree("multiplicative_expression", 3, $1, $2, $3);
	}
	| multiplicative_expression '/' cast_expression
	{
	    $$ = createTree("multiplicative_expression", 3, $1, $2, $3);
	}
	| multiplicative_expression '%' cast_expression
	{
	    $$ = createTree("multiplicative_expression", 3, $1, $2, $3);
	}
	;

additive_expression
	: multiplicative_expression
	{
	    $$ = createTree("additive_expression", 1, $1);
	}
	| additive_expression '+' multiplicative_expression
	{
	    $$ = createTree("additive_expression", 3, $1, $2, $3);
	}
	| additive_expression '-' multiplicative_expression
	{
	    $$ = createTree("additive_expression", 3, $1, $2, $3);
	}
	;

shift_expression
	: additive_expression
	{
	    $$ = createTree("shift_expression", 1, $1);
	}
	| shift_expression LEFT_OP additive_expression
	{
	    $$ = createTree("shift_expression", 3, $1, $2, $3);
	}
	| shift_expression RIGHT_OP additive_expression
	{
	    $$ = createTree("shift_expression", 3, $1, $2, $3);
	}
	;

relational_expression
	: shift_expression
	{
	    $$ = createTree("relational_expression", 1, $1);
	}
	| relational_expression '<' shift_expression
	{
	    $$ = createTree("relational_expression", 3, $1, $2, $3);
	}
	| relational_expression '>' shift_expression
	{
	    $$ = createTree("relational_expression", 3, $1, $2, $3);
	}
	| relational_expression LE_OP shift_expression
	{
	    $$ = createTree("relational_expression", 3, $1, $2, $3);
	}
	| relational_expression GE_OP shift_expression
	{
	    $$ = createTree("relational_expression", 3, $1, $2, $3);
	}
	;

equality_expression
	: relational_expression
	{
	    $$ = createTree("equality_expression", 1, $1);
	}
	| equality_expression EQ_OP relational_expression
	{
	    $$ = createTree("equality_expression", 3, $1, $2, $3);
	}
	| equality_expression NE_OP relational_expression
	{
	    $$ = createTree("equality_expression", 3, $1, $2, $3);
	}
	;

and_expression
	: equality_expression
	{
	    $$ = createTree("and_expression", 1, $1);
	}
	| and_expression '&' equality_expression
	{
	    $$ = createTree("and_expression", 3, $1, $2, $3);
	}
	;

exclusive_or_expression
	: and_expression
	{
	    $$ = createTree("exclusive_or_expression", 1, $1);
	}
	| exclusive_or_expression '^' and_expression
	{
	    $$ = createTree("exclusive_or_expression", 3, $1, $2, $3);
	}
	;

inclusive_or_expression
	: exclusive_or_expression
	{
	    $$ = createTree("inclusive_or_expression", 1, $1);
	}
	| inclusive_or_expression '|' exclusive_or_expression
	{
	    $$ = createTree("inclusive_or_expression", 3, $1, $2, $3);
	}
	;

logical_and_expression
	: inclusive_or_expression
	{
	    $$ = createTree("logical_and_expression", 1, $1);
	}
	| logical_and_expression AND_OP inclusive_or_expression
	{
	    $$ = createTree("logical_and_expression", 3, $1, $2, $3);
	}
	;

logical_or_expression
	: logical_and_expression
	{
	    $$ = createTree("logical_or_expression", 1, $1);
	}
	| logical_or_expression OR_OP logical_and_expression
	{
	    $$ = createTree("logical_or_expression", 3, $1, $2, $3);
	}
	;

conditional_expression
	: logical_or_expression
	{
	    $$ = createTree("conditional_expression", 1, $1);
	}
	| logical_or_expression '?' expression ':' conditional_expression
	{
	    $$ = createTree("conditional_expression", 3, $1, $3, $5);
	}
	;

assignment_expression
	: conditional_expression
	{
	    $$ = createTree("assignment_expression", 1, $1);
	}
	| unary_expression assignment_operator assignment_expression
	{
	    $$ = createTree("assignment_expression", 3, $1, $2, $3);
	}
	;

assignment_operator
	: '='
	{
	    $$ = createTree("assignment_operator", 1, $1);
	}
	| MUL_ASSIGN
	{
	    $$ = createTree("assignment_operator", 1, $1);
	}
	| DIV_ASSIGN
	{
	    $$ = createTree("assignment_operator", 1, $1);
	}
	| MOD_ASSIGN
	{
	    $$ = createTree("assignment_operator", 1, $1);
	}
	| ADD_ASSIGN
	{
	    $$ = createTree("assignment_operator", 1, $1);
	}
	| SUB_ASSIGN
	{
	    $$ = createTree("assignment_operator", 1, $1);
	}
	| LEFT_ASSIGN
	{
	    $$ = createTree("assignment_operator", 1, $1);
	}
	| RIGHT_ASSIGN
	{
	    $$ = createTree("assignment_operator", 1, $1);
	}
	| AND_ASSIGN
	{
	    $$ = createTree("assignment_operator", 1, $1);
	}
	| XOR_ASSIGN
	{
	    $$ = createTree("assignment_operator", 1, $1);
	}
	| OR_ASSIGN
	{
	    $$ = createTree("assignment_operator", 1, $1);
	}
	;

expression
	: assignment_expression
	{
	    $$ = createTree("expression", 1, $1);
	}
	| expression ',' assignment_expression
	{
	    $1->sibling.push_back($3);
	    $$ = $1;
	}
	;

constant_expression
	: conditional_expression	/* with constraints */
	{
	    $$ = createTree("constant_expression", 1, $1);
	}
	;

declaration
	: declaration_specifiers ';'
	{
	    $$ = createTree("declaration", 1, $1);
	}
	| declaration_specifiers init_declarator_list ';'
	{
	    $$ = createTree("declaration", 2, $1, $2);
	}
	;

declaration_specifiers
	: storage_class_specifier declaration_specifiers
	{
	    $$ = createTree("declaration_specifiers", 2, $1, $2);
	}
	| storage_class_specifier
	{
        $$ = createTree("declaration_specifiers", 1, $1);
	}
	| type_specifier declaration_specifiers
	{
	    $$ = createTree("declaration_specifiers", 2, $1, $2);
	}
	| type_specifier
	{
	    $$ = createTree("declaration_specifiers", 1, $1);
	}
	| type_qualifier declaration_specifiers
	{
	    $$ = createTree("declaration_specifiers", 2, $1, $2);
	}
	| type_qualifier
	{
	    $$ = createTree("declaration_specifiers", 1, $1);
	}
	| function_specifier declaration_specifiers
	{
	    $$ = createTree("declaration_specifiers", 2, $1, $2);
	}
	| function_specifier
	{
	    $$ = createTree("declaration_specifiers", 1, $1);
	}
	;

init_declarator_list
	: init_declarator
	{
	    $$ = createTree("init_declarator_list", 1, $1);
	}
	| init_declarator_list ',' init_declarator
	{
	    $1->sibling.push_back($3);
	    $$ = $1;
	}
	;

init_declarator
	: declarator '=' initializer
	{
	    $$ = createTree("init_declarator", 3, $1, $2, $3);
	}
	| declarator
	{
	    $$ = createTree("init_declarator", 1, $1);
	}
	;

storage_class_specifier
	: TYPEDEF
	{
	    /* identifiers must be flagged as TYPEDEF_NAME */
	    $$ = createTree("storage_class_specifier", 1, $1);
	}
	| EXTERN
	{
	    $$ = createTree("storage_class_specifier", 1, $1);
	}
	| STATIC
	{
	    $$ = createTree("storage_class_specifier", 1, $1);
	}
	| AUTO
	{
	    $$ = createTree("storage_class_specifier", 1, $1);
	}
	| REGISTER
	{
	    $$ = createTree("storage_class_specifier", 1, $1);
	}
	;

type_specifier
	: VOID
	{
	    $$ = createTree("type_specifier", 1, $1);
	}
	| CHAR
	{
	    $$ = createTree("type_specifier", 1, $1);
	}
	| SHORT
	{
	    $$ = createTree("type_specifier", 1, $1);
	}
	| INT
	{
	    $$ = createTree("type_specifier", 1, $1);
	}
	| LONG
	{
	    $$ = createTree("type_specifier", 1, $1);
	}
	| FLOAT
	{
	    $$ = createTree("type_specifier", 1, $1);
	}
	| DOUBLE
	{
	    $$ = createTree("type_specifier", 1, $1);
	}
	| SIGNED
	{
	    $$ = createTree("type_specifier", 1, $1);
	}
	| UNSIGNED
	{
	    $$ = createTree("type_specifier", 1, $1);
	}
	| struct_or_union_specifier
	{
	    $$ = createTree("type_specifier", 1, $1);
	}
	| enum_specifier
	{
	    $$ = createTree("type_specifier", 1, $1);
	}
	| TYPEDEF_NAME
	{
	    /* after it has been defined as such */
	    $$ = createTree("type_specifier", 1, $1);
	}
	;

struct_or_union_specifier
	: struct_or_union '{' struct_declaration_list '}'
	{
	    $$ = createTree("struct_or_union_specifier", 2, $1, $3);
	}
	| struct_or_union IDENTIFIER '{' struct_declaration_list '}'
	{
	    $$ = createTree("struct_or_union_specifier", 3, $1, $2, $4);
	}
	| struct_or_union IDENTIFIER
	{
	    $$ = createTree("struct_or_union_specifier", 2, $1, $2);
	}
	;

struct_or_union
	: STRUCT
	{
	    $$ = createTree("struct_or_union", 1, $1);
	}
	| UNION
	{
	    $$ = createTree("struct_or_union", 1, $1);
	}
	;

struct_declaration_list
	: struct_declaration
	{
	    $$ = createTree("struct_declaration_list", 1, $1);
	}
	| struct_declaration_list struct_declaration
	{
	    $1->sibling.push_back($2);
	    $$ = $1;
	}
	;

struct_declaration
	: specifier_qualifier_list ';'
	{
	    /* for anonymous struct/union */
	    $$ = createTree("struct_declaration", 1, $1);
	}
	| specifier_qualifier_list struct_declarator_list ';'
	{
	    $$ = createTree("struct_declaration", 2, $1, $2);
	}
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	{
	    $$ = createTree("specifier_qualifier_list", 2, $1, $2);
	}
	| type_specifier
	{
	    $$ = createTree("specifier_qualifier_list", 1, $1);
	}
	| type_qualifier specifier_qualifier_list
	{
	    $$ = createTree("specifier_qualifier_list", 2, $1, $2);
	}
	| type_qualifier
	{
	    $$ = createTree("specifier_qualifier_list", 1, $1);
	}
	;

struct_declarator_list
	: struct_declarator
	{
	    $$ = createTree("struct_declarator_list", 1, $1);
	}
	| struct_declarator_list ',' struct_declarator
	{
	    $$ = createTree("struct_declarator_list", 2, $1, $3);
	}
	;

struct_declarator
	: ':' constant_expression
	{
	    $$ = createTree("struct_declarator", 1, $2);
	}
	| declarator ':' constant_expression
	{
	    $$ = createTree("struct_declarator", 2, $1, $3);
	}
	| declarator
	{
	    $$ = createTree("struct_declarator", 1, $1);
	}
	;

enum_specifier
	: ENUM '{' enumerator_list '}'
	{
		$$ = createTree("enum_specifier", 2, $1, $3);
	}
	| ENUM '{' enumerator_list ',' '}'
	{
		$$ = createTree("enum_specifier", 2, $1, $3);
	}
	| ENUM IDENTIFIER '{' enumerator_list '}'
	{
		$$ = createTree("enum_specifier", 3, $1, $2, $4);
	}
	| ENUM IDENTIFIER '{' enumerator_list ',' '}'
	{
		$$ = createTree("enum_specifier", 3, $1, $2, $4);
	}
	| ENUM IDENTIFIER
	{
		$$ = createTree("enum_specifier", 2, $1, $2);
	}
	;

enumerator_list
	: enumerator
	{
		$$ = createTree("enumerator_list", 1, $1);
	}
	| enumerator_list ',' enumerator
	{
	    $1->sibling.push_back($3);
	    $$ = $1;
	}
	;

enumerator
	: enumeration_constant '=' constant_expression
	{
	    /* identifiers must be flagged as ENUMERATION_CONSTANT */
	    $$ = createTree("enumerator", 3, $1, $2, $3);
	}
	| enumeration_constant
	{
	    $$ = createTree("enumerator", 1, $1);
	}
	;

type_qualifier
	: CONST
	{
	    $$ = createTree("type_qualifier", 1, $1);
	}
	| RESTRICT
	{
	    $$ = createTree("type_qualifier", 1, $1);
	}
	| VOLATILE
	{
	    $$ = createTree("type_qualifier", 1, $1);
	}
	;

function_specifier
	: INLINE
	{
	    $$ = createTree("function_specifier", 1, $1);
	}
	;

declarator
	: pointer direct_declarator
	{
	    $$ = createTree("declarator", 2, $1, $2);
	}
	| direct_declarator
	{
	    $$ = createTree("declarator", 1, $1);
	}
	;

direct_declarator
	: IDENTIFIER
	{
	    $$ = createTree("direct_declarator", 1, $1);
	}
	| '(' declarator ')'
	{
	    $$ = createTree("direct_declarator", 1, $2);
	}
	| direct_declarator '[' ']'
	{
	    $$ = createTree("direct_declarator", 3, $1, $2, $3);
	}
	| direct_declarator '[' '*' ']'
	{
	    $$ = createTree("direct_declarator", 4, $1, $2, $3, $4);
	}
	| direct_declarator '[' STATIC type_qualifier_list assignment_expression ']'
	{
	    $$ = createTree("direct_declarator", 6, $1, $2, $3, $4, $5, $6);
	}
	| direct_declarator '[' STATIC assignment_expression ']'
    {
        $$ = createTree("direct_declarator", 5, $1, $2, $3, $4, $5);
    }
	| direct_declarator '[' type_qualifier_list '*' ']'
	{
	    $$ = createTree("direct_declarator", 5, $1, $2, $3, $4, $5);
	}
	| direct_declarator '[' type_qualifier_list STATIC assignment_expression ']'
	{
	    $$ = createTree("direct_declarator", 6, $1, $2, $4, $3, $5, $6);
	}
	| direct_declarator '[' type_qualifier_list assignment_expression ']'
	{
	    $$ = createTree("direct_declarator", 5, $1, $2, $3, $4, $5);
	}
	| direct_declarator '[' type_qualifier_list ']'
	{
	    $$ = createTree("direct_declarator", 4, $1, $2, $3, $4);
	}
	| direct_declarator '[' assignment_expression ']'
	{
	    $$ = createTree("direct_declarator", 4, $1, $2, $3, $4);
	}
	| direct_declarator '(' parameter_type_list ')'
	{
	    $$ = createTree("direct_declarator", 4, $1, $2, $3, $4);
	}
	| direct_declarator '(' ')'
	{
	    $$ = createTree("direct_declarator", 3, $1, $2, $3);
	}
	| direct_declarator '(' identifier_list ')'
	{
	    $$ = createTree("direct_declarator", 4, $1, $2, $3, $4);
	}
	;

pointer
	: '*' type_qualifier_list pointer
	{
	    $$ = createTree("pointer", 3, $1, $2, $3);
	}
	| '*' type_qualifier_list
	{
	    $$ = createTree("pointer", 2, $1, $2);
	}
	| '*' pointer
	{
	    $$ = createTree("pointer", 2, $1, $2);
	}
	| '*'
	{
	    $$ = createTree("pointer", 1, $1);
	}
	;

type_qualifier_list
	: type_qualifier
	{
	    $$ = createTree("type_qualifier_list", 1, $1);
	}
	| type_qualifier_list type_qualifier
	{
	    $1->sibling.push_back($2);
	    $$ = $1;
	}
	;


parameter_type_list
	: parameter_list ',' ELLIPSIS
	{
	    $$ = createTree("parameter_type_list", 2, $1, $3);
	}
	| parameter_list
	{
	    $$ = createTree("parameter_type_list", 1, $1);
	}
	;

parameter_list
	: parameter_declaration
	{
	    $$ = createTree("parameter_list", 1, $1);
	}
	| parameter_list ',' parameter_declaration
	{
	    $1->sibling.push_back($3);
	    $$ = $1;
	}
	;

parameter_declaration
	: declaration_specifiers declarator
	{
	    $$ = createTree("parameter_declaration", 2, $1, $2);
	}
	| declaration_specifiers abstract_declarator
	{
	    $$ = createTree("parameter_declaration", 2, $1, $2);
	}
	| declaration_specifiers
	{
	    $$ = createTree("parameter_declaration", 1, $1);
	}
	;

identifier_list
	: IDENTIFIER
	{
        $$ = createTree("identifier_list", 1, $1);
	}
	| identifier_list ',' IDENTIFIER
	{
	    $1->sibling.push_back($3);
    	$$ = $1;
	}
	;

type_name
	: specifier_qualifier_list abstract_declarator
	{
	    $$ = createTree("type_name", 2, $1, $2);
	}
	| specifier_qualifier_list
	{
	    $$ = createTree("type_name", 1, $1);
	}
	;

abstract_declarator
	: pointer direct_abstract_declarator
	{
	    $$ = createTree("abstract_declarator", 2, $1, $2);
	}
	| pointer
	{
        $$ = createTree("pointer", 1, $1);
	}
	| direct_abstract_declarator
	{
        $$ = createTree("pointer", 1, $1);
	}
	;

direct_abstract_declarator
	: '(' abstract_declarator ')'
	{
	    $$ = createTree("direct_abstract_declarator", 1, $2);
	}
	| '[' ']'
	{
	    $$ = createTree("direct_abstract_declarator", 2, $1, $2);
	}
	| '[' '*' ']'
	{
	    $$ = createTree("direct_abstract_declarator", 3, $1, $2, $3);
	}
	| '[' STATIC type_qualifier_list assignment_expression ']'
	{
	    $$ = createTree("direct_abstract_declarator", 5, $1, $2, $3, $4, $5);
	}
	| '[' STATIC assignment_expression ']'
	{
	    $$ = createTree("direct_abstract_declarator", 4, $1, $2, $3, $4);
	}
	| '[' type_qualifier_list STATIC assignment_expression ']'
	{
	    $$ = createTree("direct_abstract_declarator", 5, $1, $3, $2, $4, $5);
	}
	| '[' type_qualifier_list assignment_expression ']'
	{
	    $$ = createTree("direct_abstract_declarator", 4, $1, $2, $3, $4);
	}
	| '[' type_qualifier_list ']'
	{
	    $$ = createTree("direct_abstract_declarator", 3, $1, $2, $3);
	}
	| '[' assignment_expression ']'
	{
	    $$ = createTree("direct_abstract_declarator", 3, $1, $2, $3);
	}
	| direct_abstract_declarator '[' ']'
	{
	    $$ = createTree("direct_abstract_declarator", 3, $1, $2, $3);
	}
	| direct_abstract_declarator '[' '*' ']'
	{
	    $$ = createTree("direct_abstract_declarator", 4, $1, $2, $3, $4);
	}
	| direct_abstract_declarator '[' STATIC type_qualifier_list assignment_expression ']'
	{
	    $$ = createTree("direct_abstract_declarator", 6, $1, $2, $3, $4, $5, $6);
	}
	| direct_abstract_declarator '[' STATIC assignment_expression ']'
	{
	    $$ = createTree("direct_abstract_declarator", 5, $1, $2, $3, $4, $5);
	}
	| direct_abstract_declarator '[' type_qualifier_list assignment_expression ']'
	{
	    $$ = createTree("direct_abstract_declarator", 5, $1, $2, $3, $4, $5);
	}
	| direct_abstract_declarator '[' type_qualifier_list STATIC assignment_expression ']'
    {
        $$ = createTree("direct_abstract_declarator", 6, $1, $2, $4, $3, $5, $6);
    }
	| direct_abstract_declarator '[' type_qualifier_list ']'
	{
	    $$ = createTree("direct_abstract_declarator", 4, $1, $2, $3, $4);
	}
	| direct_abstract_declarator '[' assignment_expression ']'
	{
	    $$ = createTree("direct_abstract_declarator", 4, $1, $2, $3, $4);
	}
	| '(' ')'
	{
	    $$ = createTree("direct_abstract_declarator", 2, $1, $2);
	}
	| '(' parameter_type_list ')'
	{
	    $$ = createTree("direct_abstract_declarator", 3, $1, $2, $3);
	}
	| direct_abstract_declarator '(' ')'
	{
	    $$ = createTree("direct_abstract_declarator", 3, $1, $2, $3);
	}
	| direct_abstract_declarator '(' parameter_type_list ')'
	{
	    $$ = createTree("direct_abstract_declarator", 4, $1, $2, $3, $4);
	}
	;

initializer
	: '{' initializer_list '}'
	{
	    $$ = createTree("initializer", 1, $2);
	}
	| '{' initializer_list ',' '}'
	{
	    $$ = createTree("initializer", 1, $2);
	}
	| assignment_expression
	{
	    $$ = createTree("initializer", 1, $1);
	}
	;

initializer_list
	: designation initializer
	{
	    $$ = createTree("initializer_list", 2, $1, $2);
	}
	| initializer
	{
	    $$ = createTree("initializer_list", 1, $1);
	}
	| initializer_list ',' designation initializer
	{
	    $$ = createTree("initializer_list", 3, $1, $3, $4);
	}
	| initializer_list ',' initializer
	{
	    $$ = createTree("initializer_list", 2, $1, $3);
	}
	;

designation
	: designator_list '='
	{
	    $$ = createTree("designation", 1, $1);
	}
	;

designator_list
	: designator
	{
	    $$ = createTree("designator_list", 1, $1);
	}
	| designator_list designator
	{
	    $$ = createTree("designator_list", 2, $1, $2);
	}
	;

designator
	: '[' constant_expression ']'
	{
	    $$ = createTree("designator", 3, $1, $2, $3);
	}
	| '.' IDENTIFIER
	{
	    $$ = createTree("designator", 2, $1, $2);
	}
	;

statement
	: labeled_statement
	{
	    $$ = createTree("statement", 1, $1);
	}
	| compound_statement
	{
	    $$ = createTree("statement", 1, $1);
	}
	| expression_statement
	{
	    $$ = createTree("statement", 1, $1);
	}
	| selection_statement
	{
	    $$ = createTree("statement", 1, $1);
	}
	| iteration_statement
	{
	    $$ = createTree("statement", 1, $1);
	}
	| jump_statement
	{
	    $$ = createTree("statement", 1, $1);
	}
	| error
    {
    	yyerrok;
    }
	;

labeled_statement
	: IDENTIFIER ':' statement
	{
	    $$ = createTree("labeled_statement", 2, $1, $3);
	}
	| CASE constant_expression ':' statement
	{
	    $$ = createTree("labeled_statement", 3, $1, $2, $4);
	}
	| DEFAULT ':' statement
	{
	    $$ = createTree("labeled_statement", 2, $1, $3);
	}
	;

compound_statement
	: '{' '}'
	{
	    $$ = createTree("compound_statement", 0, $1->line);
	}
	| '{' block_item_list '}'
	{
	    $$ = createTree("compound_statement", 1, $2);
	}
	;

block_item_list
	: block_item
	{
	    $$ = createTree("block_item_list", 1, $1);
	}
	| block_item_list block_item
	{
	    $1->sibling.push_back($2);
	    $$ = $1;
	}
	;

block_item
	: declaration
	{
	    $$ = createTree("block_item", 1, $1);
	}
	| statement
	{
	    $$ = createTree("block_item", 1, $1);
	}
	;

expression_statement
	: ';'
	{
	    $$ = createTree("expression_statement", 0, $1->line);
	}
	| expression ';'
	{
	    $$ = createTree("expression_statement", 1, $1);
	}
	;

selection_statement
	: IF '(' expression ')' statement ELSE statement
	{
	    $$ = createTree("selection_statement", 5, $1, $3, $5, $6, $7);
	}
	| IF '(' expression ')' statement
	{
	    $$ = createTree("selection_statement", 3, $1, $3, $5);
	}
	| SWITCH '(' expression ')' statement
	{
	    $$ = createTree("selection_statement", 3, $1, $3, $5);
	}
	;

iteration_statement
	: WHILE '(' expression ')' statement
	{
	    $$ = createTree("iteration_statement", 3, $1, $3, $5);
	}
	| DO statement WHILE '(' expression ')' ';'
	{
	    $$ = createTree("iteration_statement", 4, $1, $2, $3, $5);
	}
	| FOR '(' expression_statement expression_statement ')' statement
	{
	    $$ = createTree("iteration_statement", 4, $1, $3, $4, $6);
	}
	| FOR '(' expression_statement expression_statement expression ')' statement
	{
	    $$ = createTree("iteration_statement", 5, $1, $3, $4, $5, $7);
	}
	| FOR '(' declaration expression_statement ')' statement
	{
	    $$ = createTree("iteration_statement", 5, $1, $3, $4, $6);
	}
	| FOR '(' declaration expression_statement expression ')' statement
	{
	    $$ = createTree("iteration_statement", 5, $1, $3, $4, $5, $7);
	}
	;

jump_statement
	: GOTO IDENTIFIER ';'
	{
	    $$ = createTree("jump_statement", 2, $1, $2);
	}
	| CONTINUE ';'
	{
	    $$ = createTree("jump_statement", 1, $1);
	}
	| BREAK ';'
	{
	    $$ = createTree("jump_statement", 1, $1);
	}
	| RETURN ';'
	{
	    $$ = createTree("jump_statement", 1, $1);
	}
	| RETURN expression ';'
	{
	    $$ = createTree("jump_statement", 2, $1, $2);
	}
	;

translation_unit
	: external_declaration
	{
	    $$ = createTree("translation_unit", 1, $1);
	}
	| translation_unit external_declaration
	{
	    $1->sibling.push_back($2);
	    $$ = $1;
	}
	;

external_declaration
	: function_definition
	{
	    $$ = createTree("external_declaration", 1, $1);
	}
	| declaration
	{
	    $$ = createTree("external_declaration", 1, $1);
	}
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement
	{
	    /* "declaration_list" is optional
	     * int max(a, b) int a, b; {...} is legal. (wtf...)
	     * don't have to convert the argument of the function call
	     *
	     * example:
	     *      int max(a, b) int a, b; {...}
	     *      ...
	     *      int *a, *b;
	     *      max(a, b);
	     * is OK
	     * not support
	     */
	    $$ = createTree("function_definition", 4, $1, $2, $3, $4);
	}
	| declaration_specifiers declarator compound_statement
	{
	    /* int max(a, b) {...}
	     * forces convertion of argument of function call
	     * example:
	     *      int max(int a, int b) {...}
	     *      ...
	     *      int *a, *b;
	     *      max(a, b);
	     * will have a warning
	     */
	    $$ = createTree("function_definition", 3, $1, $2, $3);
	}
	;

declaration_list
	: declaration
	{
	    $$ = createTree("declaration_list", 1, $1);
	}
	| declaration_list declaration
	{
	    $1->sibling.push_back($2);
	    $$ = $1;
	}
	;

%%