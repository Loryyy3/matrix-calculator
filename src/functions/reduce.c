#include "utils.h"

void reduce(double ***M, int **dimM) {
  printf("riduce ");
  char c = obtainChar();

  printf("save in ");
  char d = obtainChar();

  int m = dimM[ind(c)][0];
  int n = dimM[ind(c)][1];

  if ( d != c ) {
    copyPaste(M, c, d, dimM);
  }

  reducefunction(M[ind(d)], m, n);
}
