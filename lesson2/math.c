/**
 * Now, we're going to include a new library : math.
 * It allows us to use new methods for complex calculations.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  double absolute = 0, above = 0, below = 0, power = 0, square = 0, posNumber = 27, negNumber = -27, decimal = 25.71;
  absolute = fabs(negNumber);
  printf("FABS : %f\n", absolute);
  above = ceil(decimal);
  printf("CEIL : %f\n", above);
  below = floor(decimal);
  printf("FLOOR : %f\n", below);
  power = pow(posNumber, 2);
  printf("POW : %f\n", power);
  square = sqrt(power);
  printf("SQRT : %f\n", square);

  return 0;
}

/**
  * More functions :
  * 
  * - sin, cos, tan
  * - asin, acos, atan
  * - exp
  * - log
  * - log10
  * 
  */