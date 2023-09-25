#include "stack-arr.h"
#include <stdio.h>

void init(){
  size.top = -1;
}
void push(int val){
  if(size.top == STACK_SIZE - 1){
    puts("Error: Stack Overflow!!");
    return;
  }
  STACK[++size.top] = val;
}

void printstt(){
  int i = size.top;
  do{
    printf("--%d\n", STACK[i]);
    i--;
  } while(i>=0);
}

