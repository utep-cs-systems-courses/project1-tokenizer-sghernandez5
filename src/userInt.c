#include "tokenizer.h"
#include <stdio.h>
#include <stdlib.h>
int main()
{
 printf("Hello please enter your sentence: ");
  char str1[50];
  scanf("%[^\n]", str1,50); 
  printf("%s\n", str1);

  char *pstr1 = str1;

  printf("%d\n", space_char(str1[0]));
  printf("%d\n",non_space_char(str1[0])); 
  printf("%d\n", count_words(pstr1));

  char **Tokensr = tokenize(pstr1);
  
  print_tokens(Tokensr);

  free_tokens(Tokensr);
  
  print_tokens(Tokensr); 
  return 0;
}
