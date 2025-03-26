#include <stdio.h>

#define IN 1  // inside word
#define OUT 0 // outside word

// Print input at one word per line.
int main() {
  int c, state;

  state = OUT;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if (state == IN) {
        putchar('\n');
        state = OUT;
      }
    }
    else {
      putchar(c);
      state = IN;
    }
  }
  return 0;
}