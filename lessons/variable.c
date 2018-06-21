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
  int pointsDeVies; // Déclaration d'une variable unique
  int niveau, classe, equipementMainDroite, equipementMainGauche; // Déclaration de plusieurs variables
  pointsDeVies = 10; // Affectation d'une valeur à la variable
  niveau = 1;
  classe = "guerrier";
  equipementMainDroite = "epee";
  equipementMainGauche = "bouclier";
  int villeDepart = "ville1"; // Affectation de valeur lors de la déclaration (procédé conseillé)
     
  return 0;
}