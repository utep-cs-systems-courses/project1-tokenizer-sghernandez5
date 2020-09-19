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

  char *ptoS = copy_str(pstr1, 5);
  // printf("%s\n", ptoS);
  char **tokens = tokenize(pstr1); 
  printf("%s\n",tokens[0]);
  printf("%s\n", tokens[1]); 
  printf("%s\n",tokens[2]);
  printf("%c\n", tokens[3]); 
  return 0;
}
