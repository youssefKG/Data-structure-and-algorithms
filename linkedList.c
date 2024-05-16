
#include <stdio.h>
#include <stdlib.h>

struct list {
  int val; 
  struct list *next; 
}; 

typedef struct list List; 

List *insertAtEnd(List *head , int val);
void printList(List *head);
List *insertAtTheBegennig(List *head, int val);

int main(){
  List *head = NULL ; 

  head = insertAtEnd(head, 1); 
  head = insertAtEnd(head, 2); 
  head = insertAtEnd(head, 34); 
  head = insertAtEnd(head, 23); 
  head = insertAtTheBegennig(head, 0); 
  
  printList(head);

  
  return 0 ; 
}

List *insertAtEnd(List *head , int val ){

  // create new node with val and null 
  List *newNode; 
  newNode = (List*)malloc(sizeof(List)); 
  newNode->val = val; 
  newNode->next = NULL;

  // check the list is empty  
  if(head == NULL){
    printf("the head is empty\n");
    head = newNode;
  }

  // if the list is not empty 
  else{
    List *current = head; 

    // walk the list until the end
    while(current->next != NULL){
      current = current->next; 
    }

    // point the last node to the new node 
    current->next = newNode; 
  }

  return head;
}

List *insertAtTheBegennig(List *head, int val){
  List *newNode; 
  newNode = (List*)malloc(sizeof(List));
  newNode->val = val;
  newNode->next = NULL;

  newNode->next = head ; 

  return newNode; 
}

void printList(List *head){
  // check if the list is empty 
  if(head == NULL) printf("the lLlist is empty!!\n"); 

  else{
    List *current = head;

    while(current != NULL){
      printf("%d->", current->val); 
      current = current->next;
    }
  }
}
