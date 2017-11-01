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
#line 1 "project.y" /* yacc.c:339  */

	void yyerror (char *s);
	#include<stdio.h>

#line 71 "y.tab.c" /* yacc.c:339  */

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
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT = 258,
    FLOAT = 259,
    BOOL = 260,
    VOID = 261,
    CHAR = 262,
    ARRAY = 263,
    BYTE = 264,
    STRING = 265,
    DOUBLE = 266,
    FE = 267,
    DIRECTORY = 268,
    LONG_INT = 269,
    SHORT_INT = 270,
    LONG_FLOAT = 271,
    SHORT_FLOAT = 272,
    LONG_DOUBLE = 273,
    SHORT_DOUBLE = 274,
    BLN_FALSE = 275,
    BLN_TRUE = 276,
    AND_OPT = 277,
    OR_OPT = 278,
    NOT_OPT = 279,
    IF = 280,
    ELSE = 281,
    SWITCH = 282,
    CASE = 283,
    DEFAULT = 284,
    ELIF = 285,
    IFNOT = 286,
    WHILE = 287,
    DO = 288,
    BREAK = 289,
    CONTINUE = 290,
    FOR = 291,
    FUNCTION = 292,
    RETURN = 293,
    BLTIN_PRINT = 294,
    BLTIN_LIST_CONTENTS = 295,
    BLTIN_GET_SIZE = 296,
    BLTIN_CREATE = 297,
    BLTIN_COPY = 298,
    BLTIN_COMPARE = 299,
    BLTIN_CONNECT_TO = 300,
    BLTIN_DELETE = 301,
    BLTIN_RENAME = 302,
    BLTIN_MOVE = 303,
    BLTIN_SORT = 304,
    BLTIN_FILTRE_FILES = 305,
    BLTIN_BACKUP = 306,
    BLTIN_SYNCHRONIZE = 307,
    BLTIN_SEARCH = 308,
    BLTIN_CD = 309,
    BLTIN_BACK_UP = 310,
    BLTIN_DOWNLOAD = 311,
    BLTIN_UPLOAD = 312,
    BLTIN_OPEN = 313,
    BLTIN_PROPERTIES = 314,
    BLTIN_MOVE_BACK = 315,
    BLTIN_MOVE_FORWARD = 316,
    LESSEQ_OPT = 317,
    GREATEREQ_OPT = 318,
    NEQ_OPT = 319,
    EQ_OPT = 320,
    LESS_OPT = 321,
    GREATER_OPT = 322,
    ASSIGNMENT_OPT = 323,
    MULTIPLY_ASSIGNMENT_OPT = 324,
    DIVIDE_ASSIGNMENT_OPT = 325,
    MODE_ASSIGNMENT_OPT = 326,
    ADD_ASSIGNMENT_OPT = 327,
    SUB_ASSIGNMENT_OPT = 328,
    POW_ASSIGNMENT_OPT = 329,
    INCREMENT_OPT = 330,
    DECREMENT_OPT = 331,
    DIVIDE_OPT = 332,
    MODE_OPT = 333,
    ADD_OPT = 334,
    SUB_OPT = 335,
    POW_OPT = 336,
    MULTIPLY_OPT = 337,
    INT_LTRL = 338,
    FLT_LTRL = 339,
    DOUBLE_LTRL = 340,
    STR_LTRL = 341,
    CHR_LTRL = 342,
    IDNTF = 343,
    GOTO = 344,
    BITWISE_XOR = 345,
    BITWISE_NOR = 346,
    BITWISE_NOT = 347,
    BITWISE_OR = 348,
    BITWISE_AND = 349,
    BITWISE_LEFTSHIFT = 350,
    BITWISE_RIGHTSHIFT = 351,
    SEMICOLON = 352,
    LEFT_BRACKET = 353,
    RIGHT_BRACKET = 354,
    COMMA = 355,
    COLON = 356,
    LEFT_PARANTHESIS = 357,
    RIGHT_PARANTHESIS = 358,
    LEFT_SQ_BRACKET = 359,
    RIGHT_SQ_BRACKET = 360,
    NEW_LINE = 361,
    WHITE_SPACE = 362,
    UNKNOWN_CHAR = 363,
    UNDER_SCORE = 364,
    BACK_SLASH = 365,
    ASTRIC = 366,
    COMMENT = 367
  };
#endif
/* Tokens.  */
#define INT 258
#define FLOAT 259
#define BOOL 260
#define VOID 261
#define CHAR 262
#define ARRAY 263
#define BYTE 264
#define STRING 265
#define DOUBLE 266
#define FE 267
#define DIRECTORY 268
#define LONG_INT 269
#define SHORT_INT 270
#define LONG_FLOAT 271
#define SHORT_FLOAT 272
#define LONG_DOUBLE 273
#define SHORT_DOUBLE 274
#define BLN_FALSE 275
#define BLN_TRUE 276
#define AND_OPT 277
#define OR_OPT 278
#define NOT_OPT 279
#define IF 280
#define ELSE 281
#define SWITCH 282
#define CASE 283
#define DEFAULT 284
#define ELIF 285
#define IFNOT 286
#define WHILE 287
#define DO 288
#define BREAK 289
#define CONTINUE 290
#define FOR 291
#define FUNCTION 292
#define RETURN 293
#define BLTIN_PRINT 294
#define BLTIN_LIST_CONTENTS 295
#define BLTIN_GET_SIZE 296
#define BLTIN_CREATE 297
#define BLTIN_COPY 298
#define BLTIN_COMPARE 299
#define BLTIN_CONNECT_TO 300
#define BLTIN_DELETE 301
#define BLTIN_RENAME 302
#define BLTIN_MOVE 303
#define BLTIN_SORT 304
#define BLTIN_FILTRE_FILES 305
#define BLTIN_BACKUP 306
#define BLTIN_SYNCHRONIZE 307
#define BLTIN_SEARCH 308
#define BLTIN_CD 309
#define BLTIN_BACK_UP 310
#define BLTIN_DOWNLOAD 311
#define BLTIN_UPLOAD 312
#define BLTIN_OPEN 313
#define BLTIN_PROPERTIES 314
#define BLTIN_MOVE_BACK 315
#define BLTIN_MOVE_FORWARD 316
#define LESSEQ_OPT 317
#define GREATEREQ_OPT 318
#define NEQ_OPT 319
#define EQ_OPT 320
#define LESS_OPT 321
#define GREATER_OPT 322
#define ASSIGNMENT_OPT 323
#define MULTIPLY_ASSIGNMENT_OPT 324
#define DIVIDE_ASSIGNMENT_OPT 325
#define MODE_ASSIGNMENT_OPT 326
#define ADD_ASSIGNMENT_OPT 327
#define SUB_ASSIGNMENT_OPT 328
#define POW_ASSIGNMENT_OPT 329
#define INCREMENT_OPT 330
#define DECREMENT_OPT 331
#define DIVIDE_OPT 332
#define MODE_OPT 333
#define ADD_OPT 334
#define SUB_OPT 335
#define POW_OPT 336
#define MULTIPLY_OPT 337
#define INT_LTRL 338
#define FLT_LTRL 339
#define DOUBLE_LTRL 340
#define STR_LTRL 341
#define CHR_LTRL 342
#define IDNTF 343
#define GOTO 344
#define BITWISE_XOR 345
#define BITWISE_NOR 346
#define BITWISE_NOT 347
#define BITWISE_OR 348
#define BITWISE_AND 349
#define BITWISE_LEFTSHIFT 350
#define BITWISE_RIGHTSHIFT 351
#define SEMICOLON 352
#define LEFT_BRACKET 353
#define RIGHT_BRACKET 354
#define COMMA 355
#define COLON 356
#define LEFT_PARANTHESIS 357
#define RIGHT_PARANTHESIS 358
#define LEFT_SQ_BRACKET 359
#define RIGHT_SQ_BRACKET 360
#define NEW_LINE 361
#define WHITE_SPACE 362
#define UNKNOWN_CHAR 363
#define UNDER_SCORE 364
#define BACK_SLASH 365
#define ASTRIC 366
#define COMMENT 367

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 6 "project.y" /* yacc.c:355  */
  // Later to be diccussed
	float			float_val;
	int			bool_val;//C has not bool type
	char			char_val;
	char			byte_val;// C has no byte type
	double			double_val;

#line 343 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 360 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  115
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   628

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  113
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  155
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  349

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   367

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    45,    45,    46,    46,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    62,    65,    68,
      69,    70,    71,    74,    75,    78,    79,    80,    83,    84,
      87,    88,    89,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   116,   117,   118,   119,
     120,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   139,   140,   141,   142,   143,
     146,   147,   148,   149,   150,   151,   152,   155,   156,   157,
     160,   161,   164,   165,   166,   169,   172,   175,   178,   181,
     184,   185,   188,   189,   192,   193,   194,   195,   196,   199,
     200,   201,   202,   203,   206,   207,   208,   211,   212,   213,
     214,   215,   218,   219,   220,   221,   222,   223,   226,   227,
     228,   231,   232,   235,   236,   237,   238,   239,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   259,   262,   265
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "BOOL", "VOID", "CHAR",
  "ARRAY", "BYTE", "STRING", "DOUBLE", "FE", "DIRECTORY", "LONG_INT",
  "SHORT_INT", "LONG_FLOAT", "SHORT_FLOAT", "LONG_DOUBLE", "SHORT_DOUBLE",
  "BLN_FALSE", "BLN_TRUE", "AND_OPT", "OR_OPT", "NOT_OPT", "IF", "ELSE",
  "SWITCH", "CASE", "DEFAULT", "ELIF", "IFNOT", "WHILE", "DO", "BREAK",
  "CONTINUE", "FOR", "FUNCTION", "RETURN", "BLTIN_PRINT",
  "BLTIN_LIST_CONTENTS", "BLTIN_GET_SIZE", "BLTIN_CREATE", "BLTIN_COPY",
  "BLTIN_COMPARE", "BLTIN_CONNECT_TO", "BLTIN_DELETE", "BLTIN_RENAME",
  "BLTIN_MOVE", "BLTIN_SORT", "BLTIN_FILTRE_FILES", "BLTIN_BACKUP",
  "BLTIN_SYNCHRONIZE", "BLTIN_SEARCH", "BLTIN_CD", "BLTIN_BACK_UP",
  "BLTIN_DOWNLOAD", "BLTIN_UPLOAD", "BLTIN_OPEN", "BLTIN_PROPERTIES",
  "BLTIN_MOVE_BACK", "BLTIN_MOVE_FORWARD", "LESSEQ_OPT", "GREATEREQ_OPT",
  "NEQ_OPT", "EQ_OPT", "LESS_OPT", "GREATER_OPT", "ASSIGNMENT_OPT",
  "MULTIPLY_ASSIGNMENT_OPT", "DIVIDE_ASSIGNMENT_OPT",
  "MODE_ASSIGNMENT_OPT", "ADD_ASSIGNMENT_OPT", "SUB_ASSIGNMENT_OPT",
  "POW_ASSIGNMENT_OPT", "INCREMENT_OPT", "DECREMENT_OPT", "DIVIDE_OPT",
  "MODE_OPT", "ADD_OPT", "SUB_OPT", "POW_OPT", "MULTIPLY_OPT", "INT_LTRL",
  "FLT_LTRL", "DOUBLE_LTRL", "STR_LTRL", "CHR_LTRL", "IDNTF", "GOTO",
  "BITWISE_XOR", "BITWISE_NOR", "BITWISE_NOT", "BITWISE_OR", "BITWISE_AND",
  "BITWISE_LEFTSHIFT", "BITWISE_RIGHTSHIFT", "SEMICOLON", "LEFT_BRACKET",
  "RIGHT_BRACKET", "COMMA", "COLON", "LEFT_PARANTHESIS",
  "RIGHT_PARANTHESIS", "LEFT_SQ_BRACKET", "RIGHT_SQ_BRACKET", "NEW_LINE",
  "WHITE_SPACE", "UNKNOWN_CHAR", "UNDER_SCORE", "BACK_SLASH", "ASTRIC",
  "COMMENT", "$accept", "program", "statement_list", "statement",
  "function_call", "return_type", "parameter_list", "block", "declaration",
  "factor_list", "RHS", "identifier_list", "arithmetic_expression",
  "factor", "assignment_operator", "assignment", "LHS", "loop",
  "while_loop", "do_while_loop", "do_statement", "for_loop",
  "for_statement", "initialize", "condition", "if_statement",
  "boolean_expression", "comparison", "compared", "relational_operators",
  "boolean_operators", "switch_statement", "case_statement", "data_type",
  "flag", "comment", "empty", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367
};
# endif

#define YYPACT_NINF -161

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-161)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     416,  -161,  -161,  -161,  -161,   609,  -161,  -161,  -161,  -161,
    -161,  -161,  -161,  -161,  -161,  -161,  -161,   -40,   -39,   -38,
     -32,   -22,   -60,   -19,   -18,   609,   187,   -17,    -1,    26,
      30,    32,    34,    52,    54,    56,    60,    61,    62,    70,
      85,    86,    97,   112,   137,   142,   143,   164,   165,   -66,
      51,    66,   197,   416,  -161,   118,   -28,   157,   334,  -161,
    -161,  -161,   245,  -161,  -161,    45,  -161,   195,  -161,   214,
     529,   215,   529,   529,   416,  -161,  -161,  -161,    15,   216,
    -161,  -161,  -161,  -161,  -161,  -161,   217,  -161,   243,   224,
     224,   224,   224,   224,   224,   224,   224,   224,   224,   224,
     224,   224,   224,   224,   224,   224,   224,   224,   224,   224,
     224,   224,   230,   233,   251,  -161,  -161,  -161,  -161,  -161,
    -161,  -161,  -161,  -161,  -161,  -161,   475,  -161,  -161,  -161,
     475,   295,   -22,   316,  -161,   294,  -161,  -161,   354,   342,
     139,    -9,  -161,   -87,   350,    44,    50,   312,   339,   341,
     150,  -161,   343,   370,   388,  -161,  -161,  -161,   -14,  -161,
    -161,   -10,    -8,     2,    43,    71,    73,    79,    81,    95,
     113,   138,   140,   152,   153,   176,   178,   182,   188,   189,
     238,   296,   336,   386,   383,   396,   387,   213,   350,  -161,
     169,  -161,   127,  -161,   529,  -161,   529,   411,  -161,  -161,
    -161,  -161,  -161,  -161,  -161,   -22,   124,  -161,  -161,  -161,
     -22,   124,   124,   399,   412,   -22,   -22,  -161,  -161,   -22,
     529,   588,   395,  -161,  -161,  -161,  -161,  -161,  -161,  -161,
    -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,
    -161,  -161,  -161,  -161,  -161,  -161,  -161,   413,  -161,   392,
    -161,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,    57,    75,   398,  -161,  -161,  -161,   425,
    -161,  -161,  -161,  -161,  -161,  -161,   509,   433,  -161,  -161,
    -161,   103,  -161,   337,   451,  -161,  -161,  -161,   431,  -161,
    -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,
    -161,  -161,   444,   -22,   474,  -161,   401,    19,   440,   456,
     609,   -22,  -161,   436,  -161,  -161,   448,   446,   447,   423,
     450,  -161,   454,  -161,   466,  -161,  -161,   249,   416,   416,
     455,   463,   416,   509,  -161,   -50,  -161,   416,   416,   416,
     416,   416,    31,  -161,   249,   416,   416,  -161,  -161
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   139,   140,   141,   138,     0,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    90,
       0,     0,     0,     2,     3,     0,     0,     0,     0,     7,
      92,    93,     0,    94,     8,   102,   103,     0,    10,     0,
       0,     0,     0,     0,   155,    97,    12,    13,     0,     0,
      18,    75,    76,    79,    77,    78,     0,    14,     0,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,     0,     0,     0,     1,     4,    11,    80,    81,
      82,    85,    83,    84,    86,     6,     0,     5,    88,    89,
       0,     0,     0,     0,    25,     0,   111,   112,     0,   110,
       0,     0,   109,     0,     0,     0,     0,     0,     0,    90,
     100,   101,     0,     0,     0,    15,    16,    57,     0,    59,
      56,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,    26,
      30,    61,    32,    87,     0,   107,     0,     0,   113,   122,
     123,   124,   125,   126,   127,     0,     0,   128,   129,   130,
       0,     0,     0,     0,     0,     0,     0,    23,    24,     0,
       0,   155,     0,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    47,    48,    49,    46,    50,
      51,    52,    53,    54,    55,    33,    91,     0,     9,     0,
      74,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   105,   118,   119,     0,
     117,   121,   116,   104,   114,   115,     0,     0,   108,    95,
      98,     0,    22,     0,     0,    19,    58,    60,     0,   154,
      65,    67,    62,    63,    66,    64,    72,    73,    71,    70,
      68,    69,     0,     0,     0,   120,     0,     0,     0,     0,
       0,     0,    20,     0,    96,   106,     0,     0,     0,     0,
       0,   131,     0,    99,     0,    17,   153,     0,     0,     0,
       0,     0,     0,     0,    21,     0,    28,   133,   134,     0,
       0,   137,     0,    27,     0,   135,   136,   132,    29
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -161,  -161,   -71,   -51,   -65,  -161,  -161,  -128,   477,  -161,
     427,   284,   378,   -26,   522,   -72,  -161,  -161,  -161,  -161,
    -161,  -161,  -161,  -161,  -161,  -161,   -61,  -161,  -160,  -105,
    -161,  -161,   263,    -4,  -161,  -161,   -64
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    52,    53,    54,    55,    79,   283,    75,    56,   335,
     189,   158,   190,   159,   126,    57,    58,    59,    60,    61,
      62,    63,   152,   153,    64,    65,   192,   142,   272,   211,
     212,    66,   307,    67,   185,    68,   160
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      88,    69,   116,   147,   195,   140,   151,   144,   144,   141,
     148,   145,   146,   207,   208,   209,   213,   214,     1,     2,
       3,    80,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,   206,   111,    76,   112,   206,
     118,   119,   120,   121,   122,   123,   124,   319,   320,   343,
     344,   274,   275,   199,   200,   201,   202,   203,   204,   319,
     320,   188,    70,    71,    72,   188,   207,   208,   209,   125,
      73,   132,   207,   208,   209,   133,    74,   266,    77,   207,
     208,   209,   273,   206,    78,    89,   222,   278,   279,   223,
     222,   280,   222,   224,   210,   225,   116,   207,   208,   209,
     191,    90,   222,   149,   191,   226,   199,   200,   201,   202,
     203,   204,   199,   200,   201,   202,   203,   204,   321,   199,
     200,   201,   202,   203,   204,   207,   208,   209,    91,   144,
     347,   144,    92,   263,    93,   264,    94,   199,   200,   201,
     202,   203,   204,   222,   267,   268,   227,   215,   269,   207,
     208,   209,   113,   216,    95,   144,    96,   285,    97,   281,
     302,   191,    98,    99,   100,   199,   200,   201,   202,   203,
     204,   222,   101,   222,   228,   315,   229,   114,   303,   222,
     271,   222,   230,   325,   231,   271,   271,   102,   103,   199,
     200,   201,   202,   203,   204,   222,   287,   115,   232,   104,
     309,   199,   200,   201,   202,   203,   204,    81,    82,    83,
      84,    85,   270,   222,   105,   117,   233,   284,   118,   119,
     120,   121,   122,   123,   124,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   323,   222,   106,
     222,   234,   205,   235,   107,   108,   251,   252,   253,   254,
     255,   256,   222,   222,   127,   236,   237,   337,   338,   257,
     258,   341,   259,   260,   261,   262,   109,   110,   345,   346,
      81,    82,    83,    84,    85,    86,   222,   131,   222,   238,
     318,   239,   222,   134,    87,   240,   116,   116,   222,   222,
     116,   241,   242,   331,   116,   116,    81,    82,    83,    84,
      85,   336,   135,   143,   154,   187,   324,    81,    82,    83,
      84,    85,   157,   183,   155,     1,     2,     3,   348,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    81,    82,    83,    84,    85,    17,   222,    18,
     156,   243,   184,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,   186,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   222,   194,   197,   244,
      49,    50,   118,   119,   120,   121,   122,   123,   124,   128,
     129,   217,   199,   200,   201,   202,   203,   204,   196,     1,
       2,     3,    51,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,   222,   310,   218,   245,
     311,    17,   198,    18,   111,   112,   219,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,   220,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    81,    82,
      83,    84,    85,   286,    81,    82,    83,    84,    85,   317,
     221,   246,   247,   248,   265,   136,   137,   276,   249,   138,
     277,   288,   289,   304,    49,    50,    81,    82,    83,    84,
      85,   330,    25,   305,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    51,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,   306,   308,   312,
     313,   314,   316,   322,   149,   326,   327,   328,   329,   136,
     137,   332,   333,   138,   334,   150,   339,   193,    81,    82,
      83,    84,    85,   139,   340,   250,    25,   187,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
     130,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     1,     2,     3,   282,     4,   342,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,     0,     0,
       0,     0,     1,     2,     3,     0,     4,   139,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16
};

static const yytype_int16 yycheck[] =
{
      26,     5,    53,    74,   132,    70,    78,    72,    73,    70,
      74,    72,    73,    22,    23,    24,   103,   104,     3,     4,
       5,    25,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,   140,   102,    97,   104,   144,
      68,    69,    70,    71,    72,    73,    74,    28,    29,    99,
     100,   211,   212,    62,    63,    64,    65,    66,    67,    28,
      29,   126,   102,   102,   102,   130,    22,    23,    24,    97,
     102,    26,    22,    23,    24,    30,    98,   205,    97,    22,
      23,    24,   210,   188,   102,   102,   100,   215,   216,   103,
     100,   219,   100,   103,   103,   103,   147,    22,    23,    24,
     126,   102,   100,    88,   130,   103,    62,    63,    64,    65,
      66,    67,    62,    63,    64,    65,    66,    67,    99,    62,
      63,    64,    65,    66,    67,    22,    23,    24,   102,   194,
      99,   196,   102,   194,   102,   196,   102,    62,    63,    64,
      65,    66,    67,   100,    20,    21,   103,   103,    24,    22,
      23,    24,   101,   103,   102,   220,   102,   221,   102,   220,
     103,   187,   102,   102,   102,    62,    63,    64,    65,    66,
      67,   100,   102,   100,   103,   303,   103,   111,   103,   100,
     206,   100,   103,   311,   103,   211,   212,   102,   102,    62,
      63,    64,    65,    66,    67,   100,   222,     0,   103,   102,
      97,    62,    63,    64,    65,    66,    67,    83,    84,    85,
      86,    87,    88,   100,   102,    97,   103,   221,    68,    69,
      70,    71,    72,    73,    74,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   309,   100,   102,
     100,   103,   103,   103,   102,   102,    77,    78,    79,    80,
      81,    82,   100,   100,    97,   103,   103,   328,   329,    90,
      91,   332,    93,    94,    95,    96,   102,   102,   339,   340,
      83,    84,    85,    86,    87,    88,   100,    32,   100,   103,
     306,   103,   100,    88,    97,   103,   337,   338,   100,   100,
     341,   103,   103,   319,   345,   346,    83,    84,    85,    86,
      87,   327,    88,    88,    88,    92,   310,    83,    84,    85,
      86,    87,    88,    83,    97,     3,     4,     5,   344,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    83,    84,    85,    86,    87,    25,   100,    27,
      97,   103,   109,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,   112,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   100,   102,   104,   103,
      88,    89,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    99,    62,    63,    64,    65,    66,    67,   102,     3,
       4,     5,   110,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,   100,   100,    99,   103,
     103,    25,    88,    27,   102,   104,   103,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    97,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    83,    84,
      85,    86,    87,    88,    83,    84,    85,    86,    87,    88,
     102,   105,   109,    97,    83,    20,    21,    98,   111,    24,
      88,    88,   110,   105,    88,    89,    83,    84,    85,    86,
      87,    88,    37,    88,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,   110,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    28,   105,    88,
     109,    97,    68,   103,    88,   109,    98,   101,   101,    20,
      21,   101,    98,    24,    88,    78,   101,   130,    83,    84,
      85,    86,    87,    88,   101,   187,    37,    92,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      58,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,     3,     4,     5,     6,     7,   333,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,    88,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    25,    27,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    88,
      89,   110,   114,   115,   116,   117,   121,   128,   129,   130,
     131,   132,   133,   134,   137,   138,   144,   146,   148,   146,
     102,   102,   102,   102,    98,   120,    97,    97,   102,   118,
     146,    83,    84,    85,    86,    87,    88,    97,   126,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   104,   101,   111,     0,   116,    97,    68,    69,
      70,    71,    72,    73,    74,    97,   127,    97,    75,    76,
     127,    32,    26,    30,    88,    88,    20,    21,    24,    88,
     117,   139,   140,    88,   117,   139,   139,   115,   149,    88,
     121,   128,   135,   136,    88,    97,    97,    88,   124,   126,
     149,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,    83,   109,   147,   112,    92,   117,   123,
     125,   126,   139,   123,   102,   120,   102,   104,    88,    62,
      63,    64,    65,    66,    67,   103,   142,    22,    23,    24,
     103,   142,   143,   103,   104,   103,   103,    99,    99,   103,
      97,   102,   100,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   105,   109,    97,   111,
     125,    77,    78,    79,    80,    81,    82,    90,    91,    93,
      94,    95,    96,   139,   139,    83,   120,    20,    21,    24,
      88,   126,   141,   120,   141,   141,    98,    88,   120,   120,
     120,   139,     6,   119,   146,   149,    88,   126,    88,   110,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   103,   103,   105,    88,    28,   145,   105,    97,
     100,   103,    88,   109,    97,   120,    68,    88,   126,    28,
      29,    99,   103,   128,   146,   120,   109,    98,   101,   101,
      88,   126,   101,    98,    88,   122,   126,   115,   115,   101,
     101,   115,   145,    99,   100,   115,   115,    99,   126
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   113,   114,   115,   115,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   117,   118,   119,
     119,   119,   119,   120,   120,   121,   121,   121,   122,   122,
     123,   123,   123,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   124,   124,   124,   124,
     124,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   126,   126,   126,   126,   126,
     127,   127,   127,   127,   127,   127,   127,   128,   128,   128,
     129,   129,   130,   130,   130,   131,   132,   133,   134,   135,
     136,   136,   137,   137,   138,   138,   138,   138,   138,   139,
     139,   139,   139,   139,   140,   140,   140,   141,   141,   141,
     141,   141,   142,   142,   142,   142,   142,   142,   143,   143,
     143,   144,   144,   145,   145,   145,   145,   145,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   147,   148,   149
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     2,     1,     1,     4,
       1,     2,     2,     2,     2,     3,     3,     7,     1,     1,
       2,     4,     1,     3,     3,     2,     3,    10,     1,     3,
       1,     1,     1,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     1,     1,     3,     1,
       3,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     2,
       1,     4,     1,     1,     1,     5,     6,     2,     5,     5,
       1,     1,     1,     1,     5,     5,     6,     3,     5,     1,
       1,     1,     1,     2,     3,     3,     3,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     7,    10,     4,     4,     5,     5,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     5,     5,     0
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
      
#line 1752 "y.tab.c" /* yacc.c:1646  */
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
#line 267 "project.y" /* yacc.c:1906  */

int main (void){
	yyparse();
	return 0;
}

void yyerror (char *s) {fprintf (stderr, "%s\n", s);}
