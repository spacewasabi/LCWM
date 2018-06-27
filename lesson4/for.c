/**
 * La boucle POUR diffère légèrement des boucles while et do_while.
 * Plus rapide à écrire, elle permet dès sa déclaration d'effectuer l'incrémentation du compteur.
 * Ainsi nous n'avons pas à le faire dans le code et nous avons moins de risques de générer une boucle infinie.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int counter, max = 0;

  printf("Choose a number : ");
  scanf("%d", &max);
  printf("You chose %d!\n", max);

  /**
   * Pour déclarer un FOR, on a besoin de trois paramètres.
   * L'initialisation : permet de préparer notre compteur (on initialise la variable, aussi appelée "index")
   * La condition : permet de définir si la boucle doit être répétée ou non (comme pour while)
   * L'incrémentation : aussi appelé le "pas" (ou "step"), permet de mettre à jour notre variable compteur 
   */
  for (counter = 0 ; counter <= max ; counter++)
  {
    printf("Counter : %d\n", counter);
  }
  return 0;
}