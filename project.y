%{
	void yyerror (char *s);
	#include<stdio.h>
%}

%union{  // Later to be diccussed
	float			float_val;
	bool			bool_val;
	char			char_val;
	byte			byte_val;
	double			double_val;
}

%start program

%token INT FLOAT BOOL VOID CHAR ARRAY BYTE STRING DOUBLE FILE DIRECTORY
%token LONG_INT SHORT_INT LONG_FLOAT SHORT_FLOAT LONG_DOUBLE SHORT_DOUBLE
%token BLN_FALSE BLN_TRUE AND_OPT OR_OPT NOT_OPT IF ELSE SWITCH CASE DEFAULT ELIF IFNOT WHILE DO BREAK
%token CONTINUE FOR FUNCTION RETURN BLTIN_PRINT BLTIN_LIST_CONTENTS BLTIN_GET_SIZE
%token BLTIN_CREATE BLTIN_COPY BLTIN_COMPARE BLTIN_CONNECT_TO BLTIN_DELETE BLTIN_RENAME BLTIN_MOVE
%token BLTIN_SORT BLTIN_FILTRE_FILES BLTIN_BACKUP BLTIN_SYNCHRONIZE BLTIN_SEARCH BLTIN_CD
%token BLTIN_DOWNLOAD BLTIN_UPLOAD BLTIN_OPEN BLTIN_PROPERTIES BLTIN_MOVE_BACK BLTIN_MOVE_FORWARD
%token LESSEQ_OPT GREATEREQ_OPT NEQ_OPT EQ_OPT LESS_OPT GREATER_OPT ASSIGNMENT_OPT
%token MULTIPLY_ASSIGNMENT_OPT DIVIDE_ASSIGNMENT_OPT MODE_ASSIGNMENT_OPT ADD_ASSIGNMENT_OPT
%token SUB_ASSIGNMENT_OPT POW_ASSIGNMENT_OPT INCREMENT_OPT DECREMENT_OPT
%token DIVIDE_OPT MODE_OPT ADD_OPT SUB_OPT POW_OPT MULTIPLY_OPT
%token INT_LTRL FLT_LTRL DOUBLE_LTRL STR_LTRL CHR_LTRL IDNTF
%token BITWISE_XOR BITWISE_NOR BITWISE_NOT BITWISE_OR BITWISE_AND BITWISE_LEFTSHIFT BITWISE_RIGHTSHIFT 
%token SEMICOLON LEFT_BRACKET RIGHT_BRACKET COMMA COLON LEFT_PARANTHESIS RIGHT_PARANTHESIS
%token LEFT_SQ_BRACKET RIGHT_SQ_BRACKET NEW_LINE WHITE_SPACE UNKNOWN_CHAR

/* Binary operators's precedence */
%left  BITWISE_NOR
%left  BITWISE_OR
%left  BITWISE_XOR
%left  BITWISE_AND
%left  BITWISE_LEFTSHIFT BITWISE_RIGHTSHIFT
%left  ADD_OPT SUB_OPT
%left  DIVIDE_OPT MODE_OPT MULTIPLY_OPT 
%right POW_OPT
%right BITWISE_NOT


%%
program : statment_list ;
statement_list : statement | statement_list statement ;

statement : assignment SEMICOLON
		  | declaration SEMICOLON
		  | loop
		  | condition
		  | GOTO COLON flag SEMICOLON
		  | comment
		  | function_call SEMICOLON
		  | BREAK SEMICOLON
		  | CONTINUE SEMICOLON
		  | RETURN SEMICOLON
		  | RETURN IDNTF SEMICOLON
		  | RETURN factor SEMICOLON
		  ;

function : FUNCTION return_type IDNTF LEFT_PARANTHESIS parameter_list RIGHT_PARANTHESIS block
		 ;

return_type : data_type		
		    ;

parameter_list : empty 
			   | data_type IDNTF
			   | parameter_list COMMA data_type IDNTF
			   | VOID
			   ;

block : LEFT_BRACKET statement_list RIGHT_BRACKET
	  | LEFT_BRACKET empty RIGHT_BRACKET
	  ;

declaration : data_type IDNTF 
			| declaration assignment_operator RHS
			| ARRAY data_type IDNTF LEFT_SQ_BRACKET INT_LTRL RIGHT_SQ_BRACKET ASSIGNMENT_OPT LEFT_BRACKET factor_list RIGHT_BRACKET
			;

factor_list : factor
			| factor_list COMMA factor
			;

RHS : arithmetic_expression
	| function_call
	| boolean_expression
	;

function_call 	: IDNTF LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS
			  	| BLTIN_PRINT LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS
				| BLTIN_LIST_CONTENTS LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS
				| BLTIN_GET_SIZE LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS
				| BLTIN_CREATE LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS
				| BLTIN_COPY LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS
				| BLTIN_COMPARE LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS
				| BLTIN_CONNECT_TO LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS
				| BLTIN_DELETE LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS
				| BLTIN_RENAME LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS
				| BLTIN_MOVE LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS
				| BLTIN_SORT LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS
				| BLTIN_FILTRE_FILES LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS
				| BLTIN_BACK_UP LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS
				| BLTIN_SYNCHRONIZE LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS
				| BLTIN_SEARCH LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS
				| BLTIN_CD LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS
				| BLTIN_DOWNLOAD LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS
				| BLTIN_UPLOAD LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS
				| BLTIN_OPEN LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS
				| BLTIN_PROPERTIES LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS
				| BLTIN_MOVE_BACK LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS
				| BLTIN_MOVE_FORWARD LEFT_PARANTHESIS identifier_list RIGHT_PARANTHESIS
		;
identifier_list : empty 
				| IDNTF 
				| identifier_list COMMA IDNTF
				| factor
				| identifier_list COMMA factor
				;

arithmetic_expression 	: factor
						| arithmetic_expression ADD_OPT factor
						| arithmetic_expression SUB_OPT factor
						| arithmetic_expression MULTIPLY_OPT factor
						| arithmetic_expression DIVIDE_OPT factor
						| arithmetic_expression POW_OPT factor
						| arithmetic_expression MODE_OPT factor
						| arithmetic_expression BITWISE_LEFTSHIFT factor
						| arithmetic_expression BITWISE_RIGHTSHIFT factor
						| arithmetic_expression BITWISE_AND factor
						| arithmetic_expression BITWISE_OR factor
						| arithmetic_expression BITWISE_XOR factor
						| arithmetic_expression BITWISE_NOR factor
						| BITWISE_NOT arithmetic_expression  
						;

factor 	: INT_LTRL
		| FLT_LTRL 
		| STR_LTRL
		| CHR_LTRL
		| DOUBLE_LTRL	
		;

assignment_operator : ASSIGNMENT_OPT 
					| MULTIPLY_ASSIGNMENT_OPT 
					| DIVIDE_ASSIGNMENT_OPT 
					| ADD_ASSIGNMENT_OPT 
					| SUB_ASSIGNMENT_OPT 
					| MODE_ASSIGNMENT_OPT
					| POW_ASSIGNMENT_OPT
					;

assignment 	: LHS assignment_operator RHS
			| LHS INCREMENT_OPT 
			| LHS DECREMENT_OPT
			;

LHS : IDNTF
	| IDNTF LEFT_SQ_BRACKET INT_LTRL RIGHT_SQ_BRACKET
	;

loop 	: while_loop
		| do_while_loop 
		| for_loop
		;

while_loop : WHILE LEFT_PARANTHESIS boolean_expression RIGHT_PARANTHESIS block 
		   ;

do_while_loop : do_statement WHILE LEFT_PARANTHESIS boolean_expression RIGHT_PARANTHESIS SEMICOLON
			  ;

do_statement : DO block
			 ;

for_loop : FOR LEFT_PARANTHESIS for_statement RIGHT_PARANTHESIS block
		 ;

for_statement : initialize SEMICOLON boolean_expression SEMICOLON assignment
			  ;

initialize 	: declaration
			| assignment
			;

condition 	: if_statement
			| switch_statement
			;

if_statement 	: IF LEFT_PARANTHESIS boolean_expression RIGHT_PARANTHESIS block
				| IF LEFT_PARANTHESIS function_call RIGHT_PARANTHESIS block
				| if_statement ELIF LEFT_PARANTHESIS boolean_expression RIGHT_PARANTHESIS block
				| if_statement ELSE block
				| IFNOT LEFT_PARANTHESIS boolean_expression RIGHT_PARANTHESIS block
				;

boolean_expression 	: comparison
					| IDNTF
					| BLN_FALSE 
					| BLN_TRUE
					| NOT_OPT IDNTF
					;

comparison 	: boolean_expression relational_operators compared
			| boolean_expression boolean_operators compared
			| function_call relational_operators compared
			;

compared	: IDNTF
			| BLN_FALSE 
			| BLN_TRUE
			| NOT_OPT IDNTF
			| factor
			;

relational_operators 	: LESSEQ_OPT
						| GREATEREQ_OPT 
						| NEQ_OPT 
						| EQ_OPT 
						| LESS_OPT 
						| GREATER_OPT
						;

boolean_operators 	: AND_OPT 
					| OR_OPT 
					| NOT_OPT
					;

switch_statement : SWITCH LEFT_PARANTHESIS IDNTF RIGHT_PARANTHESIS LEFT_BRACKET case_statement 							RIGHT_BRACKET 
				 | SWITCH LEFT_PARANTHESIS IDNTF LEFT_SQ_BRACKET IDNTF RIGHT_SQ_BRACKET RIGHT_PARANTHESIS LEFT_BRACKET case_statement RIGHT_BRACKET 
				 ;

case_statement 	: CASE IDNTF COLON statement_list
				| CASE factor COLON statement_list
				| case_statement CASE IDNTF COLON statement_list
				| case_statement CASE factor COLON statement_list
			    | case_statement DEFAULT COLON statement_list
				;

data_type 	: CHAR 
			| INT 
			| FLOAT 
			| BOOL
			| BYTE
			| STRING
			| DOUBLE
			| FILE
			| DIRECTORY
			| LONG_INT
			| SHORT_INT
			| LONG_FLOAT
			| SHORT_FLOAT
			| LONG_DOUBLE
			| SHORT_DOUBLE
			;

flag : 	UNDER_SCORE UNDER_SCORE IDNTF UNDER_SCORE UNDER_SCORE
	 ;

comment : BACK_SLASH ASTRIC COMMENT ASTRIC BACK_SLASH
		;

empty : /* empty */
	  ;
%%
int main (void){
return yyparse();
}

void yyerror (char *s) {fprintf (stderr, "%s\n", s);}