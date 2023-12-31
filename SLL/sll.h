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
void insert_at_pos(struct Node **head, int pos, int val);
void insert_last(struct Node **head, int val);
int find_node(int val, struct Node *head);
void deinit();
/////////////////////////
