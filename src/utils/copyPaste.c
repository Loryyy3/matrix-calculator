#include "utils.h"

void copyPaste(double ***M, char c, char d, int **dimM) {
  int m = dimM[ind(c)][0];
  int n = dimM[ind(c)][1];

  dimM[ind(d)][0] = m;
  dimM[ind(d)][1] = n;

  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      M[ind(d)][i][j] = M[ind(c)][i][j];
    }
  }
}
