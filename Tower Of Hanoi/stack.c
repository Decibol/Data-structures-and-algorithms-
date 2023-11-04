// Stack implementation in C
#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int count = 0;


// Creating a stack

void createEmptyStack(st *s) {
  s->top = -1;
}

// Check if the stack is full
int isfull(st *s) {
  if (s->top == MAX - 1)
    return 1;
  else
    return 0;
}

// Check if the stack is empty
int isempty(st *s) {
  if (s->top == -1)
    return 1;
  else
    return 0;
}

// Add elements into stack
void push(st *s, int newitem) {
  if (isfull(s)) {
    printf("STACK FULL");
  } else {
    s->top++;
    s->items[s->top] = newitem;
  }
  count++;
}

// Remove element from stack
int pop(st *s) {
  int a= s->items[s->top];
  if (isempty(s)) {
    printf("\n STACK EMPTY \n");
    a=0;
  } else {

    //printf("Item popped= %d", s->items[s->top]);
    s->top--;
   
 }
  count--;
  printf("\n");
  return a; 
}

// Print elements of stack
void printStack(st *s) {
  printf("Stack: ");
  for (int i = 0; i<=s->top ; i++) {
    printf("%d ", s->items[i]);
  }
  printf("\n");
}
void top(st *s){
    printf("Top Element = %d \n", s->items[s->top]);
}
// Driver code
