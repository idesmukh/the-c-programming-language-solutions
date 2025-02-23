#include <stdio.h>

/* Count blanks, tabs, and newlines in input */
int main() {
  int c, blanks_count, tab_count, newline_count;
  blanks_count = 0;
  tab_count = 0;
  newline_count = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      ++blanks_count;
    } else if (c == '\t') {
      ++tab_count;
    } else if (c == '\n') {
      ++newline_count;
    }
  }
  
  printf("\nBlanks: %d\n", blanks_count);
  printf("Tabs: %d\n", tab_count);
  printf("Newlines: %d\n", newline_count);

  return 0;
}