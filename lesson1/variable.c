/**
 * Variables in C.
 * There's differents types for variables :
 * signed char, int, long, float, double...
 * Type allows us to identify a data range in our RAM.
 * Data processing becomes faster and more precise.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * WARNING :
 * not affecting a value to our variable
 * means it'll use a random memory "slot"
 * so whatever value was in that slot will be automatically
 * assigned to our variable (even a secret password!).
 */

int main(int argc, char *argv[])  // int main() equivalent
{
  int hp;                         // Declaring a simple variable
  int lvl, mana;                  // Declaring multiple variables
  hp = 10;                        // Set the variable's value
  int startingTown = "town1";     // Setting the value immediately while declaring the variable (best practice)
  const int INITIAL_HP = 10;      // Constantes
  const int INITIAL_LVL = 1;
  lvl = INITIAL_LVL;
  /**
   * Strings are arrays.
   * Each index points to a char
   * Here, "w" in "warrior" is job[0]
   */
  char job[] = "warrior";
  char RightHandEquipment[] = "sword";
  char LeftHandEquipment[] = "shield";

  /**
   * % allows to call a variable in a printf
   * %d will be replaced with a digital variable.
   * %c will be replaced with an alphadigital value (a-A ... z-Z)
   * %s will be replaced with a string
   */
  printf("You're a lvl %d %s \n You have %dHP and fight with a %s and a %s", lvl, job, hp, RightHandEquipment, LeftHandEquipment);

  return 0;
}