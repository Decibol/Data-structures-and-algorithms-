//Implementing Tower of Hanoi
#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

#define MAX 10
void TOH(int n,st *s, st *a, st *d){
    
    if(n==1){
        push(d,pop(s));
        return;
    }
    TOH(n-1,s,d,a);
    TOH(1,s,a,d);
    TOH(n-1,a,s,d);
    
}
int main(){
     int ch;
st *s = (st *) malloc (sizeof (st));
st *a = (st *) malloc (sizeof (st));
st *d = (st *) malloc (sizeof (st));
    createEmptyStack(s);
    createEmptyStack(a);
    createEmptyStack(d);
    push (s,10);
    push (s,20);
    push(s,30);
    push(s,40);
    push(s,50);
   

 
    
 
    TOH(5,s,a,d);
    printStack(s);
    printStack(d);
    printStack(a);
    
}
