/*
Ci-dessous, ce sont des directives de préprocesseur.
Ces lignes permettent d'ajouter des fichiers au projet, 
fichiers que l'on appelle bibliothèques.
Grâce à ces bibliothèques, on disposera de fonctions toutes prêtes 
pour afficher par exemple un message à l'écran.
*/

#include <stdio.h>
#include <stdlib.h>

/*
Ci-dessous, vous avez la fonction principale du programme, appelée main.
C'est par cette fonction que tous les programmes commencent.
Ici, ma fonction se contente d'afficher "Bonjour" à l'écran.
*/

int main()
{
  printf("Bonjour"); // Cette instruction affiche "Bonjour" à l'écran
  return 0;          // Le programme renvoie le nombre 0 puis s'arrête
}