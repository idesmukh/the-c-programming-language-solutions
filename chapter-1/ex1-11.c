// Test 1: empty input
// Test 2: only lines
// Test 3: only one word
// Test 4: only one character
// Test 5: leave some blanks and then input word
#include <stdio.h>

#define IN 1  // inside a word
#define OUT 0 // outside a word

// Count lines, words, and characters in input.
int main() {
  int c, nl, nw, nc, state;

  state = OUT;
  nl = nw = nc = 0;
  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n') {
      ++nl;
    }
    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
    }
    else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }
  printf("%d %d %d\n", nl, nw, nc);
  return 0;
}