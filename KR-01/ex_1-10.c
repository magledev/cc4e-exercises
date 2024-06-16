#include <stdio.h>

/* Exercise 1-10. Write a program which prints the words in its input, one per
 * line. */

int main() {
  int c;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      putchar('\n');
    } else {
      putchar(c);
    }
  }
}
