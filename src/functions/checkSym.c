#include "utils.h"

void checkSym(double ***M, int **dimM) {
  printf("check ");
  char c = obtainChar(M, dimM);

  int m = dimM[ind(c)][0];
  int n = dimM[ind(c)][1];

  if (m != n) {
    printf("You need to choose a square matrix!\n");
    printf("dim %c = %d x %d\n", c, m, n);
    return;
  }

  for (int i = 0; i < m; ++i) {
    for (int j = i + 1; j < n; ++j) {
      if (M[ind(c)][i][j] != M[ind(c)][j][i]) {
        printf("%c[%d][%d] != %c[%d][%d]\n", c, i + 1, j + 1, c, j + 1, i + 1);
        printf("Matrix %c is not symmetric!\n", c);
        return;
      }
    }
  }
  printf("Matrix %c is symmetric!\n", c);
}
