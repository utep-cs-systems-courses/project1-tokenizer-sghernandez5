#include "tokenizer.h"
#include <stdio.h>
int main()
{
 printf("Hello please enter your sentece: ");
  char str1[1000];
  scanf("%[^\n]", str1); 
  printf("%s\n", str1);

  char *pstr1 = str1; 

  printf("%d\n", space_char(str1[0]));
  printf("%d\n",non_space_char(str1[0]));;
  printf("%c\n", word_start(pstr1));
  return 0;
}
