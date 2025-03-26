#include <stdio.h>

// Print celsius-fahrenheit table.
for celsius = 0, 20, ..., 100; */
int main() {
  float celsius, fahr;
  int lower, upper, step;

  lower = 0;      // lower limit
  upper = 100;    // upper limit
  step = 20;      // step size
  celsius = lower;

  printf("Celsius Fahrenheit\n"); // Print heading above table.
  while (celsius <= upper) {
    fahr = 9.0/5.0 * celsius + 32.0;
    printf("%7.1f %10.0f\n", celsius, fahr);
    celsius = celsius + step;
  }
  return 0;
}