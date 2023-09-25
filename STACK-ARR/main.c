#include <stdio.h>
#include "stack-arr.h"
int main(void){
  init(0);
  push(23);
  push(15);
  push(33);
  printstt();
  puts("");
  push(99);
  printstt();
}

