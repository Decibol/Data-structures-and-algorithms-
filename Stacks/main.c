#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

#define MAX 10


int main() {
    int ch;
st *s = (st *) malloc (sizeof (st));

 
  createEmptyStack(s);

  push(s, 1);
  push(s, 2);
  push(s, 3);
  push(s, 4);

  printStack(s);
  top(s);

  pop(s);

  printf("\nAfter popping out\n");
  printStack(s);
  top(s);
}