
// SlkTerminals.h - generated by the SLK parser generator 

// Declaration of terminals values as int, can be used to seed the symbol table with terminals

#ifndef _SlkTERMINALS_H
#define _SlkTERMINALS_H

#include "SlkConstants.h" 

typedef struct _Slk_terminal { 
    slk_size_t  token;
    char  *name;
} Slk_terminal_t;

static Slk_terminal_t Slk_terminal [] = { 
 { OP_TOKEN_0_, "OP_TOKEN_0" } 
,{ OP_TOKEN_1_, "OP_TOKEN_1" } 
,{ OP_TOKEN_2_, "OP_TOKEN_2" } 
,{ OP_TOKEN_3_, "OP_TOKEN_3" } 
,{ OP_TOKEN_4_, "OP_TOKEN_4" } 
,{ OP_TOKEN_5_, "OP_TOKEN_5" } 
,{ OP_TOKEN_6_, "OP_TOKEN_6" } 
,{ OP_TOKEN_7_, "OP_TOKEN_7" } 
,{ OP_TOKEN_8_, "OP_TOKEN_8" } 
,{ OP_TOKEN_9_, "OP_TOKEN_9" } 
,{ OP_TOKEN_10_, "OP_TOKEN_10" } 
,{ OP_TOKEN_11_, "OP_TOKEN_11" } 
,{ OP_TOKEN_12_, "OP_TOKEN_12" } 
,{ OP_TOKEN_13_, "OP_TOKEN_13" } 
,{ OP_TOKEN_14_, "OP_TOKEN_14" } 
,{ OP_TOKEN_15_, "OP_TOKEN_15" } 
,{ OP_TOKEN_16_, "OP_TOKEN_16" } 
,{ LBRACE_, "{" } 
,{ RBRACE_, "}" } 
,{ SCRIPT_CONTENT_, "SCRIPT_CONTENT" } 
,{ LPAREN_, "(" } 
,{ RPAREN_, ")" } 
,{ LBRACK_, "[" } 
,{ RBRACK_, "]" } 
,{ DOT_, "." } 
,{ QUESTION_PERIOD_, "QUESTION_PERIOD" } 
,{ QUESTION_PARENTHESIS_, "QUESTION_PARENTHESIS" } 
,{ QUESTION_BRACKET_, "QUESTION_BRACKET" } 
,{ QUESTION_BRACE_, "QUESTION_BRACE" } 
,{ POINTER_, "POINTER" } 
,{ PERIOD_STAR_, "PERIOD_STAR" } 
,{ QUESTION_PERIOD_STAR_, "QUESTION_PERIOD_STAR" } 
,{ POINTER_STAR_, "POINTER_STAR" } 
,{ IDENTIFIER_, "IDENTIFIER" } 
,{ STRING_, "STRING" } 
,{ NUMBER_, "NUMBER" } 
,{ COMMA_, "," } 
,{ SEMI_, ";" } 
,{ END_OF_SLK_INPUT_, "END_OF_SLK_INPUT" } 
,{ 0, 0 } 
}; 


#endif
