#include <stdio.h>

/* Print the input while replacing series of blanks 
with one blank */
int main() {
  int c, lastc;
  lastc = 'x'; /* assign arbitrary value to avoid random events */

  while ((c = getchar()) != EOF) {
    if (c != ' ') {
      printf("%c", c);
    }
    if (c == ' ') {
      if (lastc != ' ') {
        printf("%c", c);
      }
    }
    lastc = c;
  }
}