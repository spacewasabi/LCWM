/**
 * Avec le cours précédent, on peut déjà programmer un script 
 * de calcul relativement simple.
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int resultat = 0, nombre1 = 0, nombre2 = 0;

  // L'utilisateur rentre les deux paramètres

  printf("Veuillez saisir le premier paramètre : ");
  scanf("%d", &nombre1);
  printf("Maintenant, veuillez saisir le second : ");
  scanf("%d", &nombre2);

  resultat = nombre1 + nombre2;
  printf("%d + %d = %d\n", nombre1, nombre2, resultat);

  /**
   * 
   * printf("Veuillez saisir le premier paramètre : ");
   * scanf("%d", &nombre1);
   * printf("Maintenant, veuillez saisir le second : ");
   * scanf("%d", &nombre2);
   * 
   * resultat = nombre1 - nombre2;
   * printf("%d - %d = %d\n", nombre1, nombre2, resultat);
   * 
   * printf("Veuillez saisir le premier paramètre : ");
   * scanf("%d", &nombre1);
   * printf("Maintenant, veuillez saisir le second : ");
   * scanf("%d", &nombre2);
   *
   * resultat = nombre1 * nombre2;
   * printf("%d x %d = %d\n", nombre1, nombre2, resultat);
   * 
   * printf("Veuillez saisir le premier paramètre : ");
   * scanf("%d", &nombre1);
   * printf("Maintenant, veuillez saisir le second : ");
   * scanf("%d", &nombre2);
   * 
   * resultat = nombre1 / nombre2;
   * printf("%d +/%d = %d\n", nombre1, nombre2, resultat);
   * 
   */

  return 0;
}