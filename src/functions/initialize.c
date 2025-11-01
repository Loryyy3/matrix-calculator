#include "utils.h"

void initialize(double ***M, int **dimM, int m, int n) {
  printf("initialize ");
  char c = obtainChar();

  dimM[ind(c)][0] = m;
  dimM[ind(c)][1] = n;

  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      M[ind(c)][i][j] = i + j + 2;
    }
  }
}
