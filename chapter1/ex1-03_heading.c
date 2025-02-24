#include <stdio.h>

/* Print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300; floating-point version */
int main() {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;      /* Lower limit of temperature table */
  upper = 300;    /* Upper limit */
  step = 20;      /* Step size */
  fahr = lower;

  printf("Fahrenheit Celsius\n");  /* Print heading above table */
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%10.0f %7.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
  return 0;
}