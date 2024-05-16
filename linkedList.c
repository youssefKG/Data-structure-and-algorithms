
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct list {
  int val; 
  struct list *next; 
}; 

typedef struct list List; 

List *insertAtTheBegennig(List *head, int val);
List *insertAtEnd(List *head , int val);
List *insertInBetween(List *head , int val , int position);
List *deleteFromTheEnd(List *head);
bool searchNode(List *head, int element);
void printList(List *head);

int main(){
  List *head = NULL ; 

  // insert at the begenning
  head = insertAtTheBegennig(head, 0); 

  // insert at the end of list 
  head = insertAtEnd(head, 1); 
  head = insertAtEnd(head, 2); 
  head = insertAtEnd(head, 34); 
  head = insertAtEnd(head, 23); 
  // insert in between; 
  head = insertInBetween(head, 100, 3);
  // printf the list
  printf("before: "); 
  printList(head);
  // delete from the end of list 
  head = deleteFromTheEnd(head);
  // printf the list
  printf("after: ");
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


List *insertInBetween(List *head , int val , int position){
  int count = 1; 
  List *newNode; 
  List *prev = head; 

  newNode = (List*)malloc(sizeof(List)); 
  newNode->val = val;

  while(count != position - 1){
    if(prev->next != NULL) 
      prev = prev->next;

    else {
      printf("the list long is %d \n", count+1); 
      return  head;
    }

    count++; 
  }

  newNode->next = prev->next;
  prev->next = newNode;

  return head; 
}

// linear search
bool searchNode(List *head, int element){
  List *current = head;

  while(current->next != NULL){
    if(current->val == element) return  true;

    current = current->next;
  }
  return false; 
}

// delet from end 
List *deleteFromTheEnd(List *head){
  
  // cas 1 : 
  // [1 , NULL];
  // current = head; 
  // current= [1 ,NULL]; 
  // current->next = NULL; 
  // current->next->next = undefined;  program crash
  // NULL->next = error;
  
  // cas 2 : 
  // [1 , next] -> [3, NULL] 
  // current->next->next =NULL ; 

  if(head == NULL ) return head  ; 

  List *prev = head; 
  List *current = prev->next;

  while(current != NULL && current->next != NULL){
    prev = current; 
    current = current->next;
  }
  prev->next = NULL; 
  free(current);
  return head;

}

void printList(List *head){

  // check if the list is empty 
  if(head == NULL) return; 

  // if is not 
  List *current = head;
  while(current != NULL){
    // print the value 
    printf("%d->", current->val); 
    // go the next node 
    current = current->next;
  }
  printf("NULL\n");
}
