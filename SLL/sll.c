#include <stdlib.h>
#include <stdio.h>
#include "sll.h"

void insert_first(struct Node **head, int val){
  struct Node *new_node = malloc(sizeof(struct Node));
  new_node->data = val;
  new_node->next = *head;
  *head = new_node;
}
void insert_last(struct Node **head, int val){
  struct Node *new_node = malloc(sizeof(struct Node));
  new_node->data = val;
  new_node->next = NULL;
  struct Node *lastNode = *head;
  if(*head == NULL){
    puts("No nodes yet, use insert_first instead.");
  } else {
      while(lastNode->next != NULL){
      lastNode = lastNode->next;
    }
  lastNode->next = new_node;
  }
  
}

void print_nodes(struct Node *head){
  if(head == NULL){
    printf("Head is NULL");
  }
  while(head != NULL){
    printf("%d --> ",head->data);
    head = head->next;
  }
  puts("");
}

void free_nodes(struct Node *head){
  struct Node *temp;
  while (head != NULL){
   temp = head;
   head = head->next;
   free(temp);
  }
  deinit(&head);
}
void deinit(){
  head = NULL;
}
