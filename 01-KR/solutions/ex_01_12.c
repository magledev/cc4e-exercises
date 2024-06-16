#include <stdio.h>

/* Exercise 1-12. Write a program to print a histogram of the lengths of words
 * in its input. It is easiest to draw the histogram horizontally; a vertical
 * orientation is more challenging. */

#define YES 1
#define NO 0
#define MAX_WORD_LENGTH 14

int main()
{
  int c, i, j, size = 0, inword = NO;
  int sizes[MAX_WORD_LENGTH + 1];

  for (i = 0; i <= MAX_WORD_LENGTH; ++i)
    sizes[i] = 0;

  while ((c = getchar()) != EOF)
  {
    if (c == ' ' || c == '\n' || c == '\t')
    {
      if (inword)
      {
        if (size <= MAX_WORD_LENGTH)
        {
          ++sizes[size];
        }
        inword = NO;
        size = 0;
      }
    }
    else
    {
      if (!inword)
      {
        inword = YES;
      }
      ++size;
      if (size > MAX_WORD_LENGTH)
      {
        inword = NO;
        size = 0;
      }
    }
  }

  for (i = 1; i <= MAX_WORD_LENGTH; ++i)
  {
    printf("%d : ", i);
    for (j = 0; j < sizes[i]; ++j)
      printf("*");
    printf("\n");
  }

  return 0;
}
