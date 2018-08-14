/**
 * Writing a function to print
 * the content of the c file
 * in a txt file.
 */

// Working hack
#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *fr, *fw;
  char c;
  fr = fopen(__FILE__,"r");
  if (fr == NULL) {
    printf("Can't open source file mate!\n");
  }
  fw = fopen("program.txt", "w");
  if(fw == NULL) {
    printf("Can't find destination file mate!\n");
    exit(0);
  }
  do {
    c = getc(fr);
    fputc(c, fw);
  } while(c != EOF);
  printf("\nI did it master! uwu\n");
  fclose(fr);
  fclose(fw);
  return 0;
}
