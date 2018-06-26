/**
 * En C, contrairement au JavaScript, il n'y a pas "naturellement" de booléens.
 * Il y a cependant une manière simple de les déclarer en utilisant des 0 et des 1.
 * Ce qui est logique, puisque que true et false sont compris de cette manière.
 */
#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int main(void)
{
  int age = 0, majeur = 0;
  printf("Quel age avez-vous ? ");
  scanf("%d", &age);
  if (age >= 18)
  {
    majeur = TRUE;
  } 
  else
  {
    majeur = FALSE;
  }
  if (majeur)
  {
    printf("Vous etes majeurs\n");
  }
  else
  {
    printf("Vous etes mineurs\n");
  }
  return 0;
}