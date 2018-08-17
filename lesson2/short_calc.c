/**
 * C offers the possibility to optimise our code by writing less for the exact same use.
 * It's not necessarily faster to execute but it's shorter and easier to read.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int number = 2;

  number += 4; // number = 6...
  number -= 3; // ... number = 3
  number *= 5; // ... number = 15
  number /= 3; // ... number = 5
  number %= 3; // ... number = 2 (because 5 = 1 * 3 + 2)
  printf("Number's final value is %d\n", number);
  return 0;
}
