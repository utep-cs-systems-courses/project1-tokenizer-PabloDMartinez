#include<stdlib.h>
#include<stdio.h>
#include"tokenizer.h"

/* Return true (non-zero) if c is a whitespace characer
   ('\t' or ' ').  
   Zero terminators are not printable (therefore false) */
int space_char(char c){
  if(c == " " || c == "\t"){
    return 1;
  }
  else{
    return 0;
  }
}

/* Return true (non-zero) if c is a non-whitespace 
   character (not tab or space).  
   Zero terminators are not printable (therefore false) */ 
int non_space_char(char c){
  if(c == " "|| c == "\t" || '\0'){
    return 0;
  }
  else{
    return 1;
  }
}

/* Returns a pointer to the first character of the next 
   space-separated word in zero-terminated str.  Return a zero pointer if 
   str does not contain any words. */
char *word_start(char *str){
  *str = NULL;
  int *startPos = NULL;
  if(space_char(c) == 1)
    *str++;
  else if((non_space_char(c))==1){
    *startPos = *str;
    return *startPos;
  }
} 

/* Returns a pointer terminator char following *word */
char *word_terminator(char *word){
  *word = *word_start(*str);
  int *endPos = *startPos;
  if((non_space_char(c)) == 1){
    *word++;
  }
  else if((space_char(c))==1){
    *word--;
    *endPos = *word;
    return *endPos;
  }
}

/* Counts the number of words in the string argument. */
int count_words(char *str){
  
}

/* Returns a fresly allocated new zero-terminated string 
   containing <len> chars from <inStr> */
char *copy_str(char *inStr, short len);

/* Returns a freshly allocated zero-terminated vector of freshly allocated 
   space-separated tokens from zero-terminated str.

   For example, tokenize("hello world string") would result in:
     tokens[0] = "hello"
     tokens[1] = "world"
     tokens[2] = "string" 
     tokens[3] = 0
*/
char **tokenize(char* str);

/* Prints all tokens. */
void print_tokens(char **tokens);

/* Frees all tokens and the vector containing themx. */
void free_tokens(char **tokens);
