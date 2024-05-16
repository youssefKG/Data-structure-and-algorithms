#include <stdio.h>
#include <stdlib.h>

struct stack{
  int val;
  struct stack *next;
};

typedef struct stack Stack; 

Stack *pushToStack(Stack *top, int val);
Stack *popFromStakc(Stack *top);
void printStack(Stack *top);

int main(){
  Stack *top = NULL; 

  // push some values in the stack
  top = pushToStack(top, 1);
  top = pushToStack(top, 2);
  top = pushToStack(top, 11);
  top = pushToStack(top, 5);

  // stack before poping any value
  printf("before: "); 
  printStack(top);

  // pop top of stack 
  popFromStakc(top);

  // stack after pop value
  printf("after: ");
  printStack(top);

  return 0; 
}

// add element to the stack 
Stack *pushToStack(Stack *top, int val){

  // create new node with value val
  Stack *newNode;
  newNode = (Stack*)malloc(sizeof(Stack));
  newNode->val = val; 

  if(top == NULL) newNode->next = NULL;

  else newNode->next = top;

  return newNode;
}

// pop the stack 
Stack *popFromStakc(Stack *top){
  if(top == NULL){
    printf("the stack is empty \n"); 
  } else{
    Stack *temp = top;
    top = top->next; 
    free(temp);
  }
  return top;
}

// print the stack 
void printStack(Stack *top){
  // check if the stack is empty 
  if(top == NULL){
    printf("the stack is empty!!");
    return;
  } 

  Stack *current = top; 

  while(current->next != NULL){
    printf("[%d]->", current->val);
    current = current->next;
  }
  printf("NULL\n");
}

