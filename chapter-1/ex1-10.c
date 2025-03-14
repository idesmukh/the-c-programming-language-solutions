#include <stdio.h>

/* print tabs, backspaces and backslashes as 
actual characters */
int main() {
  int c;

  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      printf("\\t");
    }
    if (c == '\b') {
      printf("\\b");
    }
    if (c == '\\') {
      printf("\\\\");
    }
    if (c != '\t') {
      if (c != '\b') {
        if (c != '\\') {
          printf("%c", c);
        }
      }
    }
  }

  return 0;
}