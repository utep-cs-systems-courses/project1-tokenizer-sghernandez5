#include <stdio.h>
#include <stdlib.h>

//true if c is a tab or space, and not zero
int space_char(char c)
 {
  if ( c == ' ' || c == '\t')
    return 1;
  else
    return 0; }

// true if c is not a tab or space, and not zero
int non_space_char(char c)
{
  if ( c!= ' ' || c != '\t')
    return 1;
  else
    return 0; 
}

// * to first (non-space) char in first word in s
char* word_start(char *str)
{
  int i =0;
  
  while(str[i] != EOF){ 
    if( non_space_char(str[i]))
      return *str[i];
    i++; 
      }
}


// * to char after end of word
//char *wordterminator(char *word);


// the number of words in s
//int count_words(char *s); 
