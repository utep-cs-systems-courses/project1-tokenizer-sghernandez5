#include "tokenizer.h"
#include <stdio.h>
#include <stdlib.h>
#include "history.h"

int main()
{
  List *history = init_history();
  int choice;
  printf("Press 0 to view history\n");
  printf("Press 1 to recall at certain history.\n");
  printf("Press 2 to enter new sentence\n");
  printf("Press any key to exit");



  do {
  scanf("%d", &choice);
  if (choice==0){
  print_history(history);
  continue;
  }
  else if (choice==1){
    int r;
    printf("Enter num"); 
    int iD = scanf("%d",&r);
    get_history(history,r);
    continue; 
  }
  else if(choice ==2){
    printf("Enter string"); 
    char newString[80];
    scanf("%[^\n]", newString,80);
    char *pString = newString; 
    char **Tokensr = tokenize(pString);
    int i =0;
    while(Tokensr[i]){
      add_history(history, Tokensr[i]);
      i++;
      }
    continue; 
  }
  else{
    break; 
  }
  }while(choice != 3);
  
  return 0;
}
