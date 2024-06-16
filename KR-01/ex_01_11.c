#include <stdio.h>

/* Exercise 1-11. Revise the word count program to use a better definition of
 * "word," for example, a sequence of letters, digits and apostrophes that
 * begins with a letter. */

#define YES 1
#define NO 0

int main() /* count lines, words, chars in input */
{
  int c, nl, nw, nc, inword;

  inword = NO;
  nl = nw = nc = 0;
  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n')
      ++nl;
    if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') ||
        (c >= 'a' && c <= 'z') || (c = '\'')) {
      if (!inword) {
        inword = YES;
        ++nw;
      }
    } else {
      inword = NO;
    }
  }
  printf("NewLines: %d\nWords: %d\nCharacters: %d\n", nl, nw, nc);
}
