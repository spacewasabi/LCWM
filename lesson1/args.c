/**
 * We'll use the method "scanf" to ask for
 * an input from the user.
 * The %d needs to be put between quotes.
 * The & symbole has to be in front of the 
 * variable which will contain the value.
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * This code sample ask the user to input their age.
 * If the input is a float, e.g. 229, it will automatically be trunced,
 * it means only the integer part will be stocked in the variable,
 * here it's the number 2.
 * If you type in a string, the variable won't update it's value,
 * since it was initially set to 0.
 * If the program doesn't work, it will return "0 years old".
 * Who knows what the code would have displayed if we didn't set the variable!
 */

int main(int argc, char *argv[])
{
  int age = 0; // variable set to 0
  int retval;  // Used to inspect the return value of functions

  printf("How old are you? ");
  scanf("%d", &age); // Asking for an input with scanf
  if (retval == 1)
    printf("So you're %d years old!\n\n", age);
  else {
    fprintf(stderr, "scanf() returned %d, meaning that something went wrong.\n", retval);
    exit(-1);
  }
  return 0;
}
