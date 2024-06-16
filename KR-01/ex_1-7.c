#include <stdio.h>

/* replace sequences or more than one blank with a single blank */

main() {

  int c;          /* store the current character */
  int blanks = 0; /* flag to indicate if blanks have been encountered */

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      if (blanks != 1) {
        putchar(c);
        blanks = 1;
      }
    } else {
      putchar(c);
      blanks = 0;
    }
  }
}
