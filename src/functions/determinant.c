#include "utils.h"

void determinant(double ***M, int **dimM) {
  printf("det ");
  char c = obtainChar();

  int m = dimM[ind(c)][0];
  int n = dimM[ind(c)][1];

  if ( m != n ) {
    printf("You need to choose a square matrix!\n");
    printf("dim %c = %d x %d\n", c, m, n);
    return;
  }

  copyPaste(M, c, '[', dimM);
  gauss_reduction(M[ind('[')], m, n);

  double det = 1;
  for (int i = 0; i < m; ++i) {
    det *= M[ind('[')][i][i];
  }

  printf("det %c = %lf\n", c, det);
}
