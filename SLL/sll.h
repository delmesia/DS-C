#include <stdlib.h>
//Structure of the nodes

struct Node {
  int data;
  struct Node *next;
};
//Declaration of head node
struct Node *head;
//////////////////////////
void insert_first(struct Node **head, int data);
void print_nodes(struct Node *head);
void free_nodes(struct Node *head);
void insert_last(struct Node **head, int val);
void deinit();
/////////////////////////
