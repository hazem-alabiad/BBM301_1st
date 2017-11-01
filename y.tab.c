/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140715

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "project.y"
	void yyerror (char *s);
	#include<stdio.h>
#line 6 "project.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union{  /* Later to be diccussed*/
	float			float_val;
	int			bool_val;/*C has not bool type*/
	char			char_val;
	char			byte_val;/* C has no byte type*/
	double			double_val;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 39 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define INT 257
#define FLOAT 258
#define BOOL 259
#define VOID 260
#define CHAR 261
#define ARRAY 262
#define BYTE 263
#define STRING 264
#define DOUBLE 265
#define FE 266
#define DIRECTORY 267
#define LONG_INT 268
#define SHORT_INT 269
#define LONG_FLOAT 270
#define SHORT_FLOAT 271
#define LONG_DOUBLE 272
#define SHORT_DOUBLE 273
#define BLN_FALSE 274
#define BLN_TRUE 275
#define AND_OPT 276
#define OR_OPT 277
#define NOT_OPT 278
#define IF 279
#define ELSE 280
#define SWITCH 281
#define CASE 282
#define DEFAULT 283
#define ELIF 284
#define IFNOT 285
#define WHILE 286
#define DO 287
#define BREAK 288
#define CONTINUE 289
#define FOR 290
#define FUNCTION 291
#define RETURN 292
#define BLTIN_PRINT 293
#define BLTIN_LIST_CONTENTS 294
#define BLTIN_GET_SIZE 295
#define BLTIN_CREATE 296
#define BLTIN_COPY 297
#define BLTIN_COMPARE 298
#define BLTIN_CONNECT_TO 299
#define BLTIN_DELETE 300
#define BLTIN_RENAME 301
#define BLTIN_MOVE 302
#define BLTIN_SORT 303
#define BLTIN_FILTRE_FILES 304
#define BLTIN_BACKUP 305
#define BLTIN_SYNCHRONIZE 306
#define BLTIN_SEARCH 307
#define BLTIN_CD 308
#define BLTIN_BACK_UP 309
#define BLTIN_DOWNLOAD 310
#define BLTIN_UPLOAD 311
#define BLTIN_OPEN 312
#define BLTIN_PROPERTIES 313
#define BLTIN_MOVE_BACK 314
#define BLTIN_MOVE_FORWARD 315
#define LESSEQ_OPT 316
#define GREATEREQ_OPT 317
#define NEQ_OPT 318
#define EQ_OPT 319
#define LESS_OPT 320
#define GREATER_OPT 321
#define ASSIGNMENT_OPT 322
#define MULTIPLY_ASSIGNMENT_OPT 323
#define DIVIDE_ASSIGNMENT_OPT 324
#define MODE_ASSIGNMENT_OPT 325
#define ADD_ASSIGNMENT_OPT 326
#define SUB_ASSIGNMENT_OPT 327
#define POW_ASSIGNMENT_OPT 328
#define INCREMENT_OPT 329
#define DECREMENT_OPT 330
#define DIVIDE_OPT 331
#define MODE_OPT 332
#define ADD_OPT 333
#define SUB_OPT 334
#define POW_OPT 335
#define MULTIPLY_OPT 336
#define INT_LTRL 337
#define FLT_LTRL 338
#define DOUBLE_LTRL 339
#define STR_LTRL 340
#define CHR_LTRL 341
#define IDNTF 342
#define GOTO 343
#define BITWISE_XOR 344
#define BITWISE_NOR 345
#define BITWISE_NOT 346
#define BITWISE_OR 347
#define BITWISE_AND 348
#define BITWISE_LEFTSHIFT 349
#define BITWISE_RIGHTSHIFT 350
#define SEMICOLON 351
#define LEFT_BRACKET 352
#define RIGHT_BRACKET 353
#define COMMA 354
#define COLON 355
#define LEFT_PARANTHESIS 356
#define RIGHT_PARANTHESIS 357
#define LEFT_SQ_BRACKET 358
#define RIGHT_SQ_BRACKET 359
#define NEW_LINE 360
#define WHITE_SPACE 361
#define UNKNOWN_CHAR 362
#define UNDER_SCORE 363
#define BACK_SLASH 364
#define ASTRIC 365
#define COMMENT 366
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    1,    1,    2,    2,    2,    2,    2,    2,    2,
    2,    2,    2,    2,    2,    9,   11,   12,   12,   12,
   12,   13,   13,    4,    4,    4,   18,   18,   17,   17,
   17,    9,    9,    9,    9,    9,    9,    9,    9,    9,
    9,    9,    9,    9,    9,    9,    9,    9,    9,    9,
    9,    9,    9,    9,   21,   21,   21,   21,   21,   19,
   19,   19,   19,   19,   19,   19,   19,   19,   19,   19,
   19,   19,   19,   10,   10,   10,   10,   10,   16,   16,
   16,   16,   16,   16,   16,    3,    3,    3,   22,   22,
    5,    5,    5,   23,   24,   26,   25,   27,   28,   28,
    6,    6,   29,   29,   29,   29,   29,   20,   20,   20,
   20,   20,   31,   31,   31,   33,   33,   33,   33,   33,
   32,   32,   32,   32,   32,   32,   34,   34,   34,   30,
   30,   35,   35,   35,   35,   35,   14,   14,   14,   14,
   14,   14,   14,   14,   14,   14,   14,   14,   14,   14,
   14,    7,    8,   15,
};
static const YYINT yylen[] = {                            2,
    1,    1,    2,    2,    2,    1,    1,    4,    1,    2,
    2,    2,    2,    3,    3,    7,    1,    1,    2,    4,
    1,    3,    3,    2,    3,   10,    1,    3,    1,    1,
    1,    4,    4,    4,    4,    4,    4,    4,    4,    4,
    4,    4,    4,    4,    4,    4,    4,    4,    4,    4,
    4,    4,    4,    4,    1,    1,    3,    1,    3,    1,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    2,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    3,    2,    2,    1,    4,
    1,    1,    1,    5,    6,    2,    5,    5,    1,    1,
    1,    1,    5,    5,    6,    3,    5,    1,    1,    1,
    1,    2,    3,    3,    3,    1,    1,    1,    2,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    7,
   10,    4,    4,    5,    5,    4,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    5,    5,    0,
};
static const YYINT yydefred[] = {                         0,
  138,  139,  140,  137,    0,  141,  142,  143,  144,  145,
  146,  147,  148,  149,  150,  151,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    2,    0,    0,    6,    7,    9,    0,
    0,    0,   91,   92,   93,    0,    0,  102,    0,    0,
    0,    0,    0,    0,   96,   11,   12,    0,    0,   17,
   74,   75,   78,   76,   77,    0,   13,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    3,    4,   79,   80,   81,   84,
   82,   83,   85,    5,    0,   10,   24,   87,   88,    0,
    0,    0,    0,    0,  110,  111,    0,    0,    0,    0,
  108,    0,    0,    0,    0,    0,    0,    0,  100,    0,
    0,    0,    0,   14,   15,   56,   58,   55,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   60,   25,    0,
    0,   86,    0,  106,    0,    0,  112,  121,  122,  123,
  124,  125,  126,    0,    0,  127,  128,  129,    0,    0,
    0,    0,    0,    0,    0,   22,   23,    0,    0,    0,
    0,   33,   34,   35,   36,   37,   38,   39,   40,   41,
   42,   43,   44,   46,   47,   48,   45,   49,   50,   51,
   52,   53,   54,   32,   90,    0,    8,    0,   73,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  104,  117,  118,    0,  116,  120,
  115,  103,  113,  114,    0,    0,  107,   94,   97,    0,
   21,    0,    0,   18,   57,   59,    0,  153,   64,   66,
   61,   62,   65,   63,   71,   72,   70,   69,   67,   68,
    0,    0,    0,  119,    0,    0,    0,    0,    0,    0,
   19,    0,   95,  105,    0,    0,    0,    0,    0,  130,
    0,   98,    0,   16,  152,    0,    0,    0,    0,    0,
    0,    0,   20,   27,    0,    0,    0,    0,    0,    0,
    0,   26,    0,    0,    0,  131,   28,
};
static const YYINT yydgoto[] = {                         52,
   53,   54,   55,   56,   57,   58,  184,   59,   60,  157,
   79,  282,   75,   61,  158,  125,  189,  335,  190,  191,
  159,   62,   63,   64,   65,   66,  151,  152,   67,   68,
  141,  210,  271,  211,  306,
};
static const YYINT yysindex[] = {                      -103,
    0,    0,    0,    0,  462,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -344, -339, -298, -293,
 -279, -273, -269, -242,  462, -117, -234, -224, -177, -175,
 -154, -143, -129, -125, -119, -114,  -80,  -77,  -75,  -28,
  -19,  -17,  -16,  -14,   -6,   -5,   -4,   -3, -181, -268,
 -239,    0, -103,    0, -212,  197,    0,    0,    0, -208,
 -169,  414,    0,    0,    0,   -9, -275,    0,  -57,  314,
   16,  314,  314, -103,    0,    0,    0, -243,   17,    0,
    0,    0,    0,    0,    0,    9,    0,   13,  165,  165,
  165,  165,  165,  165,  165,  165,  165,  165,  165,  165,
  165,  165,  165,  165,  165,  165,  165,  165,  165,  165,
  165,   29,   30,   28,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  260,    0,    0,    0,    0,  260,
   77, -279,   78,   81,    0,    0,   93,   84, -102, -227,
    0, -301,  103,   71,   79,  186,   88,  102,    0,  218,
   80,  110,  106,    0,    0,    0,    0,    0, -323, -310,
 -309, -271, -259, -233, -220, -210, -209, -183, -128, -122,
 -121, -116, -111, -110, -106, -105, -101, -100,  -79,  -34,
  -33,  105,  128,  115,  151, -300,  103,    0,    0,   82,
   91,    0,  314,    0,  314,  180,    0,    0,    0,    0,
    0,    0,    0, -279,  240,    0,    0,    0, -279,  240,
  240,  174,  185, -279, -279,    0,    0, -279,  314,  445,
  417,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  188,    0,  167,    0,   45,
   45,   45,   45,   45,   45,   45,   45,   45,   45,   45,
   45,   85,  192,  173,    0,    0,    0,  191,    0,    0,
    0,    0,    0,    0,  254,  178,    0,    0,    0, -201,
    0,  -25,  205,    0,    0,    0,  189,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  214, -279,  261,    0,  424, -240,  219,  242,  462, -279,
    0,  222,    0,    0,  234,  232,  235,  430,  236,    0,
  241,    0,  252,    0,    0,   45, -103, -103,  248,  249,
 -103,  254,    0,    0, -257, -103, -103, -103, -103, -103,
 -230,    0,   45, -103, -103,    0,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  423,    0,
    0,    0,  595,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    1,    0,    0,    0,
    0,    0,    0,  243,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  -21,  -21,
  -21,  -21,  -21,  -21,  -21,  -21,  -21,  -21,  -21,  -21,
  -21,  -21,  -21,  -21,  -21,  -21,  -21,  -21,  -21,  -21,
  -21,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -216,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  423,    0,  268,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  308,    0,    0,  315,
  322,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  -21,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -228, -217,    0,    0, -215,
    0,    0,    0, -213, -211,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    7,  -18,  -78,  573,    0,    0,    0,    0,  -66,  120,
    0,    0, -130,    8,  -71,  591,  522,    0,  468,  -62,
  590,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -107,  -59,    0,  323,
};
#define YYTABLESIZE 772
static const YYINT yytable[] = {                        149,
  101,  194,  147,  139,  132,  143,  143,  140,  133,  144,
  145,   70,   69,    1,    2,    3,   71,    4,    5,    6,
    7,    8,    9,   10,   11,   12,   13,   14,   15,   16,
  221,  205,   80,  222,  115,  205,   81,   82,   83,   84,
   85,  318,  319,  221,  221,  186,  223,  224,  206,  207,
  208,  318,  319,  132,  132,  212,  213,   72,  187,  109,
  109,  109,   73,  187,  133,  133,  136,  136,  134,  134,
  135,  135,   74,  265,  206,  207,  208,   76,  272,  205,
  146,   77,  221,  277,  278,  225,  113,  279,  198,  199,
  200,  201,  202,  203,  221,  342,  343,  226,  148,  109,
  109,  109,  109,  109,  109,  109,  109,  109,  109,  109,
  109,  109,  320,   78,  198,  199,  200,  201,  202,  203,
  221,   89,  346,  227,  132,  114,  143,  115,  143,  209,
  262,   90,  263,  221,  109,  133,  228,  136,  116,  134,
  109,  135,  126,  221,  221,   88,  229,  230,  284,  308,
  273,  274,  143,    1,    2,    3,  280,    4,    5,    6,
    7,    8,    9,   10,   11,   12,   13,   14,   15,   16,
  221,  314,  127,  231,  111,   17,  112,   18,   91,  324,
   92,   19,   20,   21,   22,   23,   24,   25,   26,   27,
   28,   29,   30,   31,   32,   33,   34,   35,   36,   37,
   38,   93,   39,   40,   41,   42,   43,   44,   45,   46,
   47,   48,   94,  198,  199,  200,  201,  202,  203,   81,
   82,   83,   84,   85,   86,  221,   95,  283,  232,  322,
   96,  221,  221,   87,  233,  234,   97,  221,   49,   50,
  235,   98,  221,  221,  188,  236,  237,  221,  221,  188,
  238,  239,  221,  221,  204,  240,  241,  101,  101,  101,
   51,  101,  101,  101,  101,  101,  101,  101,  101,  101,
  101,  101,  101,  101,  221,   99,  131,  242,  100,  101,
  101,  101,  101,  101,  134,  101,  101,  101,  101,  101,
  101,  101,  101,  101,  101,  101,  101,  101,  101,  101,
  101,  101,  101,  101,  101,  188,  101,  101,  101,  101,
  101,  101,  101,  101,  101,  101,  323,  115,  115,  221,
  221,  115,  243,  244,  270,  115,  115,  102,  309,  270,
  270,  310,  154,  336,  337,  154,  103,  340,  104,  105,
  286,  106,  101,  101,  344,  345,  206,  207,  208,  107,
  108,  109,  110,  101,  206,  207,  208,  142,  153,  154,
  206,  207,  208,  155,  101,  182,  206,  207,  208,  289,
  290,  291,  292,  293,  294,  295,  296,  297,  298,  299,
  300,   81,   82,   83,   84,   85,  198,  199,  200,  201,
  202,  203,  183,  185,  198,  199,  200,  201,  202,  203,
  198,  199,  200,  201,  202,  203,  198,  199,  200,  201,
  202,  203,  250,  251,  252,  253,  254,  255,  198,  199,
  200,  201,  202,  203,  317,  256,  257,  214,  258,  259,
  260,  261,  193,  195,  197,  215,  218,  330,  196,  111,
  217,  301,    1,    2,    3,  334,    4,    5,    6,    7,
    8,    9,   10,   11,   12,   13,   14,   15,   16,  112,
  219,  220,  347,  245,   17,  247,   18,  206,  207,  208,
   19,   20,   21,   22,   23,   24,   25,   26,   27,   28,
   29,   30,   31,   32,   33,   34,   35,   36,   37,   38,
  246,   39,   40,   41,   42,   43,   44,   45,   46,   47,
   48,   81,   82,   83,   84,   85,  156,  198,  199,  200,
  201,  202,  203,  266,  267,  248,  264,  268,  117,  118,
  119,  120,  121,  122,  123,  275,  276,   49,   50,  287,
  288,  303,  304,  135,  136,  305,  307,  137,  216,  117,
  118,  119,  120,  121,  122,  123,  311,  124,  302,   51,
   25,  312,   27,   28,   29,   30,   31,   32,   33,   34,
   35,   36,   37,   38,  313,   39,   40,   41,   42,   43,
   44,   45,   46,   47,   48,  321,   81,   82,   83,   84,
   85,  269,  315,  148,  325,  326,  327,  135,  136,  328,
  331,  137,  332,  333,    1,  154,   81,   82,   83,   84,
   85,  138,  338,  339,   25,  186,   27,   28,   29,   30,
   31,   32,   33,   34,   35,   36,   37,   38,   99,   39,
   40,   41,   42,   43,   44,   45,   46,   47,   48,   30,
   30,   30,   30,   30,   30,   30,   29,   29,   29,   29,
   29,   29,   29,   31,   31,   31,   31,   31,   31,   31,
  150,  192,  130,  249,  341,  138,    0,    0,   30,    0,
    0,    0,    0,    0,   30,   29,    0,    0,    0,    0,
    0,   29,   31,    0,    0,    0,    0,    0,   31,  160,
  161,  162,  163,  164,  165,  166,  167,  168,  169,  170,
  171,  172,  173,  174,  175,  176,  177,  178,  179,  180,
  181,    1,    2,    3,  281,    4,    0,    6,    7,    8,
    9,   10,   11,   12,   13,   14,   15,   16,    1,    2,
    3,    0,    4,    0,    6,    7,    8,    9,   10,   11,
   12,   13,   14,   15,   16,  117,  118,  119,  120,  121,
  122,  123,  128,  129,   89,   89,   89,   89,   89,   89,
   89,   89,   89,   81,   82,   83,   84,   85,  285,    0,
   81,   82,   83,   84,   85,  316,   81,   82,   83,   84,
   85,  329,
};
static const YYINT yycheck[] = {                         78,
    0,  132,   74,   70,  280,   72,   73,   70,  284,   72,
   73,  356,    5,  257,  258,  259,  356,  261,  262,  263,
  264,  265,  266,  267,  268,  269,  270,  271,  272,  273,
  354,  139,   25,  357,   53,  143,  337,  338,  339,  340,
  341,  282,  283,  354,  354,  346,  357,  357,  276,  277,
  278,  282,  283,  282,  283,  357,  358,  356,  125,  276,
  277,  278,  356,  130,  282,  283,  282,  283,  282,  283,
  282,  283,  352,  204,  276,  277,  278,  351,  209,  187,
   74,  351,  354,  214,  215,  357,  355,  218,  316,  317,
  318,  319,  320,  321,  354,  353,  354,  357,  342,  316,
  317,  318,  319,  320,  321,  322,  323,  324,  325,  326,
  327,  328,  353,  356,  316,  317,  318,  319,  320,  321,
  354,  356,  353,  357,  353,  365,  193,  146,  195,  357,
  193,  356,  195,  354,  351,  353,  357,  353,  351,  353,
  357,  353,  351,  354,  354,   26,  357,  357,  220,  351,
  210,  211,  219,  257,  258,  259,  219,  261,  262,  263,
  264,  265,  266,  267,  268,  269,  270,  271,  272,  273,
  354,  302,  342,  357,  356,  279,  358,  281,  356,  310,
  356,  285,  286,  287,  288,  289,  290,  291,  292,  293,
  294,  295,  296,  297,  298,  299,  300,  301,  302,  303,
  304,  356,  306,  307,  308,  309,  310,  311,  312,  313,
  314,  315,  356,  316,  317,  318,  319,  320,  321,  337,
  338,  339,  340,  341,  342,  354,  356,  220,  357,  308,
  356,  354,  354,  351,  357,  357,  356,  354,  342,  343,
  357,  356,  354,  354,  125,  357,  357,  354,  354,  130,
  357,  357,  354,  354,  357,  357,  357,  257,  258,  259,
  364,  261,  262,  263,  264,  265,  266,  267,  268,  269,
  270,  271,  272,  273,  354,  356,  286,  357,  356,  279,
  356,  281,  282,  283,  342,  285,  286,  287,  288,  289,
  290,  291,  292,  293,  294,  295,  296,  297,  298,  299,
  300,  301,  302,  303,  304,  186,  306,  307,  308,  309,
  310,  311,  312,  313,  314,  315,  309,  336,  337,  354,
  354,  340,  357,  357,  205,  344,  345,  356,  354,  210,
  211,  357,  354,  327,  328,  357,  356,  331,  356,  356,
  221,  356,  342,  343,  338,  339,  276,  277,  278,  356,
  356,  356,  356,  353,  276,  277,  278,  342,  342,  351,
  276,  277,  278,  351,  364,  337,  276,  277,  278,  250,
  251,  252,  253,  254,  255,  256,  257,  258,  259,  260,
  261,  337,  338,  339,  340,  341,  316,  317,  318,  319,
  320,  321,  363,  366,  316,  317,  318,  319,  320,  321,
  316,  317,  318,  319,  320,  321,  316,  317,  318,  319,
  320,  321,  331,  332,  333,  334,  335,  336,  316,  317,
  318,  319,  320,  321,  305,  344,  345,  357,  347,  348,
  349,  350,  356,  356,  342,  357,  357,  318,  358,  356,
  353,  357,  257,  258,  259,  326,  261,  262,  263,  264,
  265,  266,  267,  268,  269,  270,  271,  272,  273,  358,
  351,  356,  343,  359,  279,  351,  281,  276,  277,  278,
  285,  286,  287,  288,  289,  290,  291,  292,  293,  294,
  295,  296,  297,  298,  299,  300,  301,  302,  303,  304,
  363,  306,  307,  308,  309,  310,  311,  312,  313,  314,
  315,  337,  338,  339,  340,  341,  342,  316,  317,  318,
  319,  320,  321,  274,  275,  365,  337,  278,  322,  323,
  324,  325,  326,  327,  328,  352,  342,  342,  343,  342,
  364,  359,  342,  274,  275,  282,  359,  278,  353,  322,
  323,  324,  325,  326,  327,  328,  342,  351,  357,  364,
  291,  363,  293,  294,  295,  296,  297,  298,  299,  300,
  301,  302,  303,  304,  351,  306,  307,  308,  309,  310,
  311,  312,  313,  314,  315,  357,  337,  338,  339,  340,
  341,  342,  322,  342,  363,  352,  355,  274,  275,  355,
  355,  278,  352,  342,    0,  353,  337,  338,  339,  340,
  341,  342,  355,  355,  291,  346,  293,  294,  295,  296,
  297,  298,  299,  300,  301,  302,  303,  304,  351,  306,
  307,  308,  309,  310,  311,  312,  313,  314,  315,  322,
  323,  324,  325,  326,  327,  328,  322,  323,  324,  325,
  326,  327,  328,  322,  323,  324,  325,  326,  327,  328,
   78,  130,   62,  186,  332,  342,   -1,   -1,  351,   -1,
   -1,   -1,   -1,   -1,  357,  351,   -1,   -1,   -1,   -1,
   -1,  357,  351,   -1,   -1,   -1,   -1,   -1,  357,   90,
   91,   92,   93,   94,   95,   96,   97,   98,   99,  100,
  101,  102,  103,  104,  105,  106,  107,  108,  109,  110,
  111,  257,  258,  259,  260,  261,   -1,  263,  264,  265,
  266,  267,  268,  269,  270,  271,  272,  273,  257,  258,
  259,   -1,  261,   -1,  263,  264,  265,  266,  267,  268,
  269,  270,  271,  272,  273,  322,  323,  324,  325,  326,
  327,  328,  329,  330,  322,  323,  324,  325,  326,  327,
  328,  329,  330,  337,  338,  339,  340,  341,  342,   -1,
  337,  338,  339,  340,  341,  342,  337,  338,  339,  340,
  341,  342,
};
#define YYFINAL 52
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 366
#define YYUNDFTOKEN 404
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"INT","FLOAT","BOOL","VOID",
"CHAR","ARRAY","BYTE","STRING","DOUBLE","FE","DIRECTORY","LONG_INT","SHORT_INT",
"LONG_FLOAT","SHORT_FLOAT","LONG_DOUBLE","SHORT_DOUBLE","BLN_FALSE","BLN_TRUE",
"AND_OPT","OR_OPT","NOT_OPT","IF","ELSE","SWITCH","CASE","DEFAULT","ELIF",
"IFNOT","WHILE","DO","BREAK","CONTINUE","FOR","FUNCTION","RETURN","BLTIN_PRINT",
"BLTIN_LIST_CONTENTS","BLTIN_GET_SIZE","BLTIN_CREATE","BLTIN_COPY",
"BLTIN_COMPARE","BLTIN_CONNECT_TO","BLTIN_DELETE","BLTIN_RENAME","BLTIN_MOVE",
"BLTIN_SORT","BLTIN_FILTRE_FILES","BLTIN_BACKUP","BLTIN_SYNCHRONIZE",
"BLTIN_SEARCH","BLTIN_CD","BLTIN_BACK_UP","BLTIN_DOWNLOAD","BLTIN_UPLOAD",
"BLTIN_OPEN","BLTIN_PROPERTIES","BLTIN_MOVE_BACK","BLTIN_MOVE_FORWARD",
"LESSEQ_OPT","GREATEREQ_OPT","NEQ_OPT","EQ_OPT","LESS_OPT","GREATER_OPT",
"ASSIGNMENT_OPT","MULTIPLY_ASSIGNMENT_OPT","DIVIDE_ASSIGNMENT_OPT",
"MODE_ASSIGNMENT_OPT","ADD_ASSIGNMENT_OPT","SUB_ASSIGNMENT_OPT",
"POW_ASSIGNMENT_OPT","INCREMENT_OPT","DECREMENT_OPT","DIVIDE_OPT","MODE_OPT",
"ADD_OPT","SUB_OPT","POW_OPT","MULTIPLY_OPT","INT_LTRL","FLT_LTRL",
"DOUBLE_LTRL","STR_LTRL","CHR_LTRL","IDNTF","GOTO","BITWISE_XOR","BITWISE_NOR",
"BITWISE_NOT","BITWISE_OR","BITWISE_AND","BITWISE_LEFTSHIFT",
"BITWISE_RIGHTSHIFT","SEMICOLON","LEFT_BRACKET","RIGHT_BRACKET","COMMA","COLON",
"LEFT_PARANTHESIS","RIGHT_PARANTHESIS","LEFT_SQ_BRACKET","RIGHT_SQ_BRACKET",
"NEW_LINE","WHITE_SPACE","UNKNOWN_CHAR","UNDER_SCORE","BACK_SLASH","ASTRIC",
"COMMENT",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : program",
"program : statement_list",
"statement_list : statement",
"statement_list : statement_list statement",
"statement : assignment SEMICOLON",
"statement : declaration SEMICOLON",
"statement : loop",
"statement : condition",
"statement : GOTO COLON flag SEMICOLON",
"statement : comment",
"statement : function_call SEMICOLON",
"statement : BREAK SEMICOLON",
"statement : CONTINUE SEMICOLON",
"statement : RETURN SEMICOLON",
"statement : RETURN IDNTF SEMICOLON",
"statement : RETURN factor SEMICOLON",
"function_call : FUNCTION return_type IDNTF LEFT_PARANTHESIS parameter_list RIGHT_PARANTHESIS block",
"return_type : data_type",
"parameter_list : empty",
"parameter_list : data_type IDNTF",
"parameter_list : parameter_list COMMA data_type IDNTF",
"parameter_list : VOID",
"block : LEFT_BRACKET statement_list RIGHT_BRACKET",
"block : LEFT_BRACKET empty RIGHT_BRACKET",
"declaration : data_type IDNTF",
"declaration : declaration assignment_operator RHS",
"declaration : ARRAY data_type IDNTF LEFT_SQ_BRACKET INT_LTRL RIGHT_SQ_BRACKET ASSIGNMENT_OPT LEFT_BRACKET factor_list RIGHT_BRACKET",
"factor_list : factor",
"factor_list : factor_list COMMA factor",
"RHS : arithmetic_expression",
"RHS : function_call",
"RHS : boolean_expression",
"function_call : IDNTF LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS",
"function_call : BLTIN_PRINT LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS",
"function_call : BLTIN_LIST_CONTENTS LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS",
"function_call : BLTIN_GET_SIZE LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS",
"function_call : BLTIN_CREATE LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS",
"function_call : BLTIN_COPY LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS",
"function_call : BLTIN_COMPARE LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS",
"function_call : BLTIN_CONNECT_TO LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS",
"function_call : BLTIN_DELETE LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS",
"function_call : BLTIN_RENAME LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS",
"function_call : BLTIN_MOVE LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS",
"function_call : BLTIN_SORT LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS",
"function_call : BLTIN_FILTRE_FILES LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS",
"function_call : BLTIN_BACK_UP LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS",
"function_call : BLTIN_SYNCHRONIZE LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS",
"function_call : BLTIN_SEARCH LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS",
"function_call : BLTIN_CD LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS",
"function_call : BLTIN_DOWNLOAD LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS",
"function_call : BLTIN_UPLOAD LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS",
"function_call : BLTIN_OPEN LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS",
"function_call : BLTIN_PROPERTIES LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS",
"function_call : BLTIN_MOVE_BACK LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS",
"function_call : BLTIN_MOVE_FORWARD LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS",
"identifier_list : empty",
"identifier_list : IDNTF",
"identifier_list : identifier_list COMMA IDNTF",
"identifier_list : factor",
"identifier_list : identifier_list COMMA factor",
"arithmetic_expression : factor",
"arithmetic_expression : arithmetic_expression ADD_OPT factor",
"arithmetic_expression : arithmetic_expression SUB_OPT factor",
"arithmetic_expression : arithmetic_expression MULTIPLY_OPT factor",
"arithmetic_expression : arithmetic_expression DIVIDE_OPT factor",
"arithmetic_expression : arithmetic_expression POW_OPT factor",
"arithmetic_expression : arithmetic_expression MODE_OPT factor",
"arithmetic_expression : arithmetic_expression BITWISE_LEFTSHIFT factor",
"arithmetic_expression : arithmetic_expression BITWISE_RIGHTSHIFT factor",
"arithmetic_expression : arithmetic_expression BITWISE_AND factor",
"arithmetic_expression : arithmetic_expression BITWISE_OR factor",
"arithmetic_expression : arithmetic_expression BITWISE_XOR factor",
"arithmetic_expression : arithmetic_expression BITWISE_NOR factor",
"arithmetic_expression : BITWISE_NOT arithmetic_expression",
"factor : INT_LTRL",
"factor : FLT_LTRL",
"factor : STR_LTRL",
"factor : CHR_LTRL",
"factor : DOUBLE_LTRL",
"assignment_operator : ASSIGNMENT_OPT",
"assignment_operator : MULTIPLY_ASSIGNMENT_OPT",
"assignment_operator : DIVIDE_ASSIGNMENT_OPT",
"assignment_operator : ADD_ASSIGNMENT_OPT",
"assignment_operator : SUB_ASSIGNMENT_OPT",
"assignment_operator : MODE_ASSIGNMENT_OPT",
"assignment_operator : POW_ASSIGNMENT_OPT",
"assignment : LHS assignment_operator RHS",
"assignment : LHS INCREMENT_OPT",
"assignment : LHS DECREMENT_OPT",
"LHS : IDNTF",
"LHS : IDNTF LEFT_SQ_BRACKET INT_LTRL RIGHT_SQ_BRACKET",
"loop : while_loop",
"loop : do_while_loop",
"loop : for_loop",
"while_loop : WHILE LEFT_PARANTHESIS boolean_expression RIGHT_PARANTHESIS block",
"do_while_loop : do_statement WHILE LEFT_PARANTHESIS boolean_expression RIGHT_PARANTHESIS SEMICOLON",
"do_statement : DO block",
"for_loop : FOR LEFT_PARANTHESIS for_statement RIGHT_PARANTHESIS block",
"for_statement : initialize SEMICOLON boolean_expression SEMICOLON assignment",
"initialize : declaration",
"initialize : assignment",
"condition : if_statement",
"condition : switch_statement",
"if_statement : IF LEFT_PARANTHESIS boolean_expression RIGHT_PARANTHESIS block",
"if_statement : IF LEFT_PARANTHESIS function_call RIGHT_PARANTHESIS block",
"if_statement : if_statement ELIF LEFT_PARANTHESIS boolean_expression RIGHT_PARANTHESIS block",
"if_statement : if_statement ELSE block",
"if_statement : IFNOT LEFT_PARANTHESIS boolean_expression RIGHT_PARANTHESIS block",
"boolean_expression : comparison",
"boolean_expression : IDNTF",
"boolean_expression : BLN_FALSE",
"boolean_expression : BLN_TRUE",
"boolean_expression : NOT_OPT IDNTF",
"comparison : boolean_expression relational_operators compared",
"comparison : boolean_expression boolean_operators compared",
"comparison : function_call relational_operators compared",
"compared : IDNTF",
"compared : BLN_FALSE",
"compared : BLN_TRUE",
"compared : NOT_OPT IDNTF",
"compared : factor",
"relational_operators : LESSEQ_OPT",
"relational_operators : GREATEREQ_OPT",
"relational_operators : NEQ_OPT",
"relational_operators : EQ_OPT",
"relational_operators : LESS_OPT",
"relational_operators : GREATER_OPT",
"boolean_operators : AND_OPT",
"boolean_operators : OR_OPT",
"boolean_operators : NOT_OPT",
"switch_statement : SWITCH LEFT_PARANTHESIS IDNTF RIGHT_PARANTHESIS LEFT_BRACKET case_statement RIGHT_BRACKET",
"switch_statement : SWITCH LEFT_PARANTHESIS IDNTF LEFT_SQ_BRACKET IDNTF RIGHT_SQ_BRACKET RIGHT_PARANTHESIS LEFT_BRACKET case_statement RIGHT_BRACKET",
"case_statement : CASE IDNTF COLON statement_list",
"case_statement : CASE factor COLON statement_list",
"case_statement : case_statement CASE IDNTF COLON statement_list",
"case_statement : case_statement CASE factor COLON statement_list",
"case_statement : case_statement DEFAULT COLON statement_list",
"data_type : CHAR",
"data_type : INT",
"data_type : FLOAT",
"data_type : BOOL",
"data_type : BYTE",
"data_type : STRING",
"data_type : DOUBLE",
"data_type : FE",
"data_type : DIRECTORY",
"data_type : LONG_INT",
"data_type : SHORT_INT",
"data_type : LONG_FLOAT",
"data_type : SHORT_FLOAT",
"data_type : LONG_DOUBLE",
"data_type : SHORT_DOUBLE",
"flag : UNDER_SCORE UNDER_SCORE IDNTF UNDER_SCORE UNDER_SCORE",
"comment : BACK_SLASH ASTRIC COMMENT ASTRIC BACK_SLASH",
"empty :",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 268 "project.y"
int main (void){
return yyparse();
}

void yyerror (char *s) {fprintf (stderr, "%s\n", s);}
#line 742 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
