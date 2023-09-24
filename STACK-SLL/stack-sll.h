struct ST {
  int data;
  struct ST *next;
};

struct ST *head;

void push(struct ST **head, int val);
void pop();
void printst(struct ST *head);
