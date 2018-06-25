/**
 * Cette fois, nous allons inclure une nouvelle librairie, math.
 * Cette librairie offre plusieurs méthodes permettant d'effectuer des calculs complexes.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  double absolu = 0, dessus = 0, dessous = 0, nombre = -27, decimal = 25.71;
  absolu = fabs(nombre);
  printf("FABS : %f\n", absolu);
  dessus = ceil(decimal);
  printf("CEIL : %f\n", dessus);
  dessous = floor(decimal);
  printf("FLOOR : %f\n", dessous);

  return 0;
}