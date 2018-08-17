/**
 * Simple input / output calculator program.
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int result = 0, number1 = 0, number2 = 0;

  // Two parameters

  printf("Choose a number : ");
  scanf("%d", &number1);
  printf("Now, choose another one : ");
  scanf("%d", &number2);

  result = number1 + number2;
  printf("%d + %d = %d\n", number1, number2, result);

  /**
   * Other examples using the same code structure as above :
   * 
   * printf("Choose a number : ");
   * scanf("%d", &number1);
   * printf("Now, choose another one : ");
   * scanf("%d", &number2);
   * 
   * result = number1 - number2;
   * printf("%d - %d = %d\n", number1, number2, result);
   * 
   * printf("Choose a number : ");
   * scanf("%d", &number1);
   * printf("Now, choose another one : ");
   * scanf("%d", &number2);
   *
   * result = number1 * number2;
   * printf("%d x %d = %d\n", number1, number2, result);
   * 
   * printf("Choose a number : ");
   * scanf("%d", &number1);
   * printf("Now, choose another one : ");
   * scanf("%d", &number2);
   * 
   * result = number1 / number2;
   * printf("%d +/%d = %d\n", number1, number2, result);
   * 
   */

  return 0;
}