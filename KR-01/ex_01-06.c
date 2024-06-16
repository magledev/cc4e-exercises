#include <stdio.h>

main() {
  int c, b, t, nl;

  c = 0;
  b = 0;
  t = 0;
  nl = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ')
      ++b;
    else if (c == '\t')
      ++t;
    else if (c == '\n')
      ++nl;
  }
  printf("Blanks: %d\nTabs: %d\nNewlines: %d\n", b, t, nl);
}

/*
main()
{
  int c, btnl;
  btnl = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n')
      ++btnl;
  }
  printf("Occurances of Blanks, Tabs and Newlines: %d\n", btnl);
}
*/
