/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 6 "project.y" /* yacc.c:1909  */
  // Later to be diccussed
	float			float_val;
	int				int_val; //C has not bool type
	char			char_val;
	char			byte_val; // C has no byte type
	double			double_val;
	char[30] 		string_val;

#line 287 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
