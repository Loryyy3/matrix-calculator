#include "utils.h"

void help(void) {
  printf("h: help manual\n");
  printf("q: exit\n");
  printf("s: save\n");
  printf("i: initialize with index sums\n");
  printf("R: initialize random\n");
  printf("r: read from file\n");
  printf("w: write to file\n");
  printf("p: print\n");

  printf("m: check symmetry\n");
  printf("t: transpose\n");
  printf("^: find max sum column\n");

  printf("d: duplicate\n");

  printf("*: multiply scalar\n");
  printf("+: sum\n");
  printf("-: subtraction\n");
  printf("x: multiply\n");
  printf("g: gauss reduction\n");
  printf("D: determinant\n");
}
