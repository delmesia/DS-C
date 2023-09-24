#include <stdio.h>
#include "stack-sll.h"
int main(void){
  push(&head, 20);
  push(&head, 15);
  push(&head, 22);
  printst(head);
  pop();
  pop();
  printst(head);
  
}
