program : statment_list
		;
statement_list : 
			     statement; statement_list
			   | statement
			   ;

statement : assignment SEMICOLON
		  | declaration SEMICOLON
		  | loop
		  | condition
		  | GOTO COLON flag SEMICOLO
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

arithmetic_expression 	: term
						| arithmetic_expression ADD_OPT term
						| arithmetic_expression SUB_OPT term
						;

term 	: factor
		| term MULTIPLY_OPT factor
		| term DIVIDE_OPT factor
		| term POW_OPT factor
		| term MODE_OPT factor
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
					| XOR_OPT
					| NOR_OPT
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