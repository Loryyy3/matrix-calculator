#include "utils.h"

void transpose(double ***M, int **dimM) {
  printf("transpose ");
  char c = obtainChar(M, dimM);

  printf("save in ");
  char d = obtainChar(M, dimM);

  int m = dimM[ind(c)][0];
  int n = dimM[ind(c)][1];

  dimM[ind(d)][0] = n;
  dimM[ind(d)][1] = m;

  if (d == c) {
    for (int i = 0; i < m; ++i) {
      for (int j = 0; j < n; ++j) {
        swap(&M[ind(c)][i][j], &M[ind(c)][j][i]);
      }
    }
  } else {
    for (int i = 0; i < m; ++i) {
      for (int j = 0; j < n; ++j) {
        M[ind(d)][j][i] = M[ind(c)][i][j];
      }
    }
  }
}
