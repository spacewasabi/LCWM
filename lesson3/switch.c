/**
 * Ici, on utilise un SWITCH CASE.
 * Il permet d'effectuer un test sur une valeur.
 * Il est une bonne alternative au IF-ELSE.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int order = 0; 

  printf("Bienvenue chez McDonaldDuck !\nEntrez le chiffre correspondant au menu choisi.\n");
  printf("==MENU==\n1. Big Mac\n2. Nuggets\n3. Mc Bacon\n4. Royal Cheese");
  scanf("%d", &order); 
  switch (order)
  {
  case 1:
    printf("Vous avez choisi le BIG MAC !\n");
    break;
  case 2:
    printf("Vous avez choisi les NUGGETS !\n");
    break;
  case 3:
    printf("Vous avez choisi le MAC BACON !\n");
    break;
  case 4:
    printf("Vous avez choisi le ROYAL CHEESE !\n");
    break;
  default:
    printf("ERREUR : le numero que vous avez fourni ne correspond a aucun menu.\n");
    break;
  }
}