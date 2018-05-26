/*
(This Lex file is accompanied by a matching Yacc file.)
In 1985, Jeff Lee published his Yacc grammar based on a draft version of the ANSI C standard, along with a supporting Lex specification. Tom Stockfisch reposted those files to net.sources in 1987; as mentioned in the answer to question 17.25 of the comp.lang.c FAQ, they used to be available from ftp.uu.net as usenet/net.sources/ansi.c.grammar.Z.

The version you see here has been updated based on the 2011 ISO C standard. (The previous version's Lex and Yacc files for ANSI C9X still exist as archived copies.)

It is assumed that translation phases 1..5 have already been completed, including preprocessing and _Pragma processing. The Lex rule for string literals will perform concatenation (translation phase 6). Transliteration of universal character names (\uHHHH or \UHHHHHHHH) must have been done by either the preprocessor or a replacement for the input() macro used by Lex (or the YY_INPUT function used by Flex) to read characters. Although comments should have been changed to space characters during translation phase 3, there are Lex rules for them anyway.

I want to keep this version as close to the current C Standard grammar as possible; please let me know if you discover discrepancies.
(There is an FAQ for this grammar that you might want to read first.)

jutta@pobox.com, 2012

Last edit: 2012-12-19 DAGwyn@aol.com

Note: The following %-parameters are the minimum sizes needed for real Lex.
%e	number of parsed tree nodes
%p	number of positions
%n	number of states
%k	number of packed character classes
%a	number of transitions
%o	size of output array
*/


%{
#include "../AST/AbstractSyntaxTree.h"
#include <cstdio>
#include <iostream>
#include "y.tab.h"

extern void yyerror(const char *);  /* prints grammar violation message */

//extern int sym_type(const char *);  /* returns type from symbol table */

#define sym_type(identifier) IDENTIFIER /* with no symbol table, fake it */

static void comment(void);
static int check_type(void);
static void count(void);

int column = 0;
%}
%option yylineno
%e  1019
%p  2807
%n  371
%k  284
%a  1213
%o  1117

O   [0-7]
D   [0-9]
NZ  [1-9]
L   [a-zA-Z_]
A   [a-zA-Z_0-9]
H   [a-fA-F0-9]
HP  (0[xX])
E   ([Ee][+-]?{D}+)
P   ([Pp][+-]?{D}+)
FS  (f|F|l|L)
IS  (((u|U)(l|L|ll|LL)?)|((l|L|ll|LL)(u|U)?))
CP  (u|U|L)
SP  (u8|u|U|L)
ES  (\\(['"\?\\abfnrtv]|[0-7]{1,3}|x[a-fA-F0-9]+))
WS  [ \t\v\n\f]
%%
"/*"                                    { comment(); }
"//".*                                    { /* consume //-comment */ }

"auto"					{ count(); yylval.ast = createTree("AUTO", 0, yylineno); return(AUTO); }
"break"					{ count(); yylval.ast = createTree("BREAK", 0, yylineno); return(BREAK); }
"case"					{ count(); yylval.ast = createTree("CASE", 0, yylineno); return(CASE); }
"char"					{ count(); yylval.ast = createTree("CHAR", 0, yylineno); return(CHAR); }
"const"					{ count(); yylval.ast = createTree("CONST", 0, yylineno); return(CONST); }
"continue"				{ count(); yylval.ast = createTree("CONTINUE", 0, yylineno); return(CONTINUE); }
"default"				{ count(); yylval.ast = createTree("DEFAULT", 0, yylineno); return(DEFAULT); }
"do"					{ count(); yylval.ast = createTree("DO", 0, yylineno); return(DO); }
"double"				{ count(); yylval.ast = createTree("DOUBLE", 0, yylineno); return(DOUBLE); }
"else"					{ count(); yylval.ast = createTree("ELSE", 0, yylineno); return(ELSE); }
"enum"					{ count(); yylval.ast = createTree("ENUM", 0, yylineno); return(ENUM); }
"extern"				{ count(); yylval.ast = createTree("EXTERN", 0, yylineno); return(EXTERN); }
"float"					{ count(); yylval.ast = createTree("FLOAT", 0, yylineno); return(FLOAT); }
"for"					{ count(); yylval.ast = createTree("FOR", 0, yylineno); return(FOR); }
"goto"					{ count(); yylval.ast = createTree("GOTO", 0, yylineno); return(GOTO); }
"if"					{ count(); yylval.ast = createTree("IF", 0, yylineno); return(IF); }
"inline"				{ count(); yylval.ast = createTree("INLINE", 0, yylineno); return(INLINE); }
"int"					{ count(); yylval.ast = createTree("INT", 0, yylineno); return(INT); }
"long"					{ count(); yylval.ast = createTree("LONG", 0, yylineno); return(LONG); }
"register"				{ count(); yylval.ast = createTree("REGISTER", 0, yylineno); return(REGISTER); }
"restrict"				{ count(); yylval.ast = createTree("RESTRICT", 0, yylineno); return(RESTRICT); }
"return"				{ count(); yylval.ast = createTree("RETURN", 0, yylineno); return(RETURN); }
"short"					{ count(); yylval.ast = createTree("SHORT", 0, yylineno); return(SHORT); }
"signed"				{ count(); yylval.ast = createTree("SIGNED", 0, yylineno); return(SIGNED); }
"sizeof"				{ count(); yylval.ast = createTree("SIZEOF", 0, yylineno); return(SIZEOF); }
"static"				{ count(); yylval.ast = createTree("STATIC", 0, yylineno); return(STATIC); }
"struct"				{ count(); yylval.ast = createTree("STRUCT", 0, yylineno); return(STRUCT); }
"switch"				{ count(); yylval.ast = createTree("SWITCH", 0, yylineno); return(SWITCH); }
"typedef"				{ count(); yylval.ast = createTree("TYPEDEF", 0, yylineno); return(TYPEDEF); }
"union"					{ count(); yylval.ast = createTree("UNION", 0, yylineno); return(UNION); }
"unsigned"				{ count(); yylval.ast = createTree("UNSIGNED", 0, yylineno); return(UNSIGNED); }
"void"					{ count(); yylval.ast = createTree("VOID", 0, yylineno); return(VOID); }
"volatile"				{ count(); yylval.ast = createTree("VOLATILE", 0, yylineno); return(VOLATILE); }
"while"					{ count(); yylval.ast = createTree("WHILE", 0, yylineno); return(WHILE); }


{L}{A}*					{ count(); yylval.ast = createTree("IDENTIFIER", 0, yylineno); return check_type(); }

{HP}{H}+{IS}?				{ count(); yylval.ast = createTree("I_CONSTANT", 0, yylineno); return I_CONSTANT; }
{NZ}{D}*{IS}?				{ count(); yylval.ast = createTree("I_CONSTANT", 0, yylineno); return I_CONSTANT; }
"0"{O}*{IS}?				{ count(); yylval.ast = createTree("I_CONSTANT", 0, yylineno); return I_CONSTANT; }
{CP}?"'"([^'\\\n]|{ES})+"'"		{ count(); yylval.ast = createTree("C_CONSTANT", 0, yylineno); return C_CONSTANT; }

{D}+{E}{FS}?				{ count(); yylval.ast = createTree("F_CONSTANT", 0, yylineno); return F_CONSTANT; }
{D}*"."{D}+{E}?{FS}?			{ count(); yylval.ast = createTree("F_CONSTANT", 0, yylineno); return F_CONSTANT; }
{D}+"."{E}?{FS}?			{ count(); yylval.ast = createTree("F_CONSTANT", 0, yylineno); return F_CONSTANT; }
{HP}{H}+{P}{FS}?			{ count(); yylval.ast = createTree("F_CONSTANT", 0, yylineno); return F_CONSTANT; }
{HP}{H}*"."{H}+{P}{FS}?			{ count(); yylval.ast = createTree("F_CONSTANT", 0, yylineno); return F_CONSTANT; }
{HP}{H}+"."{P}{FS}?			{ count(); yylval.ast = createTree("F_CONSTANT", 0, yylineno); return F_CONSTANT; }

({SP}?\"([^"\\\n]|{ES})*\"{WS}*)+	{ count(); yylval.ast = createTree("STRING_LITERAL", 0, yylineno); return STRING_LITERAL; }

"..."					{ return ELLIPSIS; }
">>="					{ count(); yylval.ast = createTree("RIGHT_ASSIGN", 0, yylineno); return RIGHT_ASSIGN; }
"<<="					{ count(); yylval.ast = createTree("LEFT_ASSIGN", 0, yylineno); return LEFT_ASSIGN; }
"+="					{ count(); yylval.ast = createTree("ADD_ASSIGN", 0, yylineno); return ADD_ASSIGN; }
"-="					{ count(); yylval.ast = createTree("SUB_ASSIGN", 0, yylineno); return SUB_ASSIGN; }
"*="					{ count(); yylval.ast = createTree("MUL_ASSIGN", 0, yylineno); return MUL_ASSIGN; }
"/="					{ count(); yylval.ast = createTree("DIV_ASSIGN", 0, yylineno); return DIV_ASSIGN; }
"%="					{ count(); yylval.ast = createTree("MOD_ASSIGN", 0, yylineno); return MOD_ASSIGN; }
"&="					{ count(); yylval.ast = createTree("AND_ASSIGN", 0, yylineno); return AND_ASSIGN; }
"^="					{ count(); yylval.ast = createTree("XOR_ASSIGN", 0, yylineno); return XOR_ASSIGN; }
"|="					{ count(); yylval.ast = createTree("OR_ASSIGN", 0, yylineno); return OR_ASSIGN; }
">>"					{ count(); yylval.ast = createTree("RIGHT_OP", 0, yylineno); return RIGHT_OP; }
"<<"					{ count(); yylval.ast = createTree("LEFT_OP", 0, yylineno); return LEFT_OP; }
"++"					{ count(); yylval.ast = createTree("INC_OP", 0, yylineno); return INC_OP; }
"--"					{ count(); yylval.ast = createTree("DEC_OP", 0, yylineno); return DEC_OP; }
"->"					{ count(); yylval.ast = createTree("PTR_OP", 0, yylineno); return PTR_OP; }
"&&"					{ count(); yylval.ast = createTree("AND_OP", 0, yylineno); return AND_OP; }
"||"					{ count(); yylval.ast = createTree("OR_OP", 0, yylineno); return OR_OP; }
"<="					{ count(); yylval.ast = createTree("LE_OP", 0, yylineno); return LE_OP; }
">="					{ count(); yylval.ast = createTree("GE_OP", 0, yylineno); return GE_OP; }
"=="					{ count(); yylval.ast = createTree("EQ_OP", 0, yylineno); return EQ_OP; }
"!="					{ count(); yylval.ast = createTree("NE_OP", 0, yylineno); return NE_OP; }
";"					{ count(); yylval.ast = createTree(";", 0, yylineno); return ';'; }
("{"|"<%")				{ count(); yylval.ast = createTree("{", 0, yylineno); return '{'; }
("}"|"%>")				{ count(); yylval.ast = createTree("}", 0, yylineno); return '}'; }
","					{ count(); yylval.ast = createTree(",", 0, yylineno); return ','; }
":"					{ count(); yylval.ast = createTree(":", 0, yylineno); return ':'; }
"="					{ count(); yylval.ast = createTree("=", 0, yylineno); return '='; }
"("					{ count(); yylval.ast = createTree("(", 0, yylineno); return '('; }
")"					{ count(); yylval.ast = createTree(")", 0, yylineno); return ')'; }
("["|"<:")				{ count(); yylval.ast = createTree("[", 0, yylineno); return '['; }
("]"|":>")				{ count(); yylval.ast = createTree("]", 0, yylineno); return ']'; }
"."					{ count(); yylval.ast = createTree(".", 0, yylineno); return '.'; }
"&"					{ count(); yylval.ast = createTree("&", 0, yylineno); return '&'; }
"!"					{ count(); yylval.ast = createTree("!", 0, yylineno); return '!'; }
"~"					{ count(); yylval.ast = createTree("~", 0, yylineno); return '~'; }
"-"					{ count(); yylval.ast = createTree("-", 0, yylineno); return '-'; }
"+"					{ count(); yylval.ast = createTree("+", 0, yylineno); return '+'; }
"*"					{ count(); yylval.ast = createTree("*", 0, yylineno); return '*'; }
"/"					{ count(); yylval.ast = createTree("/", 0, yylineno); return '/'; }
"%"					{ count(); yylval.ast = createTree("%", 0, yylineno); return '%'; }
"<"					{ count(); yylval.ast = createTree("<", 0, yylineno); return '<'; }
">"					{ count(); yylval.ast = createTree(">", 0, yylineno); return '>'; }
"^"					{ count(); yylval.ast = createTree("^", 0, yylineno); return '^'; }
"|"					{ count(); yylval.ast = createTree("|", 0, yylineno); return '|'; }
"?"					{ count(); yylval.ast = createTree("?", 0, yylineno); return '?'; }

{WS}+					{ /* whitespace separates tokens */ }
.					{ /* discard bad characters */ }

%%

int yywrap(void)        /* called at end of input */
{
    return 1;           /* terminate now */
}

static void comment() {
	column = 0;
	char c, prev = 0;

	while (std::cin >> c)      /* (EOF maps to 0) */
	{
		if (c == '/' && prev == '*')
			return;
		prev = c;
	}
	printf("unterminated comment");
}

void count(void)
{
	int i;

	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n')
			column = 0;
		else if (yytext[i] == '\t')
			column += 4 - (column % 4);
		else
			column++;
	ECHO;
}
static int check_type(void)
{
    switch (sym_type(yytext))
    {
    case TYPEDEF_NAME:                /* previously defined */
        return TYPEDEF_NAME;
    case ENUMERATION_CONSTANT:        /* previously defined */
        return ENUMERATION_CONSTANT;
    default:                          /* includes undefined */
        return IDENTIFIER;
    }
}