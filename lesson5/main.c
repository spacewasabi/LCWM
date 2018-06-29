/**
 * Fichier principal du programme
 * Maintenant, on appelle le code depuis main
 * Code qui est désormais séparé en plusieurs fonctions distinctes,
 * elles-mêmes situées à l'extérieure de la fonction principale.
 */

#include <stdio.h>
#include <stdlib.h>

float add(float a, float b)
{
  return a + b;
}

float sub(float a, float b)
{
  return a - b;
}

float mult(float a, float b)
{
  return a * b;
}

float divide(float a, float b)
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
  float result = 0, numberOne = 0, numberTwo = 0;
  char chosed = '0';
  printf("Choose a number : ");
  scanf("%f", &numberOne);
  printf("Another one : ");
  scanf("%f", &numberTwo);
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
  printf("\nResult : %.0f %c %.0f = %.1f\n", numberOne, chosed, numberTwo, result);
  return 0;
}
