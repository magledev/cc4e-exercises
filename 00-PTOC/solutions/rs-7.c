#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// int main() {
//   int first = 1;
//   int val, maxval, minval;
//   char line[1000];
//
//   while (gets(line) != NULL) {
//     if (strcmp(line, "done") == 0)
//       break;
//     val = atoi(line);
//     if (first || val > maxval)
//       maxval = val;
//     if (first || val < minval)
//       minval = val;
//     first = 0;
//   }
//
//   printf("Maximum %d\n", maxval);
//   printf("Minimum %d\n", minval);
// }

int main() {
  int first = 1;
  int val, maxval, minval;
  char line[1000];

  while (fgets(line, sizeof(line), stdin) != NULL) {
    // Remove newline character if present
    line[strcspn(line, "\n")] = 0;

    if (strcmp(line, "done") == 0)
      break;

    char *endptr;
    val = strtol(line, &endptr, 10);
    if (*endptr != '\0') {
      printf("Invalid number: %s\n", line);
      continue;
    }

    if (first || val > maxval)
      maxval = val;
    if (first || val < minval)
      minval = val;
    first = 0;
  }

  if (!first) { // Ensure at least one number was processed
    printf("Maximum %d\n", maxval);
    printf("Minimum %d\n", minval);
  } else {
    printf("No valid numbers entered.\n");
  }

  return 0;
}
