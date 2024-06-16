#include <stdio.h>

/* Exercise 1-8. Write a program to replace each tab by the three-character
 * sequence >, backspace, -, which prints as >, and each backspace by the
 * similar sequence <. This makes tabs and backspaces visible. */

int main() {
  int c;

  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      putchar('>');
    } else if (c == '\b') {
      putchar('<');
    } else {
      putchar(c);
    }
  }
}
