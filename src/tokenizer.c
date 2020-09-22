#include <stdio.h>
#include <stdlib.h>

//true if c is a tab or space, and not zero
int space_char(char c)
{
  if ( c == ' ' || c == '\t' || c == '\0')
    return 1;
  else
    return 0;
}

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
char *word_terminator(char *word)
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

// returns a freshly allocated new zero-terminated string containing <len> chars from <inStr>

char *copy_str(char *inStr, short len)
{
  // allocate size, for the string char is of 1 byte
  // len+1 ( including '\0') 
  char *s =  (char*) malloc(sizeof(char)* (len+1));
  // error of memory allocation
  if (s == NULL) printf("ERROR");
  int i =0;
  for (i=0; i < len; i++){
    s[i] = inStr[i]; 
  }
  // to add '\0' at the end 
  s[i] = '\0';
  return s; 
}

// return a freshly allocated zero-terminated vector of
// freshly allocated space-separated tokensfrom zero-terminated str.
// ex tokens[0] = "hello"

char **tokenize(char *str)
{
  int size = count_words(str)+1; 
  char **pToken = (char**) malloc(sizeof(char*) * size);
  int i = 0;
  char *word = str; 
  while (i< count_words(str)){

    // this will save the whole word into pToken[i]
    // the length is merely where the pointer of where the word ends
    // minus the start pointer 
    pToken[i] = copy_str(word, word_terminator(word)-word_start(word));
    // set the pointer back to the next start of the word, so go through the word
    // that we just added and (word_start & word_term) and then to the next char of (word_start)
    word = word_start(word);
    word = word_terminator(word);
    word = word_start(word);
    i++;
  }
  pToken[i] = '\0'; 
  return pToken;  
}

void print_tokens(char **tokens)
{
  int i = 0;
  // while tokens[i] is valid and not 0 or \0
  // i can print the values 
  while(tokens[i]){
    printf("%s\n", tokens[i]); 
    i++;
  }
}


void free_tokens(char **tokens)
{
  int i = 0;
  for(i=0; tokens[i] != NULL; i++){
    free(tokens[i]);
    tokens[i] = NULL; 
  }
  free(tokens);
  tokens = NULL; 
}




