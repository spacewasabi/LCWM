/**
 * En algorithmie, on a parfois besoin d'utiliser des conditions.
 * Celles-ci permettent (entre autres) de modifier le comportement d'un programme.
 * Ces modifications de comportement peuvent être déclenchées par divers events.
 * SI "quelque chose" arrive, ALORS on fait "ça" SINON on fait "ceci".
 * QUAND "ça" va se passer, FAIRE "ceci".
 * TANT QUE "ça" arrive, faire "ça", APRES on fait plus "ça" mais "ceci".
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int age = 0; // On initialise la variable à 0

  printf("Quel age avez-vous ? ");
  scanf("%d", &age); // On demande d'entrer l'âge avec scanf
  printf("Ah ! Vous avez donc %d ans !\n", age);
  if (age >= 18)
  {
    printf("Vous pouvez donc consommer de l'alcool.\n");
  }
  else if (age >= 12)
  {
    printf("Dommage ! Vous etes mineur !\nMais pas d'inquietude, on a aussi du coca...\n");
  }
  else if (age >= 5)
  {
    printf("Tu es trop jeune pour venir dans cet etablissement...\n");
  }
  else
  {
    printf("Agaa areu areu!\n");
  }

  return 0;
}