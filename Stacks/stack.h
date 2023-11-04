#ifndef my_header_file  
#define my_header_file 
#include <stdio.h>
#include <stdlib.h>

#define MAX 10


// Creating a stack
struct stack {
  int items[MAX];
  int top;
};
typedef struct stack st;




void createEmptyStack(st *s);

// Check if the stack is full
int isfull(st *s);

// Check if the stack is empty
int isempty(st *s) ;

// Add elements into stack
void push(st *s, int newitem) ;

// Remove element from stack
int pop(st *s) ;

// Print elements of stack
void printStack(st *s) ;
void top(st *s);
#endif