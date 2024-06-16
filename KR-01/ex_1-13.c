#include <stdio.h>

int main()
/* Exercise 1-13. Write a program to convert its input to lower case, using a
 * function lower(c) which returns c if c is not a letter, and the lower case
 * value of c if it is a letter. */
{
  int c;
  while ((c = getchar()) != EOF)
    putchar(lower(c));
}

int lower(c)
int c;
{
  /* Define the difference between an upper and lowercase letter */
  int offset = 'a' - 'A';

  /* Check if c is an uppercase letter */
  if (c >= 'A' && c <= 'Z')
    return c + offset;

  /* Return all other instances of c */
  return c;
}
