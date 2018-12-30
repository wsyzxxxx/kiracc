/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 24 "YaccGrammar.y" /* yacc.c:339  */

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

#line 94 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    STRING_LITERAL = 259,
    SIZEOF = 260,
    I_CONSTANT = 261,
    F_CONSTANT = 262,
    C_CONSTANT = 263,
    PTR_OP = 264,
    INC_OP = 265,
    DEC_OP = 266,
    LEFT_OP = 267,
    RIGHT_OP = 268,
    LE_OP = 269,
    GE_OP = 270,
    EQ_OP = 271,
    NE_OP = 272,
    AND_OP = 273,
    OR_OP = 274,
    MUL_ASSIGN = 275,
    DIV_ASSIGN = 276,
    MOD_ASSIGN = 277,
    ADD_ASSIGN = 278,
    SUB_ASSIGN = 279,
    LEFT_ASSIGN = 280,
    RIGHT_ASSIGN = 281,
    AND_ASSIGN = 282,
    XOR_ASSIGN = 283,
    OR_ASSIGN = 284,
    TYPEDEF_NAME = 285,
    ENUMERATION_CONSTANT = 286,
    TYPEDEF = 287,
    EXTERN = 288,
    STATIC = 289,
    AUTO = 290,
    REGISTER = 291,
    INLINE = 292,
    CONST = 293,
    RESTRICT = 294,
    VOLATILE = 295,
    CHAR = 296,
    SHORT = 297,
    INT = 298,
    LONG = 299,
    SIGNED = 300,
    UNSIGNED = 301,
    FLOAT = 302,
    DOUBLE = 303,
    VOID = 304,
    STRUCT = 305,
    UNION = 306,
    ENUM = 307,
    ELLIPSIS = 308,
    CASE = 309,
    DEFAULT = 310,
    IF = 311,
    ELSE = 312,
    SWITCH = 313,
    WHILE = 314,
    DO = 315,
    FOR = 316,
    GOTO = 317,
    CONTINUE = 318,
    BREAK = 319,
    RETURN = 320
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define STRING_LITERAL 259
#define SIZEOF 260
#define I_CONSTANT 261
#define F_CONSTANT 262
#define C_CONSTANT 263
#define PTR_OP 264
#define INC_OP 265
#define DEC_OP 266
#define LEFT_OP 267
#define RIGHT_OP 268
#define LE_OP 269
#define GE_OP 270
#define EQ_OP 271
#define NE_OP 272
#define AND_OP 273
#define OR_OP 274
#define MUL_ASSIGN 275
#define DIV_ASSIGN 276
#define MOD_ASSIGN 277
#define ADD_ASSIGN 278
#define SUB_ASSIGN 279
#define LEFT_ASSIGN 280
#define RIGHT_ASSIGN 281
#define AND_ASSIGN 282
#define XOR_ASSIGN 283
#define OR_ASSIGN 284
#define TYPEDEF_NAME 285
#define ENUMERATION_CONSTANT 286
#define TYPEDEF 287
#define EXTERN 288
#define STATIC 289
#define AUTO 290
#define REGISTER 291
#define INLINE 292
#define CONST 293
#define RESTRICT 294
#define VOLATILE 295
#define CHAR 296
#define SHORT 297
#define INT 298
#define LONG 299
#define SIGNED 300
#define UNSIGNED 301
#define FLOAT 302
#define DOUBLE 303
#define VOID 304
#define STRUCT 305
#define UNION 306
#define ENUM 307
#define ELLIPSIS 308
#define CASE 309
#define DEFAULT 310
#define IF 311
#define ELSE 312
#define SWITCH 313
#define WHILE 314
#define DO 315
#define FOR 316
#define GOTO 317
#define CONTINUE 318
#define BREAK 319
#define RETURN 320

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 52 "YaccGrammar.y" /* yacc.c:355  */

    AbstractSyntaxTree ast;

#line 268 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 285 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  38
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1630

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  73
/* YYNRULES -- Number of rules.  */
#define YYNRULES  249
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  418

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   320

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    62,     2,     2,     2,    68,    61,     2,
      76,    77,    66,    65,    55,    64,    60,    67,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    56,    54,
      69,    57,    70,    73,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    58,     2,    59,    71,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    74,    72,    75,    63,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    78,    78,    84,    88,    92,    96,   103,   107,   111,
     115,   122,   129,   136,   140,   145,   150,   165,   170,   187,
     191,   199,   203,   207,   211,   226,   230,   234,   238,   242,
     246,   253,   257,   264,   268,   272,   276,   283,   287,   291,
     298,   302,   306,   313,   317,   321,   325,   329,   336,   340,
     344,   351,   355,   362,   366,   373,   377,   384,   388,   395,
     399,   406,   410,   417,   421,   428,   432,   436,   440,   444,
     448,   452,   456,   460,   464,   468,   475,   479,   487,   494,
     498,   505,   509,   513,   517,   521,   525,   529,   533,   540,
     544,   552,   556,   563,   568,   572,   576,   580,   587,   591,
     595,   599,   603,   607,   611,   615,   619,   623,   627,   631,
     639,   643,   647,   654,   658,   665,   669,   677,   682,   689,
     693,   697,   701,   708,   712,   719,   723,   727,   734,   738,
     742,   746,   750,   757,   761,   769,   774,   781,   785,   789,
     796,   803,   807,   814,   818,   822,   826,   830,   834,   838,
     842,   846,   850,   854,   858,   862,   866,   873,   877,   881,
     885,   892,   896,   905,   909,   916,   920,   928,   932,   936,
     943,   947,   955,   959,   966,   970,   974,   981,   985,   989,
     993,   997,  1001,  1005,  1009,  1013,  1017,  1021,  1025,  1029,
    1033,  1037,  1041,  1045,  1049,  1053,  1057,  1061,  1068,  1072,
    1076,  1083,  1087,  1091,  1095,  1102,  1109,  1113,  1120,  1124,
    1131,  1135,  1139,  1143,  1147,  1151,  1155,  1162,  1166,  1170,
    1177,  1181,  1188,  1192,  1200,  1204,  1211,  1215,  1222,  1226,
    1230,  1237,  1241,  1245,  1249,  1253,  1257,  1264,  1268,  1272,
    1276,  1280,  1287,  1291,  1299,  1303,  1310,  1326,  1342,  1346
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "STRING_LITERAL", "SIZEOF",
  "I_CONSTANT", "F_CONSTANT", "C_CONSTANT", "PTR_OP", "INC_OP", "DEC_OP",
  "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP",
  "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN",
  "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN",
  "OR_ASSIGN", "TYPEDEF_NAME", "ENUMERATION_CONSTANT", "TYPEDEF", "EXTERN",
  "STATIC", "AUTO", "REGISTER", "INLINE", "CONST", "RESTRICT", "VOLATILE",
  "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE",
  "VOID", "STRUCT", "UNION", "ENUM", "ELLIPSIS", "';'", "','", "':'",
  "'='", "'['", "']'", "'.'", "'&'", "'!'", "'~'", "'-'", "'+'", "'*'",
  "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "'{'", "'}'", "'('",
  "')'", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR",
  "GOTO", "CONTINUE", "BREAK", "RETURN", "$accept", "program",
  "primary_expression", "constant", "enumeration_constant", "string",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "function_specifier", "declarator",
  "direct_declarator", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "designation", "designator_list", "designator", "statement",
  "labeled_statement", "compound_statement", "block_item_list",
  "block_item", "expression_statement", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,    59,    44,    58,    61,    91,    93,
      46,    38,    33,   126,    45,    43,    42,    47,    37,    60,
      62,    94,   124,    63,   123,   125,    40,    41,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320
};
# endif

#define YYPACT_NINF -225

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-225)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1578,  -225,  -225,  -225,  -225,  -225,  -225,  -225,  -225,  -225,
    -225,  -225,  -225,  -225,  -225,  -225,  -225,  -225,  -225,  -225,
    -225,  -225,    37,    58,  -225,    46,  1578,  1578,  -225,    51,
    -225,  1578,  1578,  1578,  -225,  -225,    -2,    74,  -225,  -225,
    -225,   142,    47,    92,  -225,  1468,   121,    44,  -225,  -225,
      70,   760,  -225,  -225,  -225,    74,  -225,    94,    12,  -225,
    -225,  -225,   142,    27,  -225,    47,  1230,   350,  -225,    46,
    -225,  1511,   913,   642,   121,   760,   760,   126,  -225,    14,
     760,    84,  1336,    17,  -225,  -225,  -225,  -225,  -225,    96,
    -225,  -225,  -225,  -225,  -225,  1352,  1352,  -225,  -225,  -225,
    -225,  -225,  -225,  -225,  1153,   849,  -225,  -225,  -225,    13,
     435,  1352,  -225,   164,    -4,   240,    68,   243,    71,    78,
     131,   137,     6,  -225,  -225,  -225,  -225,   155,  -225,  -225,
    1336,   163,   146,   179,   204,   528,   211,   291,   247,   252,
    1256,  -225,   209,  -225,  -225,  -225,  -225,   439,  -225,  -225,
    -225,  -225,  -225,  -225,  -225,  1192,  -225,   256,   258,   929,
    -225,  -225,    15,   241,   264,  -225,    81,   503,  -225,  -225,
    -225,  -225,  1336,   230,  -225,   266,  -225,    53,  -225,  -225,
    -225,  -225,  -225,  -225,  1336,  -225,  -225,  1336,   317,  -225,
     130,  1230,    83,  -225,   132,   213,   246,  -225,  -225,  1336,
     692,  -225,  -225,  -225,  -225,  -225,  -225,  -225,  -225,  -225,
    -225,  -225,  1336,  -225,  1336,  1336,  1336,  1336,  1336,  1336,
    1336,  1336,  1336,  1336,  1336,  1336,  1336,  1336,  1336,  1336,
    1336,  1336,  1336,   528,   268,   528,  1336,  1336,  1336,   244,
     785,   271,  -225,  -225,  -225,   242,  -225,  1336,  -225,  -225,
     269,  1192,  -225,  -225,  1336,  -225,   272,   273,   993,   592,
    -225,    59,  -225,   128,  -225,  1554,   327,  -225,  -225,  -225,
    -225,    30,  1336,  -225,   275,  -225,  1111,  -225,  -225,  -225,
    -225,  -225,  1397,   157,  -225,  1336,    75,  -225,   135,  -225,
    -225,  -225,  -225,  -225,   164,   164,    -4,    -4,   240,   240,
     240,   240,    68,    68,   243,    71,    78,   131,   137,   212,
    -225,   528,  -225,   136,   139,   143,   260,  1272,  1272,  -225,
    -225,  -225,  -225,   278,   280,  -225,  -225,  1192,  -225,   281,
     282,  1009,  -225,   265,   267,   128,  1073,  1445,  -225,  -225,
    -225,  -225,  -225,  -225,  -225,  -225,  1230,  -225,  -225,  1336,
    -225,  1336,  -225,   528,   528,   528,  1336,   701,   710,  -225,
    -225,   284,  1192,  -225,  -225,  1336,  -225,   286,  -225,  -225,
    1192,  -225,   287,   288,  1089,  -225,   285,  -225,  -225,  -225,
     274,  -225,  -225,   144,   528,   147,   528,   151,  -225,   300,
     304,  -225,   305,  1192,  -225,  -225,  1336,  -225,   306,  -225,
     528,   296,  -225,   528,  -225,   528,  -225,  -225,  -225,   307,
     308,  -225,  -225,  -225,  -225,  -225,  -225,  -225
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   109,    93,    94,    95,    96,    97,   140,   137,   138,
     139,    99,   100,   101,   102,   105,   106,   103,   104,    98,
     113,   114,     0,     0,   245,     0,    82,    84,   107,     0,
     108,    86,    88,     2,   242,   244,   132,     0,     1,   143,
      79,   160,     0,     0,    89,    92,   142,     0,    81,    83,
     112,     0,    85,    87,   243,     0,    11,   136,     0,   133,
     161,   159,   158,     0,    80,     0,     0,     0,   248,     0,
     247,     0,     0,     0,   141,     0,   120,     0,   115,     0,
     122,     0,     0,     0,   128,   162,   157,   144,    90,    92,
       3,    12,     7,     8,     9,     0,     0,    10,    25,    30,
      29,    28,    27,    26,     0,     0,    13,     4,     5,    21,
      31,     0,    33,    37,    40,    43,    48,    51,    53,    55,
      57,    59,    61,    63,   200,    91,   216,     3,   226,   220,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,   224,   225,   210,   211,     0,   222,   212,
     213,   214,   215,   249,   246,     0,   145,    26,     0,     0,
     170,   155,   169,     0,   164,   165,     0,     0,   119,   110,
     116,   117,     0,     0,   123,   127,   121,     0,   130,    31,
      78,   135,   129,   134,     0,    22,    23,     0,     0,   202,
       0,     0,     0,   206,     0,   173,     0,    17,    18,     0,
       0,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    65,     0,    24,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   238,   239,   240,     0,   227,     0,   221,   223,
       0,     0,   146,   153,     0,   152,    26,     0,     0,     0,
     167,   175,   168,   176,   154,     0,     0,   156,   111,   125,
     118,     0,     0,   131,     0,   209,     0,   198,   201,   205,
     207,     6,     0,   175,   172,     0,     0,    15,     0,    19,
      64,    34,    35,    36,    39,    38,    41,    42,    46,    47,
      44,    45,    49,    50,    52,    54,    56,    58,    60,     0,
     217,     0,   219,     0,     0,     0,     0,     0,     0,   237,
     241,    77,   148,     0,     0,   149,   151,     0,   178,    26,
       0,     0,   194,     0,     0,   174,     0,     0,   163,   166,
     171,   124,   126,   208,   199,   204,     0,    32,    14,     0,
      16,     0,   218,     0,     0,     0,     0,     0,     0,   147,
     150,     0,     0,   179,   185,     0,   184,     0,   195,   177,
       0,   186,    26,     0,     0,   196,     0,   203,    20,    62,
     229,   230,   231,     0,     0,     0,     0,     0,   181,     0,
       0,   183,     0,     0,   187,   193,     0,   192,     0,   197,
       0,     0,   235,     0,   233,     0,   180,   182,   189,     0,
       0,   190,   228,   232,   236,   234,   188,   191
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -225,  -225,  -225,  -225,  -225,  -225,  -225,  -225,    20,  -225,
    -140,    85,    79,    87,    88,   141,   145,   140,   148,   172,
    -225,   -77,   -58,  -225,   -75,  -124,   -26,    11,  -225,   309,
    -225,   -48,  -225,  -225,   295,   -64,   -54,  -225,   101,  -225,
     320,   -79,   -41,  -225,   -10,   -38,    67,   -70,   -72,  -225,
     111,  -225,  -225,   -35,  -195,   -92,  -225,   103,  -225,   185,
    -128,  -225,     7,  -225,   259,  -224,  -225,  -225,  -225,  -225,
     372,  -225,  -225
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    23,   106,   107,    57,   108,   109,   288,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   141,   212,   142,   181,    24,    69,    43,    44,
      26,    27,    28,    29,    77,    78,    79,   173,   174,    30,
      58,    59,    31,    32,    63,    46,    47,    62,   333,   164,
     165,   166,   196,   334,   263,   125,   190,   191,   192,   193,
     144,   145,   146,   147,   148,   149,   150,   151,   152,    33,
      34,    35,    71
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      60,   163,   159,    76,   183,   180,   234,   239,   124,    74,
      80,    25,   189,   170,   158,    45,   318,    39,    39,    68,
      56,    85,   168,   197,   198,   231,   176,    76,    76,    76,
     194,    60,    76,    39,    80,    80,    80,    48,    49,    80,
      36,   143,    52,    53,    25,   153,   124,    39,   269,    39,
      39,   195,    70,   180,    50,    89,    56,    76,    38,    89,
     217,   218,    39,   274,    80,   245,   335,    83,   171,   175,
     172,   199,    55,   258,   291,   292,   293,    56,   154,   232,
      41,    41,   221,   222,   162,   251,   172,    84,   335,   200,
      42,   259,   182,   357,   358,   180,    41,   250,   183,   278,
      40,   257,   179,   170,    87,   310,    42,   312,    61,   194,
     180,    37,    41,    41,    60,   185,   186,   258,    85,    76,
      42,   143,    42,    42,   286,    51,    80,   262,   273,    86,
     247,   213,   227,   124,   348,   259,   266,   223,   224,   177,
     279,   187,   289,   188,    75,   347,    64,    65,   342,   228,
     179,    82,   260,    66,   290,   230,     1,   309,   267,   178,
     284,   313,   314,   315,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    72,
       8,     9,    10,   352,   345,   276,   336,   247,   331,   321,
     349,   247,   179,   323,   247,   180,   324,    73,   247,   247,
     330,   169,   247,   229,   337,   277,   247,   179,    41,   281,
      85,   233,   350,   353,   317,   258,   354,    60,   124,   235,
     355,   401,   236,    74,   403,   380,   381,   382,   405,   261,
     214,   215,   216,   282,   179,   179,   179,   179,   179,   179,
     179,   179,   179,   179,   179,   179,   179,   179,   179,   179,
     179,   179,   219,   220,   377,   237,   402,   362,   404,   225,
     226,   175,   283,   246,   247,   376,   374,   247,   351,   361,
     162,   258,   412,   367,   379,   414,   162,   415,   373,    41,
     238,   383,   385,   387,   270,   271,    60,   240,   124,   282,
      85,   378,   179,   162,   241,    60,   320,   247,   296,   297,
     393,   242,   294,   295,   389,   179,   243,   390,   298,   299,
     300,   301,   392,   302,   303,   252,   398,   253,   264,   265,
     275,    85,   272,   285,   311,   319,   261,   316,   322,    60,
     340,   325,   326,    85,   343,   409,   356,   359,   410,   360,
     363,   364,   368,   388,   369,   391,   394,   395,   162,   283,
     413,   126,    85,   127,    91,   400,    92,    93,    94,   406,
      95,    96,   399,   407,   408,   411,   416,   417,   304,   306,
     167,   179,   341,   305,    88,    81,   339,   280,   307,   346,
       1,    97,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,   308,   128,    54,   249,     0,     0,     0,
       0,    98,    99,   100,   101,   102,   103,     0,     0,     0,
       0,     0,     0,     0,    67,   129,   105,     0,   130,   131,
     132,     0,   133,   134,   135,   136,   137,   138,   139,   140,
     126,     0,   127,    91,     0,    92,    93,    94,     0,    95,
      96,     0,     0,     0,     0,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,     0,     0,     0,     0,     1,
      97,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,   211,   128,     0,     0,     0,     0,     0,     0,
      98,    99,   100,   101,   102,   103,     0,     0,     0,     0,
       0,     0,     0,    67,   248,   105,     0,   130,   131,   132,
       0,   133,   134,   135,   136,   137,   138,   139,   140,   126,
       0,   127,    91,     1,    92,    93,    94,     0,    95,    96,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,     0,     0,     0,    97,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   268,     0,
       0,     0,   128,     0,     0,     0,     0,     0,     0,    98,
      99,   100,   101,   102,   103,    39,     0,     0,     0,     0,
       0,     0,    67,     0,   105,     0,   130,   131,   132,     0,
     133,   134,   135,   136,   137,   138,   139,   140,     0,     0,
       0,     0,     1,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,   160,     0,     0,     0,     0,
     258,     0,     0,     0,     0,     0,     0,     0,    41,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   259,   332,
       0,     0,     1,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    90,    91,     0,    92,    93,
      94,     0,    95,    96,    90,    91,     0,    92,    93,    94,
       0,    95,    96,    90,    91,     0,    92,    93,    94,   161,
      95,    96,     0,    97,     0,     0,     0,     0,     0,     0,
       0,     0,    97,     0,     0,     0,     0,     0,     0,     0,
       0,    97,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    98,    99,   100,   101,   102,   103,     0,
       0,     0,    98,    99,   100,   101,   102,   103,   105,   287,
       0,    98,    99,   100,   101,   102,   103,   105,   384,     0,
       0,     0,     0,     0,     0,     0,   105,   386,    90,    91,
       1,    92,    93,    94,     0,    95,    96,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,     0,     0,     1,    97,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,     0,   128,
       0,     0,     0,     0,     0,     0,    98,    99,   100,   101,
     102,   103,    90,    91,     0,    92,    93,    94,     0,    95,
      96,   105,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
      97,     0,     0,     0,     0,     0,     0,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,     0,     0,     0,     0,     0,     0,     0,     0,
      98,    99,   100,   101,   102,   103,    90,    91,     0,    92,
      93,    94,     0,    95,    96,   105,     0,     0,     0,     0,
       0,     0,    90,    91,     0,    92,    93,    94,     0,    95,
      96,     0,     0,     0,    97,     0,     0,   155,     0,     0,
       0,     8,     9,    10,     0,     0,     0,     0,     0,     0,
      97,     0,     0,   254,     0,     0,     0,     8,     9,    10,
       0,     0,   156,     0,    98,    99,   100,   101,   102,   157,
       0,     0,     0,     0,     0,     0,     0,     0,   255,   105,
      98,    99,   100,   101,   102,   256,    90,    91,     0,    92,
      93,    94,     0,    95,    96,   105,     0,     0,     0,     0,
       0,     0,    90,    91,     0,    92,    93,    94,     0,    95,
      96,     0,     0,     0,    97,     0,     0,   327,     0,     0,
       0,     8,     9,    10,     0,     0,     0,     0,     0,     0,
      97,     0,     0,   365,     0,     0,     0,     8,     9,    10,
       0,     0,   328,     0,    98,    99,   100,   101,   102,   329,
       0,     0,     0,     0,     0,     0,     0,     0,   366,   105,
      98,    99,   100,   101,   102,   103,    90,    91,     0,    92,
      93,    94,     0,    95,    96,   105,     0,     0,     0,     0,
       0,     0,    90,    91,     0,    92,    93,    94,     0,    95,
      96,     0,     0,     0,    97,     0,     0,   370,     0,     0,
       0,     8,     9,    10,    90,    91,     0,    92,    93,    94,
      97,    95,    96,   396,     0,     0,     0,     8,     9,    10,
       0,     0,   371,     0,    98,    99,   100,   101,   102,   372,
       0,     0,    97,     0,     0,     0,     0,     0,   397,   105,
      98,    99,   100,   101,   102,   103,    90,    91,     0,    92,
      93,    94,     0,    95,    96,   105,     0,     0,     0,   187,
       0,   188,    98,    99,   100,   101,   102,   103,     0,     0,
       0,     0,     0,     0,    97,   104,   344,   105,     0,     0,
       0,     0,     0,     0,     0,    90,    91,     0,    92,    93,
      94,     0,    95,    96,     0,     0,     0,     0,     0,     0,
       0,   187,     0,   188,    98,    99,   100,   101,   102,   103,
       0,     0,     0,    97,     0,     0,     0,   104,     0,   105,
       8,     9,    10,    90,    91,     0,    92,    93,    94,     0,
      95,    96,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    98,    99,   100,   101,   102,   103,    90,
      91,    97,    92,    93,    94,     0,    95,    96,   105,     0,
       0,     0,     0,     0,     0,    90,    91,     0,    92,    93,
      94,     0,    95,    96,     0,     0,     0,    97,     0,     0,
       0,    98,    99,   100,   101,   102,   103,     0,     0,     0,
       0,     0,     0,    97,   104,     0,   105,     0,     0,     0,
     244,     0,     0,     0,     0,     0,     0,    98,    99,   100,
     101,   102,   103,     0,     0,     0,   128,     0,     0,     0,
       0,     0,   105,    98,    99,   100,   101,   102,   103,    90,
      91,     0,    92,    93,    94,     0,    95,    96,   105,     0,
       0,     0,     0,     0,     0,    90,    91,     0,    92,    93,
      94,     0,    95,    96,     0,     0,     0,    97,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    97,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    98,    99,   100,
     101,   102,   103,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   105,    98,    99,   100,   101,   102,   103,     0,
       0,     0,     0,     0,     0,     0,     0,     1,   184,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
       0,     0,     0,     0,     0,   258,     0,     0,     0,     0,
       0,     0,     0,    41,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   282,   332,     1,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,     1,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,     0,   375,     0,     0,    66,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,    67,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,    67,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,   338,     1,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22
};

static const yytype_int16 yycheck[] =
{
      41,    73,    72,    51,    83,    82,   130,   135,    66,    47,
      51,     0,   104,    77,    72,    25,   240,     3,     3,    45,
       3,    62,    76,    10,    11,    19,    80,    75,    76,    77,
     105,    72,    80,     3,    75,    76,    77,    26,    27,    80,
       3,    67,    31,    32,    33,    71,   104,     3,   172,     3,
       3,   105,    45,   130,     3,    65,     3,   105,     0,    69,
      64,    65,     3,   187,   105,   140,   261,    55,    54,    79,
      56,    58,    74,    58,   214,   215,   216,     3,    71,    73,
      66,    66,    14,    15,    73,   155,    56,    75,   283,    76,
      76,    76,    75,   317,   318,   172,    66,   155,   177,   191,
      54,   159,    82,   167,    77,   233,    76,   235,    41,   184,
     187,    74,    66,    66,   155,    95,    96,    58,   159,   167,
      76,   147,    76,    76,   199,    74,   167,   162,    75,    62,
      55,   111,    61,   191,    59,    76,    55,    69,    70,    55,
      57,    58,   200,    60,    74,   285,    54,    55,   272,    71,
     130,    57,   162,    57,   212,    18,    30,   232,    77,    75,
     195,   236,   237,   238,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    58,
      38,    39,    40,   311,   276,    55,    58,    55,   258,   247,
      55,    55,   172,   251,    55,   272,   254,    76,    55,    55,
     258,    75,    55,    72,    76,    75,    55,   187,    66,    77,
     251,    56,    77,    77,   240,    58,    77,   258,   276,    56,
      77,    77,    76,   261,    77,   353,   354,   355,    77,   162,
      66,    67,    68,    76,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,    12,    13,   346,    76,   384,   327,   386,    16,
      17,   271,   195,    54,    55,   337,   336,    55,    56,   327,
     259,    58,   400,   331,   351,   403,   265,   405,   336,    66,
      76,   356,   357,   358,    54,    55,   327,    76,   346,    76,
     331,   349,   272,   282,     3,   336,    54,    55,   219,   220,
     370,    54,   217,   218,   362,   285,    54,   365,   221,   222,
     223,   224,   370,   225,   226,    59,   374,    59,    77,    55,
       3,   362,    56,    77,    56,    54,   259,    83,    59,   370,
       3,    59,    59,   374,    59,   393,    76,    59,   396,    59,
      59,    59,    77,    59,    77,    59,    59,    59,   337,   282,
      54,     1,   393,     3,     4,    81,     6,     7,     8,    59,
      10,    11,    77,    59,    59,    59,    59,    59,   227,   229,
      75,   351,   271,   228,    65,    55,   265,   192,   230,   276,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,   231,    54,    33,   147,    -1,    -1,    -1,
      -1,    61,    62,    63,    64,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    75,    76,    -1,    78,    79,
      80,    -1,    82,    83,    84,    85,    86,    87,    88,    89,
       1,    -1,     3,     4,    -1,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    57,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    63,    64,    65,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    75,    76,    -1,    78,    79,    80,
      -1,    82,    83,    84,    85,    86,    87,    88,    89,     1,
      -1,     3,     4,    30,     6,     7,     8,    -1,    10,    11,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    65,    66,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    -1,    76,    -1,    78,    79,    80,    -1,
      82,    83,    84,    85,    86,    87,    88,    89,    -1,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,     3,    -1,    -1,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,     3,     4,    -1,     6,     7,
       8,    -1,    10,    11,     3,     4,    -1,     6,     7,     8,
      -1,    10,    11,     3,     4,    -1,     6,     7,     8,    77,
      10,    11,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    63,    64,    65,    66,    -1,
      -1,    -1,    61,    62,    63,    64,    65,    66,    76,    77,
      -1,    61,    62,    63,    64,    65,    66,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    77,     3,     4,
      30,     6,     7,     8,    -1,    10,    11,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,
      65,    66,     3,     4,    -1,     6,     7,     8,    -1,    10,
      11,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    63,    64,    65,    66,     3,     4,    -1,     6,
       7,     8,    -1,    10,    11,    76,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,    -1,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    31,    -1,    -1,    34,    -1,    -1,
      -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    34,    -1,    -1,    -1,    38,    39,    40,
      -1,    -1,    59,    -1,    61,    62,    63,    64,    65,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    76,
      61,    62,    63,    64,    65,    66,     3,     4,    -1,     6,
       7,     8,    -1,    10,    11,    76,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,    -1,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    31,    -1,    -1,    34,    -1,    -1,
      -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    34,    -1,    -1,    -1,    38,    39,    40,
      -1,    -1,    59,    -1,    61,    62,    63,    64,    65,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    76,
      61,    62,    63,    64,    65,    66,     3,     4,    -1,     6,
       7,     8,    -1,    10,    11,    76,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,    -1,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    31,    -1,    -1,    34,    -1,    -1,
      -1,    38,    39,    40,     3,     4,    -1,     6,     7,     8,
      31,    10,    11,    34,    -1,    -1,    -1,    38,    39,    40,
      -1,    -1,    59,    -1,    61,    62,    63,    64,    65,    66,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    59,    76,
      61,    62,    63,    64,    65,    66,     3,     4,    -1,     6,
       7,     8,    -1,    10,    11,    76,    -1,    -1,    -1,    58,
      -1,    60,    61,    62,    63,    64,    65,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    74,    75,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,    -1,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    -1,    60,    61,    62,    63,    64,    65,    66,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    74,    -1,    76,
      38,    39,    40,     3,     4,    -1,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    63,    64,    65,    66,     3,
       4,    31,     6,     7,     8,    -1,    10,    11,    76,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,    -1,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    61,    62,    63,    64,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    74,    -1,    76,    -1,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,
      64,    65,    66,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    76,    61,    62,    63,    64,    65,    66,     3,
       4,    -1,     6,     7,     8,    -1,    10,    11,    76,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,    -1,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    61,    62,    63,    64,    65,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    76,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    77,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    -1,    77,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    74,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    74,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    30,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    91,   116,   117,   120,   121,   122,   123,
     129,   132,   133,   159,   160,   161,     3,    74,     0,     3,
      54,    66,    76,   118,   119,   134,   135,   136,   117,   117,
       3,    74,   117,   117,   160,    74,     3,    94,   130,   131,
     132,   136,   137,   134,    54,    55,    57,    74,   116,   117,
     152,   162,    58,    76,   135,    74,   121,   124,   125,   126,
     132,   130,    57,    55,    75,   132,   136,    77,   119,   134,
       3,     4,     6,     7,     8,    10,    11,    31,    61,    62,
      63,    64,    65,    66,    74,    76,    92,    93,    95,    96,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   145,     1,     3,    54,    75,
      78,    79,    80,    82,    83,    84,    85,    86,    87,    88,
      89,   112,   114,   116,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   116,   152,    34,    59,    66,   112,   137,
       3,    77,   117,   138,   139,   140,   141,   124,   126,    75,
     125,    54,    56,   127,   128,   134,   126,    55,    75,    98,
     111,   115,    75,   131,    76,    98,    98,    58,    60,   145,
     146,   147,   148,   149,   114,   126,   142,    10,    11,    58,
      76,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    57,   113,    98,    66,    67,    68,    64,    65,    12,
      13,    14,    15,    69,    70,    16,    17,    61,    71,    72,
      18,    19,    73,    56,   115,    56,    76,    76,    76,   150,
      76,     3,    54,    54,    54,   114,    54,    55,    75,   154,
     112,   137,    59,    59,    34,    59,    66,   112,    58,    76,
     134,   136,   143,   144,    77,    55,    55,    77,    75,   115,
      54,    55,    56,    75,   115,     3,    55,    75,   145,    57,
     149,    77,    76,   136,   143,    77,   114,    77,    97,   112,
     112,   100,   100,   100,   101,   101,   102,   102,   103,   103,
     103,   103,   104,   104,   105,   106,   107,   108,   109,   114,
     150,    56,   150,   114,   114,   114,    83,   116,   155,    54,
      54,   112,    59,   112,   112,    59,    59,    34,    59,    66,
     112,   137,    77,   138,   143,   144,    58,    76,    53,   140,
       3,   128,   115,    59,    75,   145,   147,   100,    59,    55,
      77,    56,   150,    77,    77,    77,    76,   155,   155,    59,
      59,   112,   137,    59,    59,    34,    59,   112,    77,    77,
      34,    59,    66,   112,   137,    77,   138,   145,   112,   111,
     150,   150,   150,   114,    77,   114,    77,   114,    59,   112,
     112,    59,   112,   137,    59,    59,    34,    59,   112,    77,
      81,    77,   150,    77,   150,    77,    59,    59,    59,   112,
     112,    59,   150,    54,   150,   150,    59,    59
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    92,    92,    92,    92,    93,    93,    93,
      93,    94,    95,    96,    96,    96,    96,    96,    96,    97,
      97,    98,    98,    98,    98,    99,    99,    99,    99,    99,
      99,   100,   100,   101,   101,   101,   101,   102,   102,   102,
     103,   103,   103,   104,   104,   104,   104,   104,   105,   105,
     105,   106,   106,   107,   107,   108,   108,   109,   109,   110,
     110,   111,   111,   112,   112,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   114,   114,   115,   116,
     116,   117,   117,   117,   117,   117,   117,   117,   117,   118,
     118,   119,   119,   120,   120,   120,   120,   120,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     122,   122,   122,   123,   123,   124,   124,   125,   125,   126,
     126,   126,   126,   127,   127,   128,   128,   128,   129,   129,
     129,   129,   129,   130,   130,   131,   131,   132,   132,   132,
     133,   134,   134,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   136,   136,   136,
     136,   137,   137,   138,   138,   139,   139,   140,   140,   140,
     141,   141,   142,   142,   143,   143,   143,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   145,   145,
     145,   146,   146,   146,   146,   147,   148,   148,   149,   149,
     150,   150,   150,   150,   150,   150,   150,   151,   151,   151,
     152,   152,   153,   153,   154,   154,   155,   155,   156,   156,
     156,   157,   157,   157,   157,   157,   157,   158,   158,   158,
     158,   158,   159,   159,   160,   160,   161,   161,   162,   162
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     4,     3,     4,     2,     2,     1,
       3,     1,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     5,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     2,
       3,     2,     1,     2,     1,     2,     1,     2,     1,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     5,     2,     1,     1,     1,     2,     2,     3,     2,
       1,     2,     1,     1,     3,     2,     3,     1,     4,     5,
       5,     6,     2,     1,     3,     3,     1,     1,     1,     1,
       1,     2,     1,     1,     3,     3,     4,     6,     5,     5,
       6,     5,     4,     4,     4,     3,     4,     3,     2,     2,
       1,     1,     2,     3,     1,     1,     3,     2,     2,     1,
       1,     3,     2,     1,     2,     1,     1,     3,     2,     3,
       5,     4,     5,     4,     3,     3,     3,     4,     6,     5,
       5,     6,     4,     4,     2,     3,     3,     4,     3,     4,
       1,     2,     1,     4,     3,     2,     1,     2,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       2,     3,     1,     2,     1,     1,     1,     2,     7,     5,
       5,     5,     7,     6,     7,     6,     7,     3,     2,     2,
       2,     3,     1,     2,     1,     1,     4,     3,     1,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 79 "YaccGrammar.y" /* yacc.c:1646  */
    {
        root = createTree("program", 1, (yyvsp[0].ast));
    }
#line 1937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 85 "YaccGrammar.y" /* yacc.c:1646  */
    {
        (yyval.ast) =   createTree("primary_expression", 1, (yyvsp[0].ast));
	}
#line 1945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 89 "YaccGrammar.y" /* yacc.c:1646  */
    {
        (yyval.ast) =   createTree("primary_expression", 1, (yyvsp[0].ast));
	}
#line 1953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 93 "YaccGrammar.y" /* yacc.c:1646  */
    {
        (yyval.ast) =   createTree("primary_expression", 1, (yyvsp[0].ast));
	}
#line 1961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 97 "YaccGrammar.y" /* yacc.c:1646  */
    {
        (yyval.ast) =   createTree("primary_expression", 1, (yyvsp[-1].ast));
	}
#line 1969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 104 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("constant", 1, (yyvsp[0].ast));
	}
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 108 "YaccGrammar.y" /* yacc.c:1646  */
    {
    	(yyval.ast) = createTree("constant", 1, (yyvsp[0].ast));
    }
#line 1985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 112 "YaccGrammar.y" /* yacc.c:1646  */
    {
    	(yyval.ast) = createTree("constant", 1, (yyvsp[0].ast));
    }
#line 1993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 116 "YaccGrammar.y" /* yacc.c:1646  */
    {
    	(yyval.ast) = createTree("constant", 1, (yyvsp[0].ast));
    }
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 123 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("enumeration_constant", 1, (yyvsp[0].ast));
	}
#line 2009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 130 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("string", 1, (yyvsp[0].ast));
	}
#line 2017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 137 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("postfix_expression", 1, (yyvsp[0].ast));
	}
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 141 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    // array
	    (yyval.ast) = createTree("postfix_expression", 4, (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 146 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    // function call
        (yyval.ast) = createTree("postfix_expression", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 151 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    //...
	    (yyval.ast) = createTree("postfix_expression", 4, (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 166 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    //i++
        (yyval.ast) = createTree("postfix_expression", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 171 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    //i--
        (yyval.ast) = createTree("postfix_expression", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 188 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("argument_expression_list", 1, (yyvsp[0].ast));
	}
#line 2078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 192 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyvsp[-2].ast)->sibling.push_back((yyvsp[0].ast));
	    (yyval.ast) = (yyvsp[-2].ast);
	}
#line 2087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 200 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("unary_expression", 1, (yyvsp[0].ast));
	}
#line 2095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 204 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("unary_expression", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 208 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("unary_expression", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 212 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("unary_expression", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 227 "YaccGrammar.y" /* yacc.c:1646  */
    {
        (yyval.ast) = createTree("unary_expression", 1, (yyvsp[0].ast));
	}
#line 2127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 231 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("unary_expression", 1, (yyvsp[0].ast));
	}
#line 2135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 235 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("unary_expression", 1, (yyvsp[0].ast));
	}
#line 2143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 239 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("unary_expression", 1, (yyvsp[0].ast));
	}
#line 2151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 243 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("unary_expression", 1, (yyvsp[0].ast));
	}
#line 2159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 247 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("unary_expression", 1, (yyvsp[0].ast));
	}
#line 2167 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 254 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("cast_expression", 1, (yyvsp[0].ast));
	}
#line 2175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 258 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("cast_expression", 2, (yyvsp[-2].ast), (yyvsp[0].ast));
	}
#line 2183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 265 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("multiplicative_expression", 1, (yyvsp[0].ast));
	}
#line 2191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 269 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("multiplicative_expression", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 273 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("multiplicative_expression", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 277 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("multiplicative_expression", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2215 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 284 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("additive_expression", 1, (yyvsp[0].ast));
	}
#line 2223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 288 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("additive_expression", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 292 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("additive_expression", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2239 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 299 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("shift_expression", 1, (yyvsp[0].ast));
	}
#line 2247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 303 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("shift_expression", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 307 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("shift_expression", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2263 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 314 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("relational_expression", 1, (yyvsp[0].ast));
	}
#line 2271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 318 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("relational_expression", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2279 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 322 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("relational_expression", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2287 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 326 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("relational_expression", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2295 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 330 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("relational_expression", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 337 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("equality_expression", 1, (yyvsp[0].ast));
	}
#line 2311 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 341 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("equality_expression", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2319 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 345 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("equality_expression", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2327 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 352 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("and_expression", 1, (yyvsp[0].ast));
	}
#line 2335 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 356 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("and_expression", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2343 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 363 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("exclusive_or_expression", 1, (yyvsp[0].ast));
	}
#line 2351 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 367 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("exclusive_or_expression", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2359 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 374 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("inclusive_or_expression", 1, (yyvsp[0].ast));
	}
#line 2367 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 378 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("inclusive_or_expression", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2375 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 385 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("logical_and_expression", 1, (yyvsp[0].ast));
	}
#line 2383 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 389 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("logical_and_expression", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2391 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 396 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("logical_or_expression", 1, (yyvsp[0].ast));
	}
#line 2399 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 400 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("logical_or_expression", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 407 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("conditional_expression", 1, (yyvsp[0].ast));
	}
#line 2415 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 411 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("conditional_expression", 3, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast));
	}
#line 2423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 418 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("assignment_expression", 1, (yyvsp[0].ast));
	}
#line 2431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 422 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("assignment_expression", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 429 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("assignment_operator", 1, (yyvsp[0].ast));
	}
#line 2447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 433 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("assignment_operator", 1, (yyvsp[0].ast));
	}
#line 2455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 437 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("assignment_operator", 1, (yyvsp[0].ast));
	}
#line 2463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 441 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("assignment_operator", 1, (yyvsp[0].ast));
	}
#line 2471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 445 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("assignment_operator", 1, (yyvsp[0].ast));
	}
#line 2479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 449 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("assignment_operator", 1, (yyvsp[0].ast));
	}
#line 2487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 453 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("assignment_operator", 1, (yyvsp[0].ast));
	}
#line 2495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 457 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("assignment_operator", 1, (yyvsp[0].ast));
	}
#line 2503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 461 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("assignment_operator", 1, (yyvsp[0].ast));
	}
#line 2511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 465 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("assignment_operator", 1, (yyvsp[0].ast));
	}
#line 2519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 469 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("assignment_operator", 1, (yyvsp[0].ast));
	}
#line 2527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 476 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("expression", 1, (yyvsp[0].ast));
	}
#line 2535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 480 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyvsp[-2].ast)->sibling.push_back((yyvsp[0].ast));
	    (yyval.ast) = (yyvsp[-2].ast);
	}
#line 2544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 488 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("constant_expression", 1, (yyvsp[0].ast));
	}
#line 2552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 495 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("declaration", 1, (yyvsp[-1].ast));
	}
#line 2560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 499 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("declaration", 2, (yyvsp[-2].ast), (yyvsp[-1].ast));
	}
#line 2568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 506 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("declaration_specifiers", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 510 "YaccGrammar.y" /* yacc.c:1646  */
    {
        (yyval.ast) = createTree("declaration_specifiers", 1, (yyvsp[0].ast));
	}
#line 2584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 514 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("declaration_specifiers", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 518 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("declaration_specifiers", 1, (yyvsp[0].ast));
	}
#line 2600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 522 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("declaration_specifiers", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 526 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("declaration_specifiers", 1, (yyvsp[0].ast));
	}
#line 2616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 530 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("declaration_specifiers", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 534 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("declaration_specifiers", 1, (yyvsp[0].ast));
	}
#line 2632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 541 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("init_declarator_list", 1, (yyvsp[0].ast));
	}
#line 2640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 545 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyvsp[-2].ast)->sibling.push_back((yyvsp[0].ast));
	    (yyval.ast) = (yyvsp[-2].ast);
	}
#line 2649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 553 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("init_declarator", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 557 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("init_declarator", 1, (yyvsp[0].ast));
	}
#line 2665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 564 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    /* identifiers must be flagged as TYPEDEF_NAME */
	    (yyval.ast) = createTree("storage_class_specifier", 1, (yyvsp[0].ast));
	}
#line 2674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 569 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("storage_class_specifier", 1, (yyvsp[0].ast));
	}
#line 2682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 573 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("storage_class_specifier", 1, (yyvsp[0].ast));
	}
#line 2690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 577 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("storage_class_specifier", 1, (yyvsp[0].ast));
	}
#line 2698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 581 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("storage_class_specifier", 1, (yyvsp[0].ast));
	}
#line 2706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 588 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("type_specifier", 1, (yyvsp[0].ast));
	}
#line 2714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 592 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("type_specifier", 1, (yyvsp[0].ast));
	}
#line 2722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 596 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("type_specifier", 1, (yyvsp[0].ast));
	}
#line 2730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 600 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("type_specifier", 1, (yyvsp[0].ast));
	}
#line 2738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 604 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("type_specifier", 1, (yyvsp[0].ast));
	}
#line 2746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 608 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("type_specifier", 1, (yyvsp[0].ast));
	}
#line 2754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 612 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("type_specifier", 1, (yyvsp[0].ast));
	}
#line 2762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 616 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("type_specifier", 1, (yyvsp[0].ast));
	}
#line 2770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 620 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("type_specifier", 1, (yyvsp[0].ast));
	}
#line 2778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 624 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("type_specifier", 1, (yyvsp[0].ast));
	}
#line 2786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 628 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("type_specifier", 1, (yyvsp[0].ast));
	}
#line 2794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 632 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    /* after it has been defined as such */
	    (yyval.ast) = createTree("type_specifier", 1, (yyvsp[0].ast));
	}
#line 2803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 640 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("struct_or_union_specifier", 2, (yyvsp[-3].ast), (yyvsp[-1].ast));
	}
#line 2811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 644 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("struct_or_union_specifier", 3, (yyvsp[-4].ast), (yyvsp[-3].ast), (yyvsp[-1].ast));
	}
#line 2819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 648 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("struct_or_union_specifier", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 655 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("struct_or_union", 1, (yyvsp[0].ast));
	}
#line 2835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 659 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("struct_or_union", 1, (yyvsp[0].ast));
	}
#line 2843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 666 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("struct_declaration_list", 1, (yyvsp[0].ast));
	}
#line 2851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 670 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyvsp[-1].ast)->sibling.push_back((yyvsp[0].ast));
	    (yyval.ast) = (yyvsp[-1].ast);
	}
#line 2860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 678 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    /* for anonymous struct/union */
	    (yyval.ast) = createTree("struct_declaration", 1, (yyvsp[-1].ast));
	}
#line 2869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 683 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("struct_declaration", 2, (yyvsp[-2].ast), (yyvsp[-1].ast));
	}
#line 2877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 690 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("specifier_qualifier_list", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 694 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("specifier_qualifier_list", 1, (yyvsp[0].ast));
	}
#line 2893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 698 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("specifier_qualifier_list", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 702 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("specifier_qualifier_list", 1, (yyvsp[0].ast));
	}
#line 2909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 709 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("struct_declarator_list", 1, (yyvsp[0].ast));
	}
#line 2917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 713 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("struct_declarator_list", 2, (yyvsp[-2].ast), (yyvsp[0].ast));
	}
#line 2925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 720 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("struct_declarator", 1, (yyvsp[0].ast));
	}
#line 2933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 724 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("struct_declarator", 2, (yyvsp[-2].ast), (yyvsp[0].ast));
	}
#line 2941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 728 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("struct_declarator", 1, (yyvsp[0].ast));
	}
#line 2949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 735 "YaccGrammar.y" /* yacc.c:1646  */
    {
		(yyval.ast) = createTree("enum_specifier", 2, (yyvsp[-3].ast), (yyvsp[-1].ast));
	}
#line 2957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 739 "YaccGrammar.y" /* yacc.c:1646  */
    {
		(yyval.ast) = createTree("enum_specifier", 2, (yyvsp[-4].ast), (yyvsp[-2].ast));
	}
#line 2965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 743 "YaccGrammar.y" /* yacc.c:1646  */
    {
		(yyval.ast) = createTree("enum_specifier", 3, (yyvsp[-4].ast), (yyvsp[-3].ast), (yyvsp[-1].ast));
	}
#line 2973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 747 "YaccGrammar.y" /* yacc.c:1646  */
    {
		(yyval.ast) = createTree("enum_specifier", 3, (yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-2].ast));
	}
#line 2981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 751 "YaccGrammar.y" /* yacc.c:1646  */
    {
		(yyval.ast) = createTree("enum_specifier", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 758 "YaccGrammar.y" /* yacc.c:1646  */
    {
		(yyval.ast) = createTree("enumerator_list", 1, (yyvsp[0].ast));
	}
#line 2997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 762 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyvsp[-2].ast)->sibling.push_back((yyvsp[0].ast));
	    (yyval.ast) = (yyvsp[-2].ast);
	}
#line 3006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 770 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    /* identifiers must be flagged as ENUMERATION_CONSTANT */
	    (yyval.ast) = createTree("enumerator", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 775 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("enumerator", 1, (yyvsp[0].ast));
	}
#line 3023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 782 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("type_qualifier", 1, (yyvsp[0].ast));
	}
#line 3031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 786 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("type_qualifier", 1, (yyvsp[0].ast));
	}
#line 3039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 790 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("type_qualifier", 1, (yyvsp[0].ast));
	}
#line 3047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 797 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("function_specifier", 1, (yyvsp[0].ast));
	}
#line 3055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 804 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("declarator", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 808 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("declarator", 1, (yyvsp[0].ast));
	}
#line 3071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 815 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_declarator", 1, (yyvsp[0].ast));
	}
#line 3079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 819 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_declarator", 1, (yyvsp[-1].ast));
	}
#line 3087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 823 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_declarator", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 827 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_declarator", 4, (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 831 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_declarator", 6, (yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 835 "YaccGrammar.y" /* yacc.c:1646  */
    {
        (yyval.ast) = createTree("direct_declarator", 5, (yyvsp[-4].ast), (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
    }
#line 3119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 839 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_declarator", 5, (yyvsp[-4].ast), (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 843 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_declarator", 6, (yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 847 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_declarator", 5, (yyvsp[-4].ast), (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 851 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_declarator", 4, (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 855 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_declarator", 4, (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 859 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_declarator", 4, (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3167 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 863 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_declarator", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 867 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_declarator", 4, (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 874 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("pointer", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 878 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("pointer", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 882 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("pointer", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 886 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("pointer", 1, (yyvsp[0].ast));
	}
#line 3215 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 893 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("type_qualifier_list", 1, (yyvsp[0].ast));
	}
#line 3223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 897 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyvsp[-1].ast)->sibling.push_back((yyvsp[0].ast));
	    (yyval.ast) = (yyvsp[-1].ast);
	}
#line 3232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 906 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("parameter_type_list", 2, (yyvsp[-2].ast), (yyvsp[0].ast));
	}
#line 3240 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 910 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("parameter_type_list", 1, (yyvsp[0].ast));
	}
#line 3248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 917 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("parameter_list", 1, (yyvsp[0].ast));
	}
#line 3256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 921 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyvsp[-2].ast)->sibling.push_back((yyvsp[0].ast));
	    (yyval.ast) = (yyvsp[-2].ast);
	}
#line 3265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 929 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("parameter_declaration", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 933 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("parameter_declaration", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3281 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 937 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("parameter_declaration", 1, (yyvsp[0].ast));
	}
#line 3289 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 944 "YaccGrammar.y" /* yacc.c:1646  */
    {
        (yyval.ast) = createTree("identifier_list", 1, (yyvsp[0].ast));
	}
#line 3297 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 948 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyvsp[-2].ast)->sibling.push_back((yyvsp[0].ast));
    	(yyval.ast) = (yyvsp[-2].ast);
	}
#line 3306 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 956 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("type_name", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3314 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 960 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("type_name", 1, (yyvsp[0].ast));
	}
#line 3322 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 967 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("abstract_declarator", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3330 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 971 "YaccGrammar.y" /* yacc.c:1646  */
    {
        (yyval.ast) = createTree("pointer", 1, (yyvsp[0].ast));
	}
#line 3338 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 975 "YaccGrammar.y" /* yacc.c:1646  */
    {
        (yyval.ast) = createTree("pointer", 1, (yyvsp[0].ast));
	}
#line 3346 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 982 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_abstract_declarator", 1, (yyvsp[-1].ast));
	}
#line 3354 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 986 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_abstract_declarator", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3362 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 990 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_abstract_declarator", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3370 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 994 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_abstract_declarator", 5, (yyvsp[-4].ast), (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3378 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 998 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_abstract_declarator", 4, (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3386 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1002 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_abstract_declarator", 5, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3394 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1006 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_abstract_declarator", 4, (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3402 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1010 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_abstract_declarator", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3410 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1014 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_abstract_declarator", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3418 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1018 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_abstract_declarator", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3426 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1022 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_abstract_declarator", 4, (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3434 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1026 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_abstract_declarator", 6, (yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1030 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_abstract_declarator", 5, (yyvsp[-4].ast), (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3450 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1034 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_abstract_declarator", 5, (yyvsp[-4].ast), (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1038 "YaccGrammar.y" /* yacc.c:1646  */
    {
        (yyval.ast) = createTree("direct_abstract_declarator", 6, (yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
    }
#line 3466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1042 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_abstract_declarator", 4, (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3474 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1046 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_abstract_declarator", 4, (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1050 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_abstract_declarator", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1054 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_abstract_declarator", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1058 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_abstract_declarator", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1062 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_abstract_declarator", 4, (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1069 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("initializer", 1, (yyvsp[-1].ast));
	}
#line 3522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1073 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("initializer", 1, (yyvsp[-2].ast));
	}
#line 3530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1077 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("initializer", 1, (yyvsp[0].ast));
	}
#line 3538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1084 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("initializer_list", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1088 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("initializer_list", 1, (yyvsp[0].ast));
	}
#line 3554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1092 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("initializer_list", 3, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1096 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("initializer_list", 2, (yyvsp[-2].ast), (yyvsp[0].ast));
	}
#line 3570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1103 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("designation", 1, (yyvsp[-1].ast));
	}
#line 3578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1110 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("designator_list", 1, (yyvsp[0].ast));
	}
#line 3586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1114 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("designator_list", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1121 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("designator", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1125 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("designator", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1132 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("statement", 1, (yyvsp[0].ast));
	}
#line 3618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1136 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("statement", 1, (yyvsp[0].ast));
	}
#line 3626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1140 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("statement", 1, (yyvsp[0].ast));
	}
#line 3634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1144 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("statement", 1, (yyvsp[0].ast));
	}
#line 3642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1148 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("statement", 1, (yyvsp[0].ast));
	}
#line 3650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1152 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("statement", 1, (yyvsp[0].ast));
	}
#line 3658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1156 "YaccGrammar.y" /* yacc.c:1646  */
    {
    	yyerrok;
    }
#line 3666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1163 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("labeled_statement", 2, (yyvsp[-2].ast), (yyvsp[0].ast));
	}
#line 3674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1167 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("labeled_statement", 3, (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[0].ast));
	}
#line 3682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1171 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("labeled_statement", 2, (yyvsp[-2].ast), (yyvsp[0].ast));
	}
#line 3690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1178 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("compound_statement", 0, (yyvsp[-1].ast)->line);
	}
#line 3698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1182 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("compound_statement", 1, (yyvsp[-1].ast));
	}
#line 3706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1189 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("block_item_list", 1, (yyvsp[0].ast));
	}
#line 3714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1193 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyvsp[-1].ast)->sibling.push_back((yyvsp[0].ast));
	    (yyval.ast) = (yyvsp[-1].ast);
	}
#line 3723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1201 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("block_item", 1, (yyvsp[0].ast));
	}
#line 3731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1205 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("block_item", 1, (yyvsp[0].ast));
	}
#line 3739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1212 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("expression_statement", 0, (yyvsp[0].ast)->line);
	}
#line 3747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1216 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("expression_statement", 1, (yyvsp[-1].ast));
	}
#line 3755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1223 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("selection_statement", 5, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1227 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("selection_statement", 3, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast));
	}
#line 3771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1231 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("selection_statement", 3, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast));
	}
#line 3779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1238 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("iteration_statement", 3, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast));
	}
#line 3787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1242 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("iteration_statement", 4, (yyvsp[-6].ast), (yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-2].ast));
	}
#line 3795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1246 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("iteration_statement", 4, (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[0].ast));
	}
#line 3803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1250 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("iteration_statement", 5, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[0].ast));
	}
#line 3811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1254 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("iteration_statement", 5, (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[0].ast));
	}
#line 3819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1258 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("iteration_statement", 5, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[0].ast));
	}
#line 3827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1265 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("jump_statement", 2, (yyvsp[-2].ast), (yyvsp[-1].ast));
	}
#line 3835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1269 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("jump_statement", 1, (yyvsp[-1].ast));
	}
#line 3843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1273 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("jump_statement", 1, (yyvsp[-1].ast));
	}
#line 3851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1277 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("jump_statement", 1, (yyvsp[-1].ast));
	}
#line 3859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1281 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("jump_statement", 2, (yyvsp[-2].ast), (yyvsp[-1].ast));
	}
#line 3867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1288 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("translation_unit", 1, (yyvsp[0].ast));
	}
#line 3875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1292 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyvsp[-1].ast)->sibling.push_back((yyvsp[0].ast));
	    (yyval.ast) = (yyvsp[-1].ast);
	}
#line 3884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 1300 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("external_declaration", 1, (yyvsp[0].ast));
	}
#line 3892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1304 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("external_declaration", 1, (yyvsp[0].ast));
	}
#line 3900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 1311 "YaccGrammar.y" /* yacc.c:1646  */
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
	    (yyval.ast) = createTree("function_definition", 4, (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 1327 "YaccGrammar.y" /* yacc.c:1646  */
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
	    (yyval.ast) = createTree("function_definition", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 1343 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("declaration_list", 1, (yyvsp[0].ast));
	}
#line 3945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 1347 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyvsp[-1].ast)->sibling.push_back((yyvsp[0].ast));
	    (yyval.ast) = (yyvsp[-1].ast);
	}
#line 3954 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3958 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1353 "YaccGrammar.y" /* yacc.c:1906  */
