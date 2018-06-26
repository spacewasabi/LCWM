/**
 * Cette fois, nous allons inclure une nouvelle librairie, math.
 * Cette librairie offre plusieurs méthodes permettant d'effectuer des calculs complexes.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  double absolu = 0, dessus = 0, dessous = 0, puissance = 0, square = 0, posnombre = 27, negnombre = -27, decimal = 25.71;
  absolu = fabs(negnombre);
  printf("FABS : %f\n", absolu);
  dessus = ceil(decimal);
  printf("CEIL : %f\n", dessus);
  dessous = floor(decimal);
  printf("FLOOR : %f\n", dessous);
  puissance = pow(posnombre, 2);
  printf("POW : %f\n", puissance);
  square = sqrt(puissance);
  printf("SQRT : %f\n", square);

  return 0;
}

/**
  * Autres fonctions disponibles :
  * 
  * sin, cos, tan - Ce sont les trois fameuses fonctions utilisées en trigonométrie,
  * même fonctionnement, renvoient un double, attendent une valeur en radians.
  * 
  * asin, acos, atan - Ce sont les fonctions arc sinus, arc cosinus et arc tangente,
  * d'autres fonctions de trigonométrie. S'utilisent de la même manière.
  * 
  * exp - calcule l'exponentielle d'un nombre. Renvoie un double.
  * 
  * log - calcule le logarithme népérien d'un nombre (noté « ln »).
  * 
  * log10 - calcule le logarithme base 10 d'un nombre.
  * 
  */