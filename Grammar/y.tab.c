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
int yylex(void);
AbstractSyntaxTree root = NULL;

void yyerror(const char *s)
{
	fflush(stdout);
	fprintf(stderr, "*** %s\n", s);
}

#line 92 "y.tab.c" /* yacc.c:339  */

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
#line 50 "YaccGrammar.y" /* yacc.c:355  */

    AbstractSyntaxTree ast;

#line 266 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 283 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   1767

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  73
/* YYNRULES -- Number of rules.  */
#define YYNRULES  254
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  433

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
       0,    76,    76,    82,    86,    90,    94,   101,   105,   109,
     113,   120,   127,   134,   138,   142,   146,   150,   154,   158,
     162,   166,   170,   177,   181,   189,   193,   197,   201,   205,
     209,   216,   220,   224,   228,   232,   236,   243,   247,   254,
     258,   262,   266,   273,   277,   281,   288,   292,   296,   303,
     307,   311,   315,   319,   326,   330,   334,   341,   345,   352,
     356,   363,   367,   374,   378,   385,   389,   396,   400,   407,
     411,   418,   422,   426,   430,   434,   438,   442,   446,   450,
     454,   458,   465,   469,   477,   484,   488,   495,   499,   503,
     507,   511,   515,   519,   523,   530,   534,   542,   546,   553,
     558,   562,   566,   570,   577,   581,   585,   589,   593,   597,
     601,   605,   609,   613,   617,   621,   629,   633,   637,   644,
     648,   655,   659,   667,   672,   679,   683,   687,   691,   698,
     702,   709,   713,   717,   724,   728,   732,   736,   740,   747,
     751,   759,   764,   771,   775,   779,   786,   793,   797,   804,
     808,   812,   816,   820,   824,   828,   832,   836,   840,   844,
     848,   852,   856,   863,   867,   871,   875,   882,   886,   895,
     899,   906,   910,   918,   922,   926,   933,   937,   945,   949,
     956,   960,   964,   971,   975,   979,   983,   987,   991,   995,
     999,  1003,  1007,  1011,  1015,  1019,  1023,  1027,  1031,  1035,
    1039,  1043,  1047,  1051,  1058,  1062,  1066,  1073,  1077,  1081,
    1085,  1092,  1099,  1103,  1110,  1114,  1121,  1125,  1129,  1133,
    1137,  1141,  1148,  1152,  1156,  1163,  1167,  1174,  1178,  1186,
    1190,  1197,  1201,  1208,  1212,  1216,  1223,  1227,  1231,  1235,
    1239,  1243,  1250,  1254,  1258,  1262,  1266,  1273,  1277,  1285,
    1289,  1296,  1311,  1327,  1331
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

#define YYPACT_NINF -266

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-266)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1692,  -266,  -266,  -266,  -266,  -266,  -266,  -266,  -266,  -266,
    -266,  -266,  -266,  -266,  -266,  -266,  -266,  -266,  -266,  -266,
    -266,  -266,    57,    32,  -266,    22,  1692,  1692,  -266,    60,
    -266,  1692,  1692,  1692,  -266,  -266,   -33,    45,  -266,  -266,
    -266,   122,    61,   172,  -266,  1582,    63,    43,  -266,  -266,
       3,  1715,  -266,  -266,  -266,    45,  -266,    51,    19,  -266,
    -266,  -266,   122,    76,  -266,    61,  1312,   409,  -266,    22,
    -266,  1625,   959,   697,    63,  1715,  1715,   577,  -266,    17,
    1715,   129,  1433,    50,  -266,  -266,  -266,  -266,  -266,   100,
    -266,  -266,  1442,  -266,  -266,  -266,  1509,  1509,  -266,  -266,
    -266,  -266,  -266,  -266,  -266,  1235,   895,  -266,  -266,  -266,
     106,   151,  1433,  -266,   169,    15,   228,    72,   234,    77,
      31,   114,   182,     5,  -266,  -266,  -266,   153,  -266,  -266,
    1433,   174,   166,   171,   191,   583,   197,   255,   222,   224,
    1341,  -266,   198,  -266,  -266,  -266,  -266,   496,  -266,  -266,
    -266,  -266,  -266,  -266,  -266,  1274,  -266,   231,   233,   975,
    -266,  -266,    24,   206,   240,  -266,    -8,   750,  -266,  -266,
    -266,  -266,  1433,   200,  -266,   245,  -266,    54,  -266,  -266,
    -266,  -266,  -266,  -266,   895,  -266,   895,  -266,  -266,  1433,
     299,  -266,   130,  1312,   188,  -266,    93,   135,   229,   304,
    -266,  -266,  1433,   305,   323,  -266,  -266,  -266,  -266,  -266,
    -266,  -266,  -266,  -266,  -266,  -266,  1433,  -266,  1433,  1433,
    1433,  1433,  1433,  1433,  1433,  1433,  1433,  1433,  1433,  1433,
    1433,  1433,  1433,  1433,  1433,  1433,  1433,   583,   253,   583,
    1433,  1433,  1433,   227,   831,   257,  -266,  -266,  -266,   202,
    -266,  1433,  -266,  -266,   256,  1274,  -266,  -266,  1433,  -266,
     258,   261,  1039,   647,  -266,    46,  -266,   152,  -266,  1668,
     309,  -266,  -266,  -266,  -266,    25,  1433,  -266,   237,   246,
     263,  -266,  1157,  -266,  -266,  -266,  -266,  -266,  1511,   162,
    -266,  1350,  -266,    81,  -266,  -266,   104,  -266,  -266,  -266,
    -266,  -266,   169,   169,    15,    15,   228,   228,   228,   228,
      72,    72,   234,    77,    31,   114,   182,   205,  -266,   583,
    -266,   112,   113,   139,   248,  1424,  1424,  -266,  -266,  -266,
    -266,   276,   278,  -266,  -266,  1274,  -266,   279,   280,  1055,
    -266,   264,   265,   152,  1119,  1559,  -266,  -266,  -266,  -266,
    -266,   269,   269,  -266,  -266,  -266,  1312,  1235,  -266,  -266,
    1433,  -266,  1433,  -266,   583,   583,   583,  1433,   747,   756,
    -266,  -266,   287,  1274,  -266,  -266,  1433,  -266,   290,  -266,
    -266,  1274,  -266,   291,   292,  1135,  -266,   281,  -266,   137,
    -266,  -266,   272,  -266,  -266,   141,   583,   142,   583,   148,
    -266,   296,   298,  -266,   300,  1274,  -266,  -266,  1433,  -266,
     301,  -266,  1199,  -266,   583,   307,  -266,   583,  -266,   583,
    -266,  -266,  -266,   303,   324,  -266,  -266,  -266,  -266,  -266,
    -266,  -266,  -266
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   115,    99,   100,   101,   102,   103,   146,   143,   144,
     145,   105,   106,   107,   108,   111,   112,   109,   110,   104,
     119,   120,     0,     0,   250,     0,    88,    90,   113,     0,
     114,    92,    94,     2,   247,   249,   138,     0,     1,   149,
      85,   166,     0,     0,    95,    98,   148,     0,    87,    89,
     118,     0,    91,    93,   248,     0,    11,   142,     0,   139,
     167,   165,   164,     0,    86,     0,     0,     0,   253,     0,
     252,     0,     0,     0,   147,     0,   126,     0,   121,     0,
     128,     0,     0,     0,   134,   168,   163,   150,    96,    98,
       3,    12,     0,     7,     8,     9,     0,     0,    10,    31,
      36,    35,    34,    33,    32,     0,     0,    13,     4,     5,
      25,    37,     0,    39,    43,    46,    49,    54,    57,    59,
      61,    63,    65,    67,    69,   206,    97,     3,   231,   225,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    82,     0,   229,   230,   216,   217,     0,   227,   218,
     219,   220,   221,   254,   251,     0,   151,    32,     0,     0,
     176,   161,   175,     0,   170,   171,     0,     0,   125,   116,
     122,   123,     0,     0,   129,   133,   127,     0,   136,    37,
      84,   141,   135,   140,     0,    29,     0,    26,    27,     0,
       0,   208,     0,     0,     0,   212,     0,   179,     0,     0,
      19,    20,     0,     0,     0,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    71,     0,    28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   243,   244,   245,     0,
     232,     0,   226,   228,     0,     0,   152,   159,     0,   158,
      32,     0,     0,     0,   173,   181,   174,   182,   160,     0,
       0,   162,   117,   131,   124,     0,     0,   137,     0,     0,
       0,   215,     0,   204,   207,   211,   213,     6,     0,   181,
     178,     0,    18,     0,    17,    15,     0,    23,    70,    40,
      41,    42,    45,    44,    47,    48,    52,    53,    50,    51,
      55,    56,    58,    60,    62,    64,    66,     0,   222,     0,
     224,     0,     0,     0,     0,     0,     0,   242,   246,    83,
     154,     0,     0,   155,   157,     0,   184,    32,     0,     0,
     200,     0,     0,   180,     0,     0,   169,   172,   177,   130,
     132,    30,     0,   214,   205,   210,     0,     0,    38,    14,
       0,    16,     0,   223,     0,     0,     0,     0,     0,     0,
     153,   156,     0,     0,   185,   191,     0,   190,     0,   201,
     183,     0,   192,    32,     0,     0,   202,     0,   209,     0,
      24,    68,   234,   235,   236,     0,     0,     0,     0,     0,
     187,     0,     0,   189,     0,     0,   193,   199,     0,   198,
       0,   203,     0,    21,     0,     0,   240,     0,   238,     0,
     186,   188,   195,     0,     0,   196,    22,   233,   237,   241,
     239,   194,   197
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -266,  -266,  -266,  -266,  -266,  -266,  -266,  -266,   147,  -266,
    -108,    41,    65,   -76,    75,   132,   158,   159,   157,   160,
    -266,   -69,   -60,  -266,    29,  -122,   -38,    11,  -266,   328,
    -266,   -21,  -266,  -266,   319,   -61,   -54,  -266,   126,  -266,
     347,   -64,   -41,  -266,    -7,   -42,   -39,   -63,   -59,  -266,
     134,  -266,  -116,   -73,  -214,   -65,    47,  -265,  -266,   211,
    -132,  -266,    -5,  -266,   259,  -229,  -266,  -266,  -266,  -266,
     374,  -266,  -266
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    23,   107,   108,    57,   109,   110,   296,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   141,   216,   142,   181,    24,    69,    43,    44,
      26,    27,    28,    29,    77,    78,    79,   173,   174,    30,
      58,    59,    31,    32,    63,    46,    47,    62,   341,   164,
     165,   166,   198,   342,   267,   191,   192,   193,   194,   195,
     144,   145,   146,   147,   148,   149,   150,   151,   152,    33,
      34,    35,    71
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      60,   126,    61,   243,   217,    74,   125,    68,   238,   159,
      80,    25,   158,   180,   163,   326,   170,   356,    45,   183,
      39,    85,   168,    86,   235,    39,   176,    39,    39,   143,
      76,    60,    38,   153,    80,    80,    80,    48,    49,    80,
      70,    55,    52,    53,    25,   125,    39,   270,    56,    39,
     273,   343,   197,    56,    76,    76,    76,    56,    89,    76,
      36,   180,    89,    50,    39,    80,   154,   280,   278,   271,
     279,   171,   175,   172,    83,   343,    40,    75,   236,   221,
     222,   172,   262,    41,   162,    76,   225,   226,    41,   266,
      41,    41,   255,    42,    84,   254,   368,   369,    42,   261,
     263,    42,   232,   180,   262,   318,   170,   320,    82,   143,
     299,   300,   301,   183,    60,   199,   200,   201,    85,    42,
     180,    72,   263,   265,   290,   182,    80,    41,   284,   277,
     197,    37,   197,   125,    51,   196,   251,    42,   231,    73,
     359,   227,   228,    80,   297,    80,    76,   356,   251,   306,
     307,   308,   309,    87,   350,   264,   298,    66,   289,   360,
       8,     9,    10,    76,   202,    76,   203,   251,   251,   249,
     287,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   361,   204,   358,   177,   282,   233,   363,    41,   364,
     365,   329,   412,   262,   251,   331,   251,   251,   332,   339,
     234,    41,   338,   251,   178,   283,   325,   180,   215,   237,
     344,   288,   413,   196,    85,   196,   366,   355,   415,   417,
     262,    60,   125,    74,   265,   419,    64,    65,   345,   179,
     239,   293,   392,   393,   394,   218,   219,   220,   288,   185,
     223,   224,   240,   187,   188,   285,   189,   241,   190,   289,
     229,   230,   250,   251,   274,   275,   328,   251,   245,   179,
     251,   362,   302,   303,   416,   317,   418,   242,   175,   321,
     322,   323,   373,   244,   162,   372,   246,   179,   247,   378,
     162,   385,   427,   268,   384,   429,   387,   430,   304,   305,
     256,   388,   257,   391,    60,   269,   125,   125,    85,   162,
     390,   276,   281,    60,   310,   311,   291,   292,   294,   319,
     324,   327,   348,   401,   351,   330,   402,   333,   405,   179,
     334,   404,   353,   352,   367,   410,    90,    91,    92,    93,
      94,    95,    85,    96,    97,   370,   179,   371,   374,   375,
      60,   379,   380,   357,    85,   423,   400,   355,   424,   403,
     406,   407,   125,   414,    98,   420,   162,   421,   411,   422,
     425,   428,   431,   312,    85,   179,   179,   179,   179,   179,
     179,   179,   179,   179,   179,   179,   179,   179,   179,   179,
     179,   179,   179,   432,    99,   100,   101,   102,   103,   104,
     313,   315,   314,    88,   167,   316,   395,   397,   399,   106,
     295,   349,    81,   347,   389,   286,   253,    54,     0,     0,
       0,     0,   127,    91,    92,    93,    94,    95,     0,    96,
      97,     0,     0,   179,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   179,     1,
      98,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,     0,   128,     0,     0,     0,     0,     0,     0,
      99,   100,   101,   102,   103,   104,     0,     0,     0,     0,
       0,     0,     0,    67,   129,   106,     0,   130,   131,   132,
       0,   133,   134,   135,   136,   137,   138,   139,   140,   127,
      91,    92,    93,    94,    95,     0,    96,    97,     0,   179,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,    98,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,     0,
     128,     0,     0,     0,     0,     0,     0,    99,   100,   101,
     102,   103,   104,     0,     0,     0,     0,     0,     0,     0,
      67,   252,   106,     0,   130,   131,   132,     0,   133,   134,
     135,   136,   137,   138,   139,   140,   127,    91,    92,    93,
      94,    95,     0,    96,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     0,
       0,     0,     0,     0,    98,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
       0,     0,     0,     0,     0,     0,     0,   128,     0,     0,
       0,     0,     0,     0,    99,   100,   101,   102,   103,   104,
      39,     0,   169,     0,     0,     0,     0,    67,     0,   106,
       0,   130,   131,   132,     0,   133,   134,   135,   136,   137,
     138,   139,   140,     0,     0,     0,     0,     1,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
     160,     0,     0,     0,     0,   262,     0,     0,     0,     0,
       0,     0,     0,    41,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   263,   340,     0,     0,     1,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      90,    91,    92,    93,    94,    95,     0,    96,    97,    90,
      91,    92,    93,    94,    95,     0,    96,    97,     0,     0,
       0,     0,     0,     0,   161,     0,     0,     0,    98,     0,
       1,     0,     0,     0,     0,     0,     0,    98,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,     0,     0,     0,     0,     0,    99,   100,
     101,   102,   103,   104,     0,     0,     0,    99,   100,   101,
     102,   103,   104,   106,   396,   272,     0,     0,     0,     0,
       0,     0,   106,   398,    90,    91,    92,    93,    94,    95,
       0,    96,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,    98,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,     0,   128,     0,     0,     0,     0,
       0,     0,    99,   100,   101,   102,   103,   104,    90,    91,
      92,    93,    94,    95,     0,    96,    97,   106,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,    98,     0,     0,     0,
       0,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,     0,     0,
       0,     0,     0,     0,     0,     0,    99,   100,   101,   102,
     103,   104,    90,    91,    92,    93,    94,    95,     0,    96,
      97,   106,     0,     0,     0,     0,     0,     0,    90,    91,
      92,    93,    94,    95,     0,    96,    97,     0,     0,     0,
      98,     0,     0,   155,     0,     0,     0,     8,     9,    10,
       0,     0,     0,     0,     0,     0,    98,     0,     0,   258,
       0,     0,     0,     8,     9,    10,     0,     0,   156,     0,
      99,   100,   101,   102,   103,   157,     0,     0,     0,     0,
       0,     0,     0,     0,   259,   106,    99,   100,   101,   102,
     103,   260,    90,    91,    92,    93,    94,    95,     0,    96,
      97,   106,     0,     0,     0,     0,     0,     0,    90,    91,
      92,    93,    94,    95,     0,    96,    97,     0,     0,     0,
      98,     0,     0,   335,     0,     0,     0,     8,     9,    10,
       0,     0,     0,     0,     0,     0,    98,     0,     0,   376,
       0,     0,     0,     8,     9,    10,     0,     0,   336,     0,
      99,   100,   101,   102,   103,   337,     0,     0,     0,     0,
       0,     0,     0,     0,   377,   106,    99,   100,   101,   102,
     103,   104,    90,    91,    92,    93,    94,    95,     0,    96,
      97,   106,     0,     0,     0,     0,     0,     0,    90,    91,
      92,    93,    94,    95,     0,    96,    97,     0,     0,     0,
      98,     0,     0,   381,     0,     0,     0,     8,     9,    10,
      90,    91,    92,    93,    94,    95,    98,    96,    97,   408,
       0,     0,     0,     8,     9,    10,     0,     0,   382,     0,
      99,   100,   101,   102,   103,   383,     0,     0,    98,     0,
       0,     0,     0,     0,   409,   106,    99,   100,   101,   102,
     103,   104,    90,    91,    92,    93,    94,    95,     0,    96,
      97,   106,     0,     0,     0,   189,     0,   190,    99,   100,
     101,   102,   103,   104,     0,     0,     0,     0,     0,     0,
      98,   105,   354,   106,     0,     0,     0,     0,    90,    91,
      92,    93,    94,    95,     0,    96,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   189,     0,   190,
      99,   100,   101,   102,   103,   104,    98,     0,     0,     0,
       0,     0,     0,   105,   426,   106,     0,    90,    91,    92,
      93,    94,    95,     0,    96,    97,     0,     0,     0,     0,
       0,     0,     0,   189,     0,   190,    99,   100,   101,   102,
     103,   104,     0,     0,     0,    98,     0,     0,     0,   105,
       0,   106,     8,     9,    10,    90,    91,    92,    93,    94,
      95,     0,    96,    97,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    99,   100,   101,   102,   103,
     104,     0,     0,    98,    90,    91,    92,    93,    94,    95,
     106,    96,    97,    90,    91,    92,    93,    94,    95,     0,
      96,    97,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,    99,   100,   101,   102,   103,   104,     0,
       0,    98,     0,     0,     0,     0,   105,     0,   106,     0,
       0,     0,     0,     0,     0,   248,     0,     0,     0,     0,
       0,     0,    99,   100,   101,   102,   103,   104,     0,     0,
       0,    99,   100,   101,   102,   103,   104,   106,     0,     0,
       0,     0,     0,     0,   357,     0,   106,    90,    91,    92,
      93,    94,    95,     0,    96,    97,    90,    91,    92,    93,
      94,    95,     0,    96,    97,    90,    91,    92,    93,    94,
      95,     0,    96,    97,     0,    98,     0,     0,     0,     0,
       0,     0,     0,     0,    98,     0,     0,     0,     0,     0,
       0,     0,     0,    98,     0,     0,     0,     0,   128,     0,
       0,     0,     0,     0,     0,    99,   100,   101,   102,   103,
     104,     0,     0,     0,    99,   100,   101,   102,   103,   104,
     106,     0,     0,    99,   100,   101,   102,   103,   104,   106,
       0,     0,    90,    91,    92,    93,    94,    95,   184,    96,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     1,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,     0,     0,     0,     0,     0,   262,
      99,   100,   101,   102,   103,   104,     0,    41,     0,     0,
       0,     0,     0,     0,     0,   186,     0,   288,   340,     1,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,     1,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,     0,   386,     0,     0,    66,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,    67,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,    67,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,   346,     1,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,     1,     0,     0,     0,     0,
       0,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22
};

static const yytype_int16 yycheck[] =
{
      41,    66,    41,   135,   112,    47,    66,    45,   130,    72,
      51,     0,    72,    82,    73,   244,    77,   282,    25,    83,
       3,    62,    76,    62,    19,     3,    80,     3,     3,    67,
      51,    72,     0,    71,    75,    76,    77,    26,    27,    80,
      45,    74,    31,    32,    33,   105,     3,    55,     3,     3,
     172,   265,   106,     3,    75,    76,    77,     3,    65,    80,
       3,   130,    69,     3,     3,   106,    71,   189,   184,    77,
     186,    54,    79,    56,    55,   289,    54,    74,    73,    64,
      65,    56,    58,    66,    73,   106,    14,    15,    66,   162,
      66,    66,   155,    76,    75,   155,   325,   326,    76,   159,
      76,    76,    71,   172,    58,   237,   167,   239,    57,   147,
     218,   219,   220,   177,   155,     9,    10,    11,   159,    76,
     189,    58,    76,   162,   197,    75,   167,    66,   193,    75,
     184,    74,   186,   193,    74,   106,    55,    76,    61,    76,
      59,    69,    70,   184,   204,   186,   167,   412,    55,   225,
     226,   227,   228,    77,   276,   162,   216,    57,   197,    55,
      38,    39,    40,   184,    58,   186,    60,    55,    55,   140,
      77,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    77,    76,   291,    55,    55,    72,   319,    66,    77,
      77,   251,    55,    58,    55,   255,    55,    55,   258,   262,
      18,    66,   262,    55,    75,    75,   244,   276,    57,    56,
      58,    76,    75,   184,   255,   186,    77,   282,    77,    77,
      58,   262,   282,   265,   263,    77,    54,    55,    76,    82,
      56,   202,   364,   365,   366,    66,    67,    68,    76,    92,
      12,    13,    76,    96,    97,    57,    58,    76,    60,   288,
      16,    17,    54,    55,    54,    55,    54,    55,     3,   112,
      55,    56,   221,   222,   396,   236,   398,    76,   275,   240,
     241,   242,   335,    76,   263,   335,    54,   130,    54,   339,
     269,   344,   414,    77,   344,   417,   345,   419,   223,   224,
      59,   356,    59,   362,   335,    55,   356,   357,   339,   288,
     360,    56,     3,   344,   229,   230,    77,     3,     3,    56,
      83,    54,     3,   373,    77,    59,   376,    59,   381,   172,
      59,   381,    59,    77,    76,   385,     3,     4,     5,     6,
       7,     8,   373,    10,    11,    59,   189,    59,    59,    59,
     381,    77,    77,    74,   385,   405,    59,   412,   408,    59,
      59,    59,   412,    81,    31,    59,   345,    59,    77,    59,
      59,    54,    59,   231,   405,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,    59,    61,    62,    63,    64,    65,    66,
     232,   234,   233,    65,    75,   235,   367,   368,   369,    76,
      77,   275,    55,   269,   357,   194,   147,    33,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,   276,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   291,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    63,    64,    65,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    75,    76,    -1,    78,    79,    80,
      -1,    82,    83,    84,    85,    86,    87,    88,    89,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,   362,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    75,    76,    -1,    78,    79,    80,    -1,    82,    83,
      84,    85,    86,    87,    88,    89,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,    66,
       3,    -1,    75,    -1,    -1,    -1,    -1,    74,    -1,    76,
      -1,    78,    79,    80,    -1,    82,    83,    84,    85,    86,
      87,    88,    89,    -1,    -1,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
       3,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    77,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    31,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    31,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    -1,    -1,    -1,    -1,    -1,    61,    62,
      63,    64,    65,    66,    -1,    -1,    -1,    61,    62,    63,
      64,    65,    66,    76,    77,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    77,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    62,    63,    64,    65,    66,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,
      65,    66,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    76,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      31,    -1,    -1,    34,    -1,    -1,    -1,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    34,
      -1,    -1,    -1,    38,    39,    40,    -1,    -1,    59,    -1,
      61,    62,    63,    64,    65,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    76,    61,    62,    63,    64,
      65,    66,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    76,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      31,    -1,    -1,    34,    -1,    -1,    -1,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    34,
      -1,    -1,    -1,    38,    39,    40,    -1,    -1,    59,    -1,
      61,    62,    63,    64,    65,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    76,    61,    62,    63,    64,
      65,    66,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    76,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      31,    -1,    -1,    34,    -1,    -1,    -1,    38,    39,    40,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    34,
      -1,    -1,    -1,    38,    39,    40,    -1,    -1,    59,    -1,
      61,    62,    63,    64,    65,    66,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    59,    76,    61,    62,    63,    64,
      65,    66,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    76,    -1,    -1,    -1,    58,    -1,    60,    61,    62,
      63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    74,    75,    76,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    60,
      61,    62,    63,    64,    65,    66,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    75,    76,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    -1,    60,    61,    62,    63,    64,
      65,    66,    -1,    -1,    -1,    31,    -1,    -1,    -1,    74,
      -1,    76,    38,    39,    40,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,
      66,    -1,    -1,    31,     3,     4,     5,     6,     7,     8,
      76,    10,    11,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    61,    62,    63,    64,    65,    66,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    74,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    62,    63,    64,    65,    66,    -1,    -1,
      -1,    61,    62,    63,    64,    65,    66,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    -1,    76,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,
      66,    -1,    -1,    -1,    61,    62,    63,    64,    65,    66,
      76,    -1,    -1,    61,    62,    63,    64,    65,    66,    76,
      -1,    -1,     3,     4,     5,     6,     7,     8,    76,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,    58,
      61,    62,    63,    64,    65,    66,    -1,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    -1,    76,    77,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    -1,    77,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    74,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    74,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52
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
       3,     4,     5,     6,     7,     8,    10,    11,    31,    61,
      62,    63,    64,    65,    66,    74,    76,    92,    93,    95,
      96,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   145,     3,    54,    75,
      78,    79,    80,    82,    83,    84,    85,    86,    87,    88,
      89,   112,   114,   116,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   116,   152,    34,    59,    66,   112,   137,
       3,    77,   117,   138,   139,   140,   141,   124,   126,    75,
     125,    54,    56,   127,   128,   134,   126,    55,    75,    98,
     111,   115,    75,   131,    76,    98,    76,    98,    98,    58,
      60,   145,   146,   147,   148,   149,   114,   126,   142,     9,
      10,    11,    58,    60,    76,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    57,   113,   100,    66,    67,
      68,    64,    65,    12,    13,    14,    15,    69,    70,    16,
      17,    61,    71,    72,    18,    19,    73,    56,   115,    56,
      76,    76,    76,   150,    76,     3,    54,    54,    54,   114,
      54,    55,    75,   154,   112,   137,    59,    59,    34,    59,
      66,   112,    58,    76,   134,   136,   143,   144,    77,    55,
      55,    77,    75,   115,    54,    55,    56,    75,   142,   142,
     115,     3,    55,    75,   145,    57,   149,    77,    76,   136,
     143,    77,     3,   114,     3,    77,    97,   112,   112,   100,
     100,   100,   101,   101,   102,   102,   103,   103,   103,   103,
     104,   104,   105,   106,   107,   108,   109,   114,   150,    56,
     150,   114,   114,   114,    83,   116,   155,    54,    54,   112,
      59,   112,   112,    59,    59,    34,    59,    66,   112,   137,
      77,   138,   143,   144,    58,    76,    53,   140,     3,   128,
     115,    77,    77,    59,    75,   145,   147,    74,   100,    59,
      55,    77,    56,   150,    77,    77,    77,    76,   155,   155,
      59,    59,   112,   137,    59,    59,    34,    59,   112,    77,
      77,    34,    59,    66,   112,   137,    77,   138,   145,   146,
     112,   111,   150,   150,   150,   114,    77,   114,    77,   114,
      59,   112,   112,    59,   112,   137,    59,    59,    34,    59,
     112,    77,    55,    75,    81,    77,   150,    77,   150,    77,
      59,    59,    59,   112,   112,    59,    75,   150,    54,   150,
     150,    59,    59
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    92,    92,    92,    92,    93,    93,    93,
      93,    94,    95,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    97,    97,    98,    98,    98,    98,    98,
      98,    99,    99,    99,    99,    99,    99,   100,   100,   101,
     101,   101,   101,   102,   102,   102,   103,   103,   103,   104,
     104,   104,   104,   104,   105,   105,   105,   106,   106,   107,
     107,   108,   108,   109,   109,   110,   110,   111,   111,   112,
     112,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   114,   114,   115,   116,   116,   117,   117,   117,
     117,   117,   117,   117,   117,   118,   118,   119,   119,   120,
     120,   120,   120,   120,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   122,   122,   122,   123,
     123,   124,   124,   125,   125,   126,   126,   126,   126,   127,
     127,   128,   128,   128,   129,   129,   129,   129,   129,   130,
     130,   131,   131,   132,   132,   132,   133,   134,   134,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   136,   136,   136,   136,   137,   137,   138,
     138,   139,   139,   140,   140,   140,   141,   141,   142,   142,
     143,   143,   143,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   145,   145,   145,   146,   146,   146,
     146,   147,   148,   148,   149,   149,   150,   150,   150,   150,
     150,   150,   151,   151,   151,   152,   152,   153,   153,   154,
     154,   155,   155,   156,   156,   156,   157,   157,   157,   157,
     157,   157,   158,   158,   158,   158,   158,   159,   159,   160,
     160,   161,   161,   162,   162
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     4,     3,     4,     3,     3,     2,
       2,     6,     7,     1,     3,     1,     2,     2,     2,     2,
       4,     1,     1,     1,     1,     1,     1,     1,     4,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     5,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     2,     3,     2,     1,     2,
       1,     2,     1,     2,     1,     1,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     5,     2,     1,
       1,     1,     2,     2,     3,     2,     1,     2,     1,     1,
       3,     2,     3,     1,     4,     5,     5,     6,     2,     1,
       3,     3,     1,     1,     1,     1,     1,     2,     1,     1,
       3,     3,     4,     6,     5,     5,     6,     5,     4,     4,
       4,     3,     4,     3,     2,     2,     1,     1,     2,     3,
       1,     1,     3,     2,     2,     1,     1,     3,     2,     1,
       2,     1,     1,     3,     2,     3,     5,     4,     5,     4,
       3,     3,     3,     4,     6,     5,     5,     6,     4,     4,
       2,     3,     3,     4,     3,     4,     1,     2,     1,     4,
       3,     2,     1,     2,     3,     2,     1,     1,     1,     1,
       1,     1,     3,     4,     3,     2,     3,     1,     2,     1,
       1,     1,     2,     7,     5,     5,     5,     7,     6,     7,
       6,     7,     3,     2,     2,     2,     3,     1,     2,     1,
       1,     4,     3,     1,     2
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
#line 77 "YaccGrammar.y" /* yacc.c:1646  */
    {
        root = createTree("program", 1, (yyvsp[0].ast));
    }
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 83 "YaccGrammar.y" /* yacc.c:1646  */
    {
        (yyval.ast) =   createTree("primary_expression", 1, (yyvsp[0].ast));
	}
#line 1978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 87 "YaccGrammar.y" /* yacc.c:1646  */
    {
        (yyval.ast) =   createTree("primary_expression", 1, (yyvsp[0].ast));
	}
#line 1986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 91 "YaccGrammar.y" /* yacc.c:1646  */
    {
        (yyval.ast) =   createTree("primary_expression", 1, (yyvsp[0].ast));
	}
#line 1994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 95 "YaccGrammar.y" /* yacc.c:1646  */
    {
        (yyval.ast) =   createTree("primary_expression", 1, (yyvsp[-1].ast));
	}
#line 2002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 102 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("constant", 1, (yyvsp[0].ast));
	}
#line 2010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 106 "YaccGrammar.y" /* yacc.c:1646  */
    {
    	(yyval.ast) = createTree("constant", 1, (yyvsp[0].ast));
    }
#line 2018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 110 "YaccGrammar.y" /* yacc.c:1646  */
    {
    	(yyval.ast) = createTree("constant", 1, (yyvsp[0].ast));
    }
#line 2026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 114 "YaccGrammar.y" /* yacc.c:1646  */
    {
    	(yyval.ast) = createTree("constant", 1, (yyvsp[0].ast));
    }
#line 2034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 121 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("enumeration_constant", 1, (yyvsp[0].ast));
	}
#line 2042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 128 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("string", 1, (yyvsp[0].ast));
	}
#line 2050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 135 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("postfix_expression", 1, (yyvsp[0].ast));
	}
#line 2058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 139 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("postfix_expression", 4, (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 143 "YaccGrammar.y" /* yacc.c:1646  */
    {
        (yyval.ast) = createTree("postfix_expression", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2074 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 147 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("postfix_expression", 4, (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 151 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("postfix_expression", 2, (yyvsp[-2].ast), (yyvsp[0].ast));
	}
#line 2090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 155 "YaccGrammar.y" /* yacc.c:1646  */
    {
        (yyval.ast) = createTree("postfix_expression", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 159 "YaccGrammar.y" /* yacc.c:1646  */
    {
        (yyval.ast) = createTree("postfix_expression", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 163 "YaccGrammar.y" /* yacc.c:1646  */
    {
        (yyval.ast) = createTree("postfix_expression", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2114 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 167 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("postfix_expression", 2, (yyvsp[-4].ast), (yyvsp[-1].ast));
	}
#line 2122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 171 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("postfix_expression", 2, (yyvsp[-5].ast), (yyvsp[-2].ast));
	}
#line 2130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 178 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("assignment_expression", 1, (yyvsp[0].ast));
	}
#line 2138 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 182 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyvsp[-2].ast)->sibling.push_back((yyvsp[0].ast));
	    (yyval.ast) = (yyvsp[-2].ast);
	}
#line 2147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 190 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("unary_expression", 1, (yyvsp[0].ast));
	}
#line 2155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 194 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("unary_expression", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 198 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("unary_expression", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 202 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("unary_expression", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2179 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 206 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("unary_expression", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 210 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("unary_expression", 2, (yyvsp[-3].ast), (yyvsp[-1].ast));
	}
#line 2195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 217 "YaccGrammar.y" /* yacc.c:1646  */
    {
        (yyval.ast) = createTree("unary_expression", 1, (yyvsp[0].ast));
	}
#line 2203 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 221 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("unary_expression", 1, (yyvsp[0].ast));
	}
#line 2211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 225 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("unary_expression", 1, (yyvsp[0].ast));
	}
#line 2219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 229 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("unary_expression", 1, (yyvsp[0].ast));
	}
#line 2227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 233 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("unary_expression", 1, (yyvsp[0].ast));
	}
#line 2235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 237 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("unary_expression", 1, (yyvsp[0].ast));
	}
#line 2243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 244 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("cast_expression", 1, (yyvsp[0].ast));
	}
#line 2251 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 248 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("cast_expression", 2, (yyvsp[-2].ast), (yyvsp[0].ast));
	}
#line 2259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 255 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("multiplicative_expression", 1, (yyvsp[0].ast));
	}
#line 2267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 259 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("multiplicative_expression", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2275 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 263 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("multiplicative_expression", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2283 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 267 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("multiplicative_expression", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 274 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("additive_expression", 1, (yyvsp[0].ast));
	}
#line 2299 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 278 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("additive_expression", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2307 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 282 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("additive_expression", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2315 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 289 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("shift_expression", 1, (yyvsp[0].ast));
	}
#line 2323 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 293 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("shift_expression", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2331 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 297 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("shift_expression", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2339 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 304 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("relational_expression", 1, (yyvsp[0].ast));
	}
#line 2347 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 308 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("relational_expression", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2355 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 312 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("relational_expression", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2363 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 316 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("relational_expression", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2371 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 320 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("relational_expression", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2379 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 327 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("equality_expression", 1, (yyvsp[0].ast));
	}
#line 2387 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 331 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("equality_expression", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2395 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 335 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("equality_expression", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2403 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 342 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("and_expression", 1, (yyvsp[0].ast));
	}
#line 2411 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 346 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("and_expression", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 353 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("exclusive_or_expression", 1, (yyvsp[0].ast));
	}
#line 2427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 357 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("exclusive_or_expression", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 364 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("inclusive_or_expression", 1, (yyvsp[0].ast));
	}
#line 2443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 368 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("inclusive_or_expression", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 375 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("logical_and_expression", 1, (yyvsp[0].ast));
	}
#line 2459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 379 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("logical_and_expression", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 386 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("logical_or_expression", 1, (yyvsp[0].ast));
	}
#line 2475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 390 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("logical_or_expression", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 397 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("conditional_expression", 1, (yyvsp[0].ast));
	}
#line 2491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 401 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("conditional_expression", 3, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast));
	}
#line 2499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 408 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("assignment_expression", 1, (yyvsp[0].ast));
	}
#line 2507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 412 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("assignment_expression", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 419 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("assignment_operator", 1, (yyvsp[0].ast));
	}
#line 2523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 423 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("assignment_operator", 1, (yyvsp[0].ast));
	}
#line 2531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 427 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("assignment_operator", 1, (yyvsp[0].ast));
	}
#line 2539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 431 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("assignment_operator", 1, (yyvsp[0].ast));
	}
#line 2547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 435 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("assignment_operator", 1, (yyvsp[0].ast));
	}
#line 2555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 439 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("assignment_operator", 1, (yyvsp[0].ast));
	}
#line 2563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 443 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("assignment_operator", 1, (yyvsp[0].ast));
	}
#line 2571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 447 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("assignment_operator", 1, (yyvsp[0].ast));
	}
#line 2579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 451 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("assignment_operator", 1, (yyvsp[0].ast));
	}
#line 2587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 455 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("assignment_operator", 1, (yyvsp[0].ast));
	}
#line 2595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 459 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("assignment_operator", 1, (yyvsp[0].ast));
	}
#line 2603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 466 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("expression", 1, (yyvsp[0].ast));
	}
#line 2611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 470 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyvsp[-2].ast)->sibling.push_back((yyvsp[0].ast));
	    (yyval.ast) = (yyvsp[-2].ast);
	}
#line 2620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 478 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("constant_expression", 1, (yyvsp[0].ast));
	}
#line 2628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 485 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("declaration", 1, (yyvsp[-1].ast));
	}
#line 2636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 489 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("declaration", 2, (yyvsp[-2].ast), (yyvsp[-1].ast));
	}
#line 2644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 496 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("declaration_specifiers", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 500 "YaccGrammar.y" /* yacc.c:1646  */
    {
        (yyval.ast) = createTree("declaration_specifiers", 1, (yyvsp[0].ast));
	}
#line 2660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 504 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("declaration_specifiers", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 508 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("declaration_specifiers", 1, (yyvsp[0].ast));
	}
#line 2676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 512 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("declaration_specifiers", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 516 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("declaration_specifiers", 1, (yyvsp[0].ast));
	}
#line 2692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 520 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("declaration_specifiers", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 524 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("declaration_specifiers", 1, (yyvsp[0].ast));
	}
#line 2708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 531 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("init_declarator_list", 1, (yyvsp[0].ast));
	}
#line 2716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 535 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyvsp[-2].ast)->sibling.push_back((yyvsp[0].ast));
	    (yyval.ast) = (yyvsp[-2].ast);
	}
#line 2725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 543 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("init_declarator", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 547 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("init_declarator", 1, (yyvsp[0].ast));
	}
#line 2741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 554 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    /* identifiers must be flagged as TYPEDEF_NAME */
	    (yyval.ast) = createTree("storage_class_specifier", 1, (yyvsp[0].ast));
	}
#line 2750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 559 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("storage_class_specifier", 1, (yyvsp[0].ast));
	}
#line 2758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 563 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("storage_class_specifier", 1, (yyvsp[0].ast));
	}
#line 2766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 567 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("storage_class_specifier", 1, (yyvsp[0].ast));
	}
#line 2774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 571 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("storage_class_specifier", 1, (yyvsp[0].ast));
	}
#line 2782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 578 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("type_specifier", 1, (yyvsp[0].ast));
	}
#line 2790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 582 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("type_specifier", 1, (yyvsp[0].ast));
	}
#line 2798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 586 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("type_specifier", 1, (yyvsp[0].ast));
	}
#line 2806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 590 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("type_specifier", 1, (yyvsp[0].ast));
	}
#line 2814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 594 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("type_specifier", 1, (yyvsp[0].ast));
	}
#line 2822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 598 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("type_specifier", 1, (yyvsp[0].ast));
	}
#line 2830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 602 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("type_specifier", 1, (yyvsp[0].ast));
	}
#line 2838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 606 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("type_specifier", 1, (yyvsp[0].ast));
	}
#line 2846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 610 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("type_specifier", 1, (yyvsp[0].ast));
	}
#line 2854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 614 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("type_specifier", 1, (yyvsp[0].ast));
	}
#line 2862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 618 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("type_specifier", 1, (yyvsp[0].ast));
	}
#line 2870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 622 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    /* after it has been defined as such */
	    (yyval.ast) = createTree("type_specifier", 1, (yyvsp[0].ast));
	}
#line 2879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 630 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("struct_or_union_specifier", 2, (yyvsp[-3].ast), (yyvsp[-1].ast));
	}
#line 2887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 634 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("struct_or_union_specifier", 3, (yyvsp[-4].ast), (yyvsp[-3].ast), (yyvsp[-1].ast));
	}
#line 2895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 638 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("struct_or_union_specifier", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 645 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("struct_or_union", 1, (yyvsp[0].ast));
	}
#line 2911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 649 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("struct_or_union", 1, (yyvsp[0].ast));
	}
#line 2919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 656 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("struct_declaration_list", 1, (yyvsp[0].ast));
	}
#line 2927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 660 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyvsp[-1].ast)->sibling.push_back((yyvsp[0].ast));
	    (yyval.ast) = (yyvsp[-1].ast);
	}
#line 2936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 668 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    /* for anonymous struct/union */
	    (yyval.ast) = createTree("struct_declaration", 1, (yyvsp[-1].ast));
	}
#line 2945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 673 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("struct_declaration", 2, (yyvsp[-2].ast), (yyvsp[-1].ast));
	}
#line 2953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 680 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("specifier_qualifier_list", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 684 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("specifier_qualifier_list", 1, (yyvsp[0].ast));
	}
#line 2969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 688 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("specifier_qualifier_list", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 2977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 692 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("specifier_qualifier_list", 1, (yyvsp[0].ast));
	}
#line 2985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 699 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("struct_declarator_list", 1, (yyvsp[0].ast));
	}
#line 2993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 703 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("struct_declarator_list", 2, (yyvsp[-2].ast), (yyvsp[0].ast));
	}
#line 3001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 710 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("struct_declarator", 1, (yyvsp[0].ast));
	}
#line 3009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 714 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("struct_declarator", 2, (yyvsp[-2].ast), (yyvsp[0].ast));
	}
#line 3017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 718 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("struct_declarator", 1, (yyvsp[0].ast));
	}
#line 3025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 725 "YaccGrammar.y" /* yacc.c:1646  */
    {
		(yyval.ast) = createTree("enum_specifier", 2, (yyvsp[-3].ast), (yyvsp[-1].ast));
	}
#line 3033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 729 "YaccGrammar.y" /* yacc.c:1646  */
    {
		(yyval.ast) = createTree("enum_specifier", 2, (yyvsp[-4].ast), (yyvsp[-2].ast));
	}
#line 3041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 733 "YaccGrammar.y" /* yacc.c:1646  */
    {
		(yyval.ast) = createTree("enum_specifier", 3, (yyvsp[-4].ast), (yyvsp[-3].ast), (yyvsp[-1].ast));
	}
#line 3049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 737 "YaccGrammar.y" /* yacc.c:1646  */
    {
		(yyval.ast) = createTree("enum_specifier", 3, (yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-2].ast));
	}
#line 3057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 741 "YaccGrammar.y" /* yacc.c:1646  */
    {
		(yyval.ast) = createTree("enum_specifier", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 748 "YaccGrammar.y" /* yacc.c:1646  */
    {
		(yyval.ast) = createTree("enumerator_list", 1, (yyvsp[0].ast));
	}
#line 3073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 752 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyvsp[-2].ast)->sibling.push_back((yyvsp[0].ast));
	    (yyval.ast) = (yyvsp[-2].ast);
	}
#line 3082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 760 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    /* identifiers must be flagged as ENUMERATION_CONSTANT */
	    (yyval.ast) = createTree("enumerator", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 765 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("enumerator", 1, (yyvsp[0].ast));
	}
#line 3099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 772 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("type_qualifier", 1, (yyvsp[0].ast));
	}
#line 3107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 776 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("type_qualifier", 1, (yyvsp[0].ast));
	}
#line 3115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 780 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("type_qualifier", 1, (yyvsp[0].ast));
	}
#line 3123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 787 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("function_specifier", 1, (yyvsp[0].ast));
	}
#line 3131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 794 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("declarator", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 798 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("declarator", 1, (yyvsp[0].ast));
	}
#line 3147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 805 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_declarator", 1, (yyvsp[0].ast));
	}
#line 3155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 809 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_declarator", 1, (yyvsp[-1].ast));
	}
#line 3163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 813 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_declarator", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 817 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_declarator", 4, (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3179 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 821 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_declarator", 6, (yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 825 "YaccGrammar.y" /* yacc.c:1646  */
    {
        (yyval.ast) = createTree("direct_declarator", 5, (yyvsp[-4].ast), (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
    }
#line 3195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 829 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_declarator", 5, (yyvsp[-4].ast), (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3203 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 833 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_declarator", 6, (yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 837 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_declarator", 5, (yyvsp[-4].ast), (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 841 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_declarator", 4, (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 845 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_declarator", 4, (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 849 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_declarator", 4, (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 853 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_declarator", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3251 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 857 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_declarator", 4, (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 864 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("pointer", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 868 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("pointer", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3275 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 872 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("pointer", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3283 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 876 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("pointer", 1, (yyvsp[0].ast));
	}
#line 3291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 883 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("type_qualifier_list", 1, (yyvsp[0].ast));
	}
#line 3299 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 887 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyvsp[-1].ast)->sibling.push_back((yyvsp[0].ast));
	    (yyval.ast) = (yyvsp[-1].ast);
	}
#line 3308 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 896 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("parameter_type_list", 2, (yyvsp[-2].ast), (yyvsp[0].ast));
	}
#line 3316 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 900 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("parameter_type_list", 1, (yyvsp[0].ast));
	}
#line 3324 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 907 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("parameter_list", 1, (yyvsp[0].ast));
	}
#line 3332 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 911 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyvsp[-2].ast)->sibling.push_back((yyvsp[0].ast));
	    (yyval.ast) = (yyvsp[-2].ast);
	}
#line 3341 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 919 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("parameter_declaration", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3349 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 923 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("parameter_declaration", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 927 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("parameter_declaration", 1, (yyvsp[0].ast));
	}
#line 3365 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 934 "YaccGrammar.y" /* yacc.c:1646  */
    {
        (yyval.ast) = createTree("identifier_list", 1, (yyvsp[0].ast));
	}
#line 3373 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 938 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyvsp[-2].ast)->sibling.push_back((yyvsp[0].ast));
    	(yyval.ast) = (yyvsp[-2].ast);
	}
#line 3382 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 946 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("type_name", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3390 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 950 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("type_name", 1, (yyvsp[0].ast));
	}
#line 3398 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 957 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("abstract_declarator", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3406 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 961 "YaccGrammar.y" /* yacc.c:1646  */
    {
        (yyval.ast) = createTree("pointer", 1, (yyvsp[0].ast));
	}
#line 3414 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 965 "YaccGrammar.y" /* yacc.c:1646  */
    {
        (yyval.ast) = createTree("pointer", 1, (yyvsp[0].ast));
	}
#line 3422 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 972 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_abstract_declarator", 1, (yyvsp[-1].ast));
	}
#line 3430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 976 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_abstract_declarator", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3438 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 980 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_abstract_declarator", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 984 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_abstract_declarator", 5, (yyvsp[-4].ast), (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3454 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 988 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_abstract_declarator", 4, (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3462 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 992 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_abstract_declarator", 5, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 996 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_abstract_declarator", 4, (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1000 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_abstract_declarator", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1004 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_abstract_declarator", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1008 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_abstract_declarator", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1012 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_abstract_declarator", 4, (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1016 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_abstract_declarator", 6, (yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1020 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_abstract_declarator", 5, (yyvsp[-4].ast), (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1024 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_abstract_declarator", 5, (yyvsp[-4].ast), (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1028 "YaccGrammar.y" /* yacc.c:1646  */
    {
        (yyval.ast) = createTree("direct_abstract_declarator", 6, (yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
    }
#line 3542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1032 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_abstract_declarator", 4, (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1036 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_abstract_declarator", 4, (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1040 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_abstract_declarator", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1044 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_abstract_declarator", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1048 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_abstract_declarator", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1052 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("direct_abstract_declarator", 4, (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1059 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("initializer", 1, (yyvsp[-1].ast));
	}
#line 3598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1063 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("initializer", 1, (yyvsp[-2].ast));
	}
#line 3606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1067 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("initializer", 1, (yyvsp[0].ast));
	}
#line 3614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1074 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("initializer_list", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1078 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("initializer_list", 1, (yyvsp[0].ast));
	}
#line 3630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1082 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("initializer_list", 3, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1086 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("initializer_list", 2, (yyvsp[-2].ast), (yyvsp[0].ast));
	}
#line 3646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1093 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("designation", 1, (yyvsp[-1].ast));
	}
#line 3654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1100 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("designator_list", 1, (yyvsp[0].ast));
	}
#line 3662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1104 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("designator_list", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1111 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("designator", 3, (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1115 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("designator", 2, (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1122 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("statement", 1, (yyvsp[0].ast));
	}
#line 3694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1126 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("statement", 1, (yyvsp[0].ast));
	}
#line 3702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1130 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("statement", 1, (yyvsp[0].ast));
	}
#line 3710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1134 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("statement", 1, (yyvsp[0].ast));
	}
#line 3718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1138 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("statement", 1, (yyvsp[0].ast));
	}
#line 3726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1142 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("statement", 1, (yyvsp[0].ast));
	}
#line 3734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1149 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("labeled_statement", 2, (yyvsp[-2].ast), (yyvsp[0].ast));
	}
#line 3742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1153 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("labeled_statement", 3, (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[0].ast));
	}
#line 3750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1157 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("labeled_statement", 2, (yyvsp[-2].ast), (yyvsp[0].ast));
	}
#line 3758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1164 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("compound_statement", 0, (yyvsp[-1].ast)->line);
	}
#line 3766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1168 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("compound_statement", 1, (yyvsp[-1].ast));
	}
#line 3774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1175 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("block_item_list", 1, (yyvsp[0].ast));
	}
#line 3782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1179 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyvsp[-1].ast)->sibling.push_back((yyvsp[0].ast));
	    (yyval.ast) = (yyvsp[-1].ast);
	}
#line 3791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1187 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("block_item", 1, (yyvsp[0].ast));
	}
#line 3799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1191 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("block_item", 1, (yyvsp[0].ast));
	}
#line 3807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1198 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("expression_statement", 0, (yyvsp[0].ast)->line);
	}
#line 3815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1202 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("expression_statement", 1, (yyvsp[-1].ast));
	}
#line 3823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1209 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("selection_statement", 5, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1213 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("selection_statement", 3, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast));
	}
#line 3839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1217 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("selection_statement", 3, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast));
	}
#line 3847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1224 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("iteration_statement", 3, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast));
	}
#line 3855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1228 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("iteration_statement", 4, (yyvsp[-6].ast), (yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-2].ast));
	}
#line 3863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1232 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("iteration_statement", 4, (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[0].ast));
	}
#line 3871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1236 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("iteration_statement", 5, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[0].ast));
	}
#line 3879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1240 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("iteration_statement", 5, (yyvsp[-5].ast), (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[0].ast));
	}
#line 3887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1244 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("iteration_statement", 5, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[0].ast));
	}
#line 3895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1251 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("jump_statement", 2, (yyvsp[-2].ast), (yyvsp[-1].ast));
	}
#line 3903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1255 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("jump_statement", 1, (yyvsp[-1].ast));
	}
#line 3911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 1259 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("jump_statement", 1, (yyvsp[-1].ast));
	}
#line 3919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1263 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("jump_statement", 1, (yyvsp[-1].ast));
	}
#line 3927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 1267 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("jump_statement", 2, (yyvsp[-2].ast), (yyvsp[-1].ast));
	}
#line 3935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 1274 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("translation_unit", 1, (yyvsp[0].ast));
	}
#line 3943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 1278 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyvsp[-1].ast)->sibling.push_back((yyvsp[0].ast));
	    (yyval.ast) = (yyvsp[-1].ast);
	}
#line 3952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 1286 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("external_declaration", 1, (yyvsp[0].ast));
	}
#line 3960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 1290 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("external_declaration", 1, (yyvsp[0].ast));
	}
#line 3968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 1297 "YaccGrammar.y" /* yacc.c:1646  */
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
	     */
	    (yyval.ast) = createTree("function_definition", 4, (yyvsp[-3].ast), (yyvsp[-2].ast), (yyvsp[-1].ast), (yyvsp[0].ast));
	}
#line 3987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 1312 "YaccGrammar.y" /* yacc.c:1646  */
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
#line 4004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 1328 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyval.ast) = createTree("declaration_list", 1, (yyvsp[0].ast));
	}
#line 4012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 1332 "YaccGrammar.y" /* yacc.c:1646  */
    {
	    (yyvsp[-1].ast)->sibling.push_back((yyvsp[0].ast));
	    (yyval.ast) = (yyvsp[-1].ast);
	}
#line 4021 "y.tab.c" /* yacc.c:1646  */
    break;


#line 4025 "y.tab.c" /* yacc.c:1646  */
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
#line 1338 "YaccGrammar.y" /* yacc.c:1906  */
