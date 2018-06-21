/**
 * Cours sur la déclaration de variables en C.
 * Il existe différents types de variables :
 * signed char, int, long, float, double...
 * Le type permet d'identifier une plage de la RAM.
 * Travailler ainsi permet de rendre le traitement des informations
 * plus rapide et précis.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Attention :
 * lorsqu'on n'affecte pas de valeur à une variable,
 * celle-ci utilise celle présente dans l'emplacement mémoire.
 * Si un programme précédent avait utilisé cet emplacement
 * (pour un mot de passe par exemple)
 * le programme affectera automatiquement cette valeur à la variable.
 */

int main(int argc, char *argv[]) // Équivalent de int main()
{
  int pointsDeVies;                  // Déclaration d'une variable unique
  int niveau, pointsDeMana;          // Déclaration de plusieurs variables
  pointsDeVies = 10;                 // Affectation d'une valeur à la variable
  int villeDepart = "ville1";        // Affectation d'une valeur dès la déclaration de la variable (procédé conseillé)
  const int POINTS_DE_VIE_INIT = 10; // Constantes
  const int NIVEAU_INIT = 1;
  niveau = NIVEAU_INIT;
  /**
   * Les chaînes de caractères sont des tableaux, 
   * chaque index correspond à un caractère.
   * Ainsi, le "g" de "guerrier" correspond à classe[0].
   */
  char classe[] = "guerrier";
  char equipementMainDroite[] = "epee";
  char equipementMainGauche[] = "bouclier";

  /**
   * % permet d'appeler une variable dans un printf
   * %d sera remplacé par une variable à valeur numérique.
   * %c sera remplacé par une variable à valeur alphanumérique (a-A...z-Z)
   * %s sera remplacé par une variable contenant une chaîne de charactère
   */
  printf("Vous etes un %s de niveau %d \n Vous avez %dPV et etes equipe avec une %s et un %s", classe, niveau, pointsDeVies, equipementMainDroite, equipementMainGauche);

  return 0;
}