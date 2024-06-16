#include <stdio.h>
int main() {
  int mymult();
  int retval;

  retval = mymult(6, 7);
  printf("Answer: %d\n", retval);
}

int mymult(a, b)
int a, b;
{
  int c = a * b;
  return c;
}

// Modern C implementation
// int mymult(int a, int b) {
//  return a * b;
//}
//
// int main() {
//  int retval = mymult(6, 7);
//  printf("Answer: %d\n", retval);
//  return 0;
//}
