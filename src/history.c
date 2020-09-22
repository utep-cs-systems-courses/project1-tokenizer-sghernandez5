#include <stdio.h>
#include <stdlib.h>
#include "history.h" 

List *init_history()
{
  List *history =  malloc(sizeof(List));
  history -> root = 0;
  return history;
}

void add_history(List *list, char *str)
{
  int itemID = 0;
  Item *node = malloc(sizeof(Item));
  
  if(list->root == 0){
    list->root = node;
    node->id = itemID; 
    node-> next = 0;
    goto addStr;
  }
  else{
  Item *temp = list->root;
  // get to the end of LL
  itemID++; 
  while(temp -> next != 0){
    temp = temp -> next;
    itemID++; 
  }
  // allocate memory to the new node
  // Item *node =  malloc(sizeof(Item));
  //set it to the end of LL
  temp -> next = node;
  node->next = 0; 
  node->id = itemID;
  goto addStr; 
  }

 addStr:{
  char *sizeString = str;
  int j,size = 0;
    // get size of the whole string to correctly allocate 
  while (*sizeString++){
    size++; 
  }
 
  // allocate memory fo the dupstring, size+1 for the end of file 
  char *dupString = (char*) malloc(sizeof(char)*(size+1));
  for(j=0; j < size; j++){
  dupString[j] = str[j]; 
  } 
  dupString[size+1] = '\0';
  // set  tthe string  "attribute" into the node
  node->str = dupString;
  }
}


char *get_history(List *list, int id)
{
  Item  *temp = list->root;
  while(temp != 0){
    if (temp->id == id){
      return temp->str;
    }
    temp = temp -> next; 
  }
  return "ID not in history";  
}


void print_history(List *list)
{
  Item *temp = list->root;
  while(temp != 0){
    printf("%d\n", temp->id);
    printf(" %s\n", temp->str); 
    temp = temp ->next; 
  }
}

void free_history(List *list)
{  
  Item *temp = list-> root;
  Item *prev = list->root;
  while (temp != 0){
    prev = temp; 
    free(prev->str);
    free(prev); 
    temp = temp-> next; 
  }
  free(list->root); 
  free(list);
}
/*
int  main(){
  List *list1 = init_history();
  char *str1 = "epic rap battle";
  char *str2 = "lego house";
  char *str3 = "sleep"; 
  add_history(list1,str1);
  add_history(list1, str2);
  add_history(list1, str3); 
  print_history(list1);

  free_history(list1);

  print_history(list1); 
  return 0; 
}
*/
