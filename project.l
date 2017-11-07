/* Project.l */
/* FOR LATTER DISCUSS             Long_float Short_double*/
%{
#include "y.tab.h"
%}
Digit [0-9]
Letter [a-zA-Z]
INT_LTRL [\-+]?{Digit}+ 				
FLT_LTRL [\-+]?{Digit}*"."{Digit}+		
STR_LTRL \"(\\.|[^\\"])*\"				
CHR_LTRL \'(\\.|[^\\'])+\'				
IDNTF {Letter}({Digit}|{Letter})*	
NEW_LINE (\r|\n|\r\n)				
WHITE_SPACE [ \t\v\f]+
COMM \/\*.*?\*\/
%option yylineno
%%
({WHITE_SPACE}) ;
({NEW_LINE}) ;
 /* Data Types */
int		  {
            return (INT);
    }
float    {
            return (FLOAT);
}						
bool	{
            return (BOOL);
}					
void    {
            return (VOID);
}						
char	{
            return (CHAR);
}					
array   {
            return (ARRAY);
}
byte	{
            return (BYTE);
}					
String  {
            return (STRING);
}
double  {
            return (DOUBLE);
}					
file	{
            return (FE);
}					
directory {
            return (DIRECTORY);
}					
long_int  {
            return (LONG_INT);
}			
short_int {
            return (SHORT_INT);
}					
short_float {
            return (SHORT_FLOAT);
}					
long_double	{
            return (LONG_DOUBLE);
}
 /* Boolean Literals */
false       {
            return (BLN_FALSE);
}
true        {
            return (BLN_TRUE);
}      		
 /* Boolean Operators */
\&\&	    {
            return (AND_OPT);
}
\|\|        {
            return (OR_OPT);
}						
\!          {
            return (NOT_OPT);
}
 /* Conditionals */
if				 {
            return (IF);
}
else			 {
            return (ELSE);
}
switch		 {
           return (SWITCH);
}
case			 {
           return (CASE);
}
default	    {
           return (DEFAULT);
}
elif        {
          return (ELIF);
}
ifnot			  {
          return (IFNOT);
}
 /* Loops */
while					{
             return (WHILE);
}	
do						{
             return (DO);
}
break					{
             return (BREAK);
}
continue		 {
             return (CONTINUE);
}
for						{
             return (FOR);
}
 /* Built-in Functions */
print				         {
                     return (BLTIN_PRINT);
}
listContents         {
                     return (BLTIN_LIST_CONTENTS);
}                     
getSize              {
                     return (BLTIN_GET_SIZE);
} 
create               {
                     return (BLTIN_CREATE); 
}
copy                 {
                     return (BLTIN_COPY);
}
compare              {
                     return (BLTIN_COMPARE); 
}
connectTO            {
                     return (BLTIN_CONNECT_TO);
}
delete                {
                     return (BLTIN_DELETE); 
}
rename               {
                     return (BLTIN_RENAME);
}
move                 {
                     return (BLTIN_MOVE); 
}
sort                 {
                     return (BLTIN_SORT); 
}
filtreFiles          {
                     return (BLTIN_FILTRE_FILES); 
}
backup               {
                    return (BLTIN_BACK_UP); 
}
synchronize          { 
                    return  (BLTIN_SYNCHRONIZE);
}   
search               {
                     return (BLTIN_SEARCH);
}  
cd                    {
                     return (BLTIN_CD); 
}
download              {
                     return (BLTIN_DOWNLOAD); 
}
upload                {
                      return (BLTIN_UPLOAD); 
}
open                  {
                      return (BLTIN_OPEN); 
}
properties            {
                      return (BLTIN_PROPERTIES); 
}
moveBack              {
                      return (BLTIN_MOVE_BACK); 
}
moveForward           {
                      return (BLTIN_MOVE_FORWARD);
}
goto		     {
			return (GOTO);
}
 /* Relational Operators */
\<\=						{
                return (LESSEQ_OPT);
}
\>\=						{
                return (GREATEREQ_OPT);
}
\!\=						{
                return (NEQ_OPT);
}
\=\=						{
                return (EQ_OPT);
                }
\<						  {
                return (LESS_OPT);
}
\>						  {
                return (GREATER_OPT);
}
 /* Assignment Operators */
\=					   {
               return (ASSIGNMENT_OPT);
}
\=\*					 {
               return (MULTIPLY_ASSIGNMENT_OPT);
}
\=\/					 {
               return (DIVIDE_ASSIGNMENT_OPT);
}
\=\%					 {
              return (MODE_ASSIGNMENT_OPT);
}
\=\+					{
              return (ADD_ASSIGNMENT_OPT);
}
\=\-					{
              return (SUB_ASSIGNMENT_OPT);
}
\=\^					{
              return (POW_ASSIGNMENT_OPT);
}
 /* Unary Operators */
\+\+						{
              return (INCREMENT_OPT);
}
\-\-					 {
               return (DECREMENT_OPT);
}
 /* Binary Operators */
\*						{
              return (MULTIPLY_OPT);
}
\/						{
              return (DIVIDE_OPT);
}
\%						{
              return (MODE_OPT);
}
\+						{
              return (ADD_OPT);
}
\-						{
              return (SUB_OPT);
}
\^						{
              return (POW_OPT);
}
\$           {
              return (BITWISE_XOR);
}
\#           {
             return (BITWISE_NOR);
}
\~           {
             return (BITWISE_NOT);
}
\|           {
             return (BITWISE_OR);
}
\&          {
             return (BITWISE_AND);
}
\<\<        {
             return (BITWISE_LEFTSHIFT);
} 
\>\>        {
            return(BITWISE_RIGHTSHIFT);
}
 /* Literals and Identifiers */
\;					{
            return (SEMICOLON);
}
\{					{
            return (LEFT_BRACKET);
}
\}					{
            return (RIGHT_BRACKET);
}
\,					{
            return (COMMA);
}
\:					{
            return (COLON);
}
\(					{
            return (LEFT_PARANTHESIS);
}
\)					{
            return (RIGHT_PARANTHESIS);
}
\[					{
            return (LEFT_SQ_BRACKET);
}
\]					{
            return (RIGHT_SQ_BRACKET);
}
\_					{
	    return (UNDER_SCORE);
}
({IDNTF}) {
            return (IDNTF);
          }
({INT_LTRL}) {
            return (INT_LTRL);
          } 
({FLT_LTRL}) {
            return (FLT_LTRL);
          }
({STR_LTRL}) {
            return (STR_LTRL);
          }
({CHR_LTRL}) {
            return (CHR_LTRL);
          }
({COMM}) {
	return (COMMENT);
}
 /* UNKNOWN_CHAR */
.					{
          return (UNKNOWN_CHAR);
}
%%
int yywrap (void) {return 1;}
void yyerror (char *s) {printf("the line num is %s",yylineno);}
