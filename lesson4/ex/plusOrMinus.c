/**
 * At the end of some lessons, I'll put a few exercises I found.
 * 
 * Here's the first one :
 * 
 * "You'll make a CLI-based game where the users has to guess a random number between 1 and 100.
 * In order to complete this task, you'll use : 
 *  - the functions provided by the time library
 *  - scanf()
 *  - printf()
 *  - loops
 * 
 * Good luck and have fun."
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h> // Just in case

int main() 
{
  const int MAX = 100, MIN = 1, BASEHP = 10;
  int answer = 0, hp = 0, number;
  srand(time(NULL));
  answer = (rand() % (MAX - MIN + 1)) + MIN;
  printf("HP : %d\n", BASEHP);
  for (hp = BASEHP ; hp > 0 ; hp--)
  {
    printf("HP left : %d\n", hp);
    printf("Choose a number : ");
    scanf("%d", &number);
    if (number > answer)
    {
      printf("Too high!\n");
    }
    else if (number < answer)
    {
      printf("Too low!\n");
    }
    else
    {
      printf("CORRECT!\n");
      return 0;
    }
  }
  if (hp == 0)
  {
    printf("GAME OVER! You don't have any HP left!\nThe correct answer was : %d\n", answer);
    return 0;
  }
  return 0;
}