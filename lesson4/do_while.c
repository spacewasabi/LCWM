/**
 * A la différence du while, le "do while" s'executera toujours au moins une fois,
 * ce même si la condition est fausse dès le début.
 * Ici on pourrait par exemple mettre le compteur plus haut que le max
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int counter = 0, max = 0;

  printf("Choose your starting number : ");
  scanf("%d", &counter);
  printf("You chose %d!\n", counter);
  printf("Now choose your maximum : ");
  scanf("%d", &max);
  printf("You chose %d!\n", max);
  printf("MAX : %d\n", max);
  do {
    printf("Counter : %d\n", counter);
    counter++;
  } while(counter <= max);
}