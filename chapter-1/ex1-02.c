#include <stdio.h>

/* test printf behavior with escape sequences \c and \w */
int main() {
  printf("test a\c");
  printf("test b\w");
  return 0;
}