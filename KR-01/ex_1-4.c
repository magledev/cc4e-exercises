#include <stdio.h>

/* print Celsius-Fahrenheit table
for c = -20, -10, 0, 10, ..., 150 */

/*Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit
 * table.*/

main() {
  int lower, upper, step;
  float fahrenheit, celsius;
  lower = -20; /* lower limit of temperature table */
  upper = 150; /* upper limit */
  step = 10;   /* step size */
  celsius = lower;

  while (celsius <= upper) {
    fahrenheit = (celsius * (9.0 / 5.0)) + 32.0;
    printf("%6.1f %6.1f\n", celsius, fahrenheit);
    celsius = celsius + step;
  }
}
