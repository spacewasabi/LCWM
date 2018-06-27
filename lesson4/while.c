/**
 * En algorithmie, il faut souvent répéter un calcul plusieurs fois.
 * Pour se faire on peut utiliser des boucles et des conditions.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int counter = 0, max = 0;

  printf("Choose a number : ");
  scanf("%d", &max);
  printf("You chose %d!\n", max);

  while(counter <= max)
  {
    printf("Counter : %d\n", counter);
    counter++;
  }
  return 0;
}