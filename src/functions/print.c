#include "utils.h"

void print(double ***M, int **dimM) {
  printf("print ");
  char c = obtainChar();

  int m = dimM[ind(c)][0];
  int n = dimM[ind(c)][1];

  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      printf("%.3lf\t", M[ind(c)][i][j]);
    }
    printf("\n");
  }
}
