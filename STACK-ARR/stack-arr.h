#define STACK_SIZE 50

int STACK[STACK_SIZE];

struct CURR_SIZE{
  int curr;
  int top;
};

struct CURR_SIZE size;
void push(int val);
void printstt();
void init();


