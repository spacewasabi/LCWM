/**
 * Computers are big calculating machines.
 * A computer can do the following :
 *  - adding
 *  - subbing
 *  - multiplying
 *  - dividing
 *  - modulus operations
 * For more complex operations, we'll have to program them.
 * Those are called "algorithms".
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int result = 0;
  result = 5 + 5; 
  printf("5 + 5 = %d\n", result);
  /**
   * Variables can also be used in our calculations
   */
  result = result - 5; 
  printf("10 - 5 = %d\n", result);
  result = result * result;
  printf("5 x 5 = %d\n", result);
  /**
   * Divides and modulus operations work a bit differently.
   * If the program's input are integer, it will truncate the result to return an
   * integer (this is called an "euclidic division").
   */
  result = 5 / 2;
  printf("For a computer : 5 / 2 = %d\n", result);
  /**
   * If we want an exact result, we'll use "doubles".
   * For computer, when we do x / y, he actually understands :
   * "how many y are in x?"
   */
  double result2 = 0.0;
  result2 = 5.0 / 2.0;
  printf("Instead of 5 / 2 we'll ask for 5.0 / 2.0 = %lf\n", result2);
  /**
   * Modulus returns the remainder of the division
   */
  int result3 = 0;
  result3 = 5 % 2;
  printf("5/2 's modulus = %d\n", result3);
  return 0;
}
