/**
 * En C, comme dans d'autres langages, permet de réduire la taille des calculs.
 * Les écritures raccourcies permettent d'avoir un code plus court,
 * plus lisible, mais pas forcément plus rapide à executer.  
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int nombre = 2;

  nombre += 4; // nombre vaut 6...
  nombre -= 3; // ... nombre vaut maintenant 3
  nombre *= 5; // ... nombre vaut 15
  nombre /= 3; // ... nombre vaut 5
  nombre %= 3; // ... nombre vaut 2 (car 5 = 1 * 3 + 2)
  printf("La valeur finale de nombre est %d\n", nombre);
  return 0;
}
