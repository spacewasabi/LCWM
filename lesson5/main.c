/**
 * Fichier principal du programme
 * Maintenant, le code se trouve à l'extérieur de main
 */

#include <stdio.h>
#include <stdlib.h>

int add(int a, int b)
{
  return a + b;
}

int sub(int a, int b)
{
  return a - b;
}

int mult(int a, int b)
{
  return a * b;
}

int divide(double a, double b)
{
  return a / b;
}

int chooseCalc()
{
  int chosedCalc = 0;
  
  while (chosedCalc < 1 || chosedCalc > 5)
  {
    printf("\nWhat do you want to do :\n\n");
    printf("1. Add the numbers\n");
    printf("2. Substract the numbers\n");
    printf("3. Multiply the numbers\n");
    printf("4. Divide the numbers\n");
    printf("5. Cancel & quit app\n");
    printf("Input the chosen option's number : ");
    scanf("%d", &chosedCalc);
  }

  return chosedCalc;
}

int main()
{
  int result = 0, numberOne = 0, numberTwo = 0;
  char chosed = '0';
  printf("Choose a number : ");
  scanf("%d", &numberOne);
  printf("Another one : ");
  scanf("%d", &numberTwo);
  switch (chooseCalc())
  {
    case 1:
      result = add(numberOne, numberTwo);
      chosed = '+';
      break;
    case 2:
      result = sub(numberOne, numberTwo);
      chosed = '-';
      break;
    case 3:
      result = mult(numberOne, numberTwo);
      chosed = '-';
      break;
    case 4:
      result = divide(numberOne, numberTwo);
      chosed = '/';
      break;
    case 5:
      return 0;
  }
  printf("\nResult : %d %c %d = %d\n", numberOne, chosed, numberTwo, result);
  return 0;
}
