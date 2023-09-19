#include <stdio.h>
#include "sll.h"

int main(void) {
  insert_first(&head,11);
  insert_last(&head, 15);
  insert_last(&head, 12);
  find_node(12, head);
  print_nodes(head);
  insert_first(&head, 1);
  print_nodes(head);
  find_node(12, head);
  free(head);
  print_nodes(head);
  }


