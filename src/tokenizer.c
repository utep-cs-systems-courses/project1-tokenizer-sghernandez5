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
  char* ps = s;
  
  while (*ps != '\0'){
    // assign ps to the returned pointer to the beg of a word
    ps = word_start(ps);
    // assign ps to the retuned pointer to the end of a word
    ps = word_terminator(ps);
    // this means we increment count
    count++;
    } 
 
  return count; 

}

