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
extern YYSTYPE yylval;
