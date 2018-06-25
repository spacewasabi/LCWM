/**
 * Un ordinateur est une machine à calcul basique (à une plus grosse échelle qu'une calculatrice cela-dit).
 * Les calculs qu'un ordinateur se limitent aux suivants :
 *  - addition 
 *  - soustraction
 *  - multiplication 
 *  - division 
 *  - modulo
 * A partir du moment où l'on cherche à effectuer des calculs plus compliqués, 
 * il va nous falloir les programmer (expliquer à la machine comment faire).
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int resultat = 0;
  resultat = 5 + 5; // Addition
  printf("5 + 5 = %d\n", resultat);
  /**
   * On peut également calculer en utilisant des variables,
   * l'ordinateur comprends celles-ci comme des références à une valeur enregistrée en mémoire.
   */
  resultat = resultat - 5; // Soustraction
  printf("10 - 5 = %d\n", resultat);
  resultat = resultat * resultat;
  printf("5 x 5 = %d\n", resultat);
  /**
   * Les divisions et les modulos fonctionnent d'une manière un peu particulière.
   * En effet, quand il voit des entiers, l'ordinateur fait une division de nombres entiers
   * (aussi appelée « division euclidienne »). Cela veut dire qu'il tronque le résultat, 
   * il ne garde que la partie entière.
   */
  resultat = 5 / 2;
  printf("Pour un ordinateur : 5 / 2 = %d\n", resultat);
  /**
   * Du coup, pour avoir un résultat exact, on préfèrera transformer
   * nos entiers et nos variables en décimaux / doubles.
   * En effet, lorsqu'un ordinateur fait une division, en réalité il répond à la question suivante :
   * "combien de fois il y a t'il x dans y".
   */
  double resultat2 = 0.0;
  resultat2 = 5.0 / 2.0;
  printf("Du coup pour calculer 5 / 2 on fait 5.0 / 2.0 = %lf\n", resultat2);
  /**
   * Le modulo correspond au reste d'une division.
   * Commu vu plus tôt : 
   * dans une division, l'ordinateur dit combien de fois 2 se trouve dans 5
   * il renvoie alors 2, le modulo renvoie le 1 qui manque.
   */
  int resultat3 = 0;
  resultat3 = 5 % 2;
  printf("Le modulo de 5/2 = %d\n", resultat3);
  return 0;
}
