#include <stdio.h>
#include "sll.h"

int main(void){
  insert_first(&head, 1);
  print_nodes(head);
  free_nodes(head);
  print_nodes(head);
  insert_first(&head, 25);
  print_nodes(head);
}

