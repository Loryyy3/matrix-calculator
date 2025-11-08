#include "utils.h"

void fsave(double ***M, char c, int m, int n) {
  for (int i = 0; i < m; ++i) {
    printf("Row #%d:\n", i + 1);
    for (int j = 0; j < n; ++j) {
      printf("(%d, %d): ", i + 1, j + 1);
      scanf("%lf", &M[ind(c)][i][j]);
    }
    printf("\n");
  }
}

void save(double ***M, int **dimM, int m, int n) {
  printf("save in ");
  char c = obtainChar();

  dimM[ind(c)][0] = m;
  dimM[ind(c)][1] = n;

  fsave(M, c, m, n);
}
