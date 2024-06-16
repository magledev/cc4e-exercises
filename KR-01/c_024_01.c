#include <stdio.h>

main() /* test power function */
{
  int i;

  for (i = 0; i < 10; ++i)
    printf("%d %d %d\n", i, power(2, i), power(-3, i));
}

power(x, n) /* raise x to n-th power; n > 0 */
    int x,
    n;
{
  int i, p;

  for (p = 1; n > 0; --n)
    p = p * x;
  return (p);
}
