#include <stdlib.h>
#include <stdio.h>
#include "stack-sll.h"

void push(struct ST **head, int val){
  struct ST *new = malloc(sizeof(struct ST));
  new->data = val;
  new->next = *head;
  *head = new;
}
void printst(struct ST *head){
  while(head != NULL){
    printf("-- %d\n", head->data);
    head = head->next;
  }
}
