#include <stdio.h>

/* Verify that the expression getchar() != EOF is 0 or 1 */
int main() {
  int c;
  
  while (1) {
    c = getchar();
    printf("The expression getchar() != EOF evaluates to: %d\n", c != EOF);
    if (c == EOF) {
      break;
    }
  }
  return 0;
}