#include "tokenizer.h"
#include <stdio.h>
#include <stdlib.h>
#include "history.h"

int main()
{
  List *history = init_history();
  while(1){
    printf("Press 0 to view history\n");
    printf("Press 1 to recall at certain history.\n");
    printf("Press 2 to enter new sentence\n");
    printf("Press 3 to exit"); 
    char choice[50]; 
    fgets(choice, 50,stdin); 
    if (choice[0] =='0'){
      print_history(history);
    }
    else if (choice[0]=='1'){ 
      printf("Enter num\n");
      printf("!"); 
      fgets(choice,50,stdin);
      // to retrieve the true integer value, we get the decimal value of 0;
      // the char, choice, is retrieved minus the decimal value 48
      int i = choice[0] -48; 
      printf("%s", get_history(history,i));
    }
    else if(choice[0]=='2'){
      printf("Enter string\n");
      printf("$"); 
      char newString[80];
      fgets(newString,80,stdin);
      char *pString = newString; 
      char **Tokensr = tokenize(pString);
      add_history(history, pString);
    }
    else if (choice[0] == '3'){
      break; 
    }
  }

  get_history(history, 2); 
  
  return 0;
}
