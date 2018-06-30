/**
 * Pour demander un renseignement via console,
 * on utilisera la méthode "scanf".
 * On doit mettre le %d entre guillemets.
 * Il faut mettre le symbole & devant le nom de la 
 * variable qui va recevoir la valeur.
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * Le programme exemple demande l'âge de l'utilisateur.
 * Si vous rentrez un nombre décimal, comme 2.9, il sera automatiquement tronqué, 
 * c'est-à-dire que seule la partie entière sera conservée. 
 * Dans ce cas, c'est le nombre 2 qui aurait été stocké dans la variable. 
 * Si vous tapez des lettres au hasard (« éèydf »), la variable ne changera pas de valeur.
 * En effet, on avait initialisé notre variable à 0 au début. 
 * De ce fait, le programme affichera « 0 ans » si ça n'a pas marché. 
 * Si on n'avait pas initialisé la variable, le programme aurait pu afficher n'importe quoi !
 */

int main(int argc, char *argv[])
{
  int age = 0; // On initialise la variable à 0
  int retval;  // Used to inspect the return value of functions

  printf("Quel age avez-vous ? ");
  scanf("%d", &age); // On demande d'entrer l'âge avec scanf
  if (retval == 1)
    printf("Ah ! Vous avez donc %d ans !\n\n", age);
  else {
    fprintf(stderr, "scanf() returned %d, meaning that something went wrong.\n", retval);
    exit(-1);
  }
  return 0;
}
