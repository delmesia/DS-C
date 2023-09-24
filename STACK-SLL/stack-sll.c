#include <stdlib.h>
#include <stdio.h>
#include "stack-sll.h"

void push(struct ST **head, int val){
  struct ST *new = malloc(sizeof(struct ST));
  new->data = val;
  new->next = *head;
  *head = new;
}
void pop(){
  struct ST *new = head;
  printf("Popped: %d\n", head->data);
  head = head->next;
  free(new);
}

void printst(struct ST *head){
  struct ST *temp = head;
  while(temp != NULL){
    printf("-- %d\n", temp->data);
    temp = temp->next;
  }
}
