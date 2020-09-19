#include <stdio.h>
#include <stdlib.h>

//true if c is a tab or space, and not zero
int space_char(char c)
 {
  if ( c == ' ' || c == '\t' || c == '\0')
    return 1;
  else
    return 0; }

// true if c is not a tab or space, and not zero
int non_space_char(char c)
{
  if ( c== ' ' || c == '\t' || c == '\0'){
    return 0;}
 
    return 1; 
}

// * to first (non-space) char in first word in s
char *word_start(char *str)
{
 int i =0;
 while(space_char(str[i])){
     i++; 
 }
 return str+i;
}


// * to char after end of word
char* word_terminator(char *word)
{
  int i = 0;
  while (non_space_char(word[i])){
      i++; 
    }
    return word+i; 


}
// the number of words in s

int count_words(char *s)
{
  int count = 0;
  int i = 0;
  int start = 0; 
  while (s[i] != EOF){
    if (word_start(s+i))
      {
      start = 1; }
    if (word_terminator(s+i) && start ==1){
      count++; 
      start = 0; 
    }
    i++; 
  }
  return count; 

}

