
// SlkParse.cpp - generated by the SLK parser generator 

#include "SlkParse.h"

static slk_size_t Production[] = {0

,2,28,29 ,3,29,30,66 ,3,30,43,87 ,3,31,44,87 ,3,32,45,87 
,3,33,46,87 ,3,34,47,87 ,3,35,48,87 ,3,36,49,87 
,3,37,50,87 ,3,38,51,87 ,3,39,52,87 ,3,40,53,87 
,3,41,54,87 ,3,42,55,87 ,3,43,44,67 ,3,44,45,68 
,3,45,46,69 ,3,46,47,70 ,3,47,48,71 ,3,48,49,72 
,3,49,50,73 ,3,50,51,74 ,3,51,52,75 ,3,52,53,76 
,3,53,54,77 ,3,54,55,78 ,3,55,57,79 ,3,56,57,87 
,3,57,93,58 ,2,58,80 ,4,58,94,60,95 ,5,59,64,96,81,82 
,3,60,62,83 ,2,60,61 ,5,61,97,14,29,15 ,4,61,98,16,99 
,6,62,100,17,29,18,84 ,6,62,102,19,29,20,85 ,5,62,103,21,63,86 
,8,63,104,93,94,64,105,95,87 ,5,63,106,17,29,18 ,5,63,107,19,29,20 
,5,63,108,14,29,15 ,3,64,22,89 ,3,64,23,109 ,3,64,24,110 
,2,65,25 ,2,65,26 ,4,66,65,30,66 ,1,66 ,7,67,88,1,89,90,31,67 
,1,67 ,11,68,88,2,89,91,32,2,89,92,32,68 ,1,68 
,7,69,88,3,89,90,33,69 ,1,69 ,7,70,88,4,89,90,34,70 
,1,70 ,7,71,88,5,89,90,35,71 ,1,71 ,7,72,88,6,89,90,36,72 
,1,72 ,7,73,88,7,89,90,37,73 ,1,73 ,7,74,88,8,89,90,38,74 
,1,74 ,7,75,88,9,89,90,39,75 ,1,75 ,7,76,88,10,89,90,40,76 
,1,76 ,7,77,88,11,89,90,41,77 ,1,77 ,7,78,88,12,89,90,42,78 
,1,78 ,7,79,88,13,89,90,56,79 ,1,79 ,5,80,94,59,95,80 
,1,80 ,2,81,62 ,1,81 ,2,82,61 ,1,82 ,2,83,61 ,1,83 
,3,84,101,62 ,1,84 ,3,85,101,62 ,1,85 ,3,86,101,62 
,1,86 
,0};

static slk_size_t Production_row[] = {0

,1,4,8,12,16,20,24,28,32,36,40,44,48,52,56,60
,64,68,72,76,80,84,88,92,96,100,104,108,112,116,120,123
,128,134,138,141,147,152,159,166,172,181,187,193,199,203,207,211
,214,217,222,224,232,234,246,248,256,258,266,268,276,278,286,288
,296,298,306,308,316,318,326,328,336,338,346,348,356,358,364,366
,369,371,374,376,379,381,385,387,391,393,397
,0};

static slk_size_t Parse[] = {

0,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2
,2,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,3
,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,4,4,4
,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4
,4,4,4,4,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5
,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6,6,6,6,6,6
,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,7,7
,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7
,7,7,7,7,7,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8
,8,8,8,8,8,8,8,8,8,8,8,8,9,9,9,9,9,9,9,9
,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,10
,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10
,10,10,10,10,10,10,11,11,11,11,11,11,11,11,11,11,11,11,11,11
,11,11,11,11,11,11,11,11,11,11,11,11,11,12,12,12,12,12,12,12
,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12
,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13
,13,13,13,13,13,13,13,14,14,14,14,14,14,14,14,14,14,14,14,14
,14,14,14,14,14,14,14,14,14,14,14,14,14,14,15,15,15,15,15,15
,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15
,15,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16
,16,16,16,16,16,16,16,16,17,17,17,17,17,17,17,17,17,17,17,17
,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,18,18,18,18,18
,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18
,18,18,19,19,19,19,19,19,19,19,19,19,19,19,19,19,19,19,19,19
,19,19,19,19,19,19,19,19,19,20,20,20,20,20,20,20,20,20,20,20
,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,21,21,21,21
,21,21,21,21,21,21,21,21,21,21,21,21,21,21,21,21,21,21,21,21
,21,21,21,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22
,22,22,22,22,22,22,22,22,22,22,23,23,23,23,23,23,23,23,23,23
,23,23,23,23,23,23,23,23,23,23,23,23,23,23,23,23,23,24,24,24
,24,24,24,24,24,24,24,24,24,24,24,24,24,24,24,24,24,24,24,24
,24,24,24,24,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25
,25,25,25,25,25,25,25,25,25,25,25,26,26,26,26,26,26,26,26,26
,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,27,27
,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27
,27,27,27,27,27,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28
,28,28,28,28,28,28,28,28,28,28,28,28,29,29,29,29,29,29,29,29
,29,29,29,29,29,29,29,29,29,29,29,29,29,29,29,29,29,29,29,30
,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30
,30,30,30,30,30,30,31,31,31,31,31,31,31,31,31,31,31,31,31,32
,31,32,32,31,32,31,32,31,31,31,31,31,31,81,81,81,81,81,81,81
,81,81,81,81,81,81,81,81,81,80,81,80,81,80,81,81,81,81,81,81
,87,87,87,87,87,87,87,87,87,87,87,87,87,87,87,87,86,87,86,87
,86,87,87,87,87,87,87,89,89,89,89,89,89,89,89,89,89,89,89,89
,89,89,89,88,89,88,89,88,89,89,89,89,89,89,91,91,91,91,91,91
,91,91,91,91,91,91,91,91,91,91,90,91,90,91,90,91,91,91,91,91
,91,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,36,1
,37,1,1,1,1,1,1,1,83,83,83,83,83,83,83,83,83,83,83,83
,83,82,83,82,38,83,39,83,40,83,83,83,83,83,83,79,79,79,79,79
,79,79,79,79,79,79,79,79,35,79,35,34,79,34,79,34,78,78,78,79
,79,79,85,85,85,85,85,85,85,85,85,85,85,85,85,84,85,84,0,85
,0,85,33,33,33,0,85,85,85,77,77,77,77,77,77,77,77,77,77,77
,77,76,44,77,0,42,77,43,77,0,41,41,41,77,77,77,75,75,75,75
,75,75,75,75,75,75,75,74,48,49,75,0,0,75,0,75,45,46,47,0
,75,75,75,73,73,73,73,73,73,73,73,73,73,72,0,0,0,73,0,0
,73,0,73,0,0,0,52,73,73,73,71,71,71,71,71,71,71,71,71,70
,53,0,0,53,71,53,0,71,0,71,53,53,53,0,71,71,71,69,69,69
,69,69,69,69,69,68,0,51,0,0,51,69,51,0,69,0,69,50,50,51
,0,69,69,69,67,67,67,67,67,67,67,66,0,0,0,0,0,0,67,0
,0,67,0,67,0,0,0,0,67,67,67,65,65,65,65,65,65,64,0,0
,0,0,0,0,0,65,0,0,65,0,65,0,0,0,0,65,65,65,63,63
,63,63,63,62,0,0,0,0,0,0,0,0,63,0,0,63,0,63,0,0
,0,0,63,63,63,61,61,61,61,60,0,0,0,0,0,0,0,0,0,61
,0,0,61,0,61,59,59,59,58,61,61,61,0,0,0,0,0,0,0,59
,0,0,59,0,59,57,57,56,0,59,59,59,0,0,0,0,0,0,0,57
,55,54,57,0,57,0,0,0,0,57,57,57,0,0,55,0,0,55,0,55
,0,0,0,0,55,55,55
};

static slk_size_t Parse_row[] = {0

,919,1,28,55,82,109,136,163,190,217,244,271,298,325,352,379
,406,433,460,487,514,541,568,595,622,649,676,703,730,757,784,999
,973,923,946,1027,1053,1042,1131,1104,1298,1283,1263,1243,1216,1189,1162,1135
,1108,1081,1054,1027,973,811,946,1000,838,865,892
,0};

static slk_size_t Conflict[] = {

0
};

static slk_size_t Conflict_row[] = {0


,0};

#define GET_CONDITIONAL_PRODUCTION( symbol )  0 
#define get_predicted_entry( a,b,c,d,e )  0 

#define START_SYMBOL 28
#define END_OF_SLK_INPUT_ 27
#define START_STATE 0
#define START_CONFLICT 92
#define END_CONFLICT 92
#define START_ACTION 87
#define END_ACTION 111
#define TOTAL_CONFLICTS 0
#define PARSE_STACK_SIZE 512
#define SLK_PUSH(symbol,stack,top) if ( top > stack ) *--top = symbol
#define SLK_POP(top)   (*top ? *top++ : 0)

#define peek(self,a)            self.peek(a)
#define get(self)               self.get()
#define mismatch(self,a,b)      self.mismatch(a,b)
#define no_entry(self,a,b,c)    self.no_entry(a,b,c)
#define input_left(self)        self.input_left()
#define message(self,a)         self.message(a)
#define predict(self,a)         self.predict(a)
#define reduce(self,a)          self.reduce(a)
#define state(self,a)           self.state(a)
#define execute(self,a)         self.execute(a)

#define NOT_A_SYMBOL       0
#define NONTERMINAL_SYMBOL 1
#define TERMINAL_SYMBOL    2
#define ACTION_SYMBOL      3

int SlkGetSymbolType ( slk_size_t symbol )
{
   int   symbol_type = NOT_A_SYMBOL;

   if ( symbol >= START_ACTION  &&  symbol < END_ACTION ) {
       symbol_type = ACTION_SYMBOL;
   } else if ( symbol >= START_SYMBOL ) {
       symbol_type = NONTERMINAL_SYMBOL;
   } else if ( symbol > 0 ) {
       symbol_type = TERMINAL_SYMBOL;
   }
   return  symbol_type;
}

slk_size_t *SlkGetProductionArray ( slk_size_t   production_number )
{
    return   &Production [ Production_row [production_number] ];
}

int SlkIsNonterminal ( slk_size_t symbol )
{
   return ( symbol >= START_SYMBOL  &&  symbol < START_ACTION );
}

int SlkIsTerminal ( slk_size_t symbol )
{
   return ( symbol > 0  &&  symbol < START_SYMBOL );
}

int SlkIsAction ( slk_size_t symbol )
{
   return ( symbol >= START_ACTION  &&  symbol < END_ACTION );
}

void SlkParse ( SlkAction  &action, 
                SlkToken   &tokens, 
                SlkError   &error, 
                slk_size_t  start_symbol ) 
{
 register
 slk_size_t  *top, *production;
 slk_size_t   production_number, entry, symbol, token, new_token;
 int          production_length, index, level;
 slk_size_t   stack [ PARSE_STACK_SIZE ];

 top = stack + (PARSE_STACK_SIZE-1);
 *top = 0;
 if ( ! start_symbol ) {
     start_symbol = START_SYMBOL;
 }
 SLK_PUSH ( start_symbol, stack, top );
 token = get(tokens);
 new_token = token;

 for ( symbol = SLK_POP ( top );  symbol;  ) {

     if ( symbol >= START_ACTION ) {
         execute ( action, (symbol-(START_ACTION-1)) );

     } else if ( symbol >= START_SYMBOL ) {
         entry = 0;
         level = 1;
         production_number = GET_CONDITIONAL_PRODUCTION ( symbol );
         if ( production_number ) {
             entry = get_predicted_entry ( tokens,
                                           production_number, token,
                                           level, 1 );
         }
         if ( ! entry ) {
             index = Parse_row [symbol - (START_SYMBOL-1)];
             index += token;
             entry = Parse [ index ];
         }
         while ( entry >= START_CONFLICT ) {
             index = Conflict_row [entry - (START_CONFLICT -1)];
             index += peek (tokens, level);
             entry = Conflict [ index ];
             ++level;
         }
         if ( entry ) {
             production = &Production [ Production_row [entry] ];
             production_length = *production - 1;
             if ( *++production == symbol ) {
                 predict ( action, entry );
                 production += production_length;
                 for (;  production_length-- > 0;  --production ) {
                     SLK_PUSH ( *production, stack, top );
                 }
             } else {
                 new_token = no_entry ( error, symbol, token, level-1 );
             }
         } else {
             new_token = no_entry ( error, symbol, token, level-1 );
         }
     } else if ( symbol > 0 ) {
         if ( symbol == token ) {
             token = get(tokens);
             new_token = token;
         } else {
             new_token = mismatch ( error, symbol, token );
         }
     }
     if ( token != new_token ) {
         if ( new_token ) {
             token = new_token;
         }
         if ( token != END_OF_SLK_INPUT_ ) {
             continue;
         }
     }
     symbol = SLK_POP ( top );
 }
 if ( token != END_OF_SLK_INPUT_ ) {
     input_left ( error );
 }
}

