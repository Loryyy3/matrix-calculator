#include "utils.h"

void multiplyScalar(double ***M, int **dimM) {
  printf("Insert k * M:\n");

  double k;
  printf("k: ");
  scanf("%lf", &k);

  printf("M ");
  char c = obtainChar(M, dimM);

  printf("save in ");
  char d = obtainChar(M, dimM);

  int m = dimM[ind(c)][0];
  int n = dimM[ind(c)][1];

  if (d != c) {
    dimM[ind(d)][0] = m;
    dimM[ind(d)][1] = n;
  }

  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      M[ind(d)][i][j] = k * M[ind(c)][i][j];
    }
  }
}
