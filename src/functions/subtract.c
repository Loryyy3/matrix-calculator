#include "utils.h"

void subtract(double ***M, int **dimM) {
  printf("Insert M1 - M2:\n");

  printf("M1 ");
  char c1 = obtainChar(M, dimM);
  printf("M2 ");
  char c2 = obtainChar(M, dimM);

  int m1 = dimM[ind(c1)][0];
  int n1 = dimM[ind(c1)][1];

  int m2 = dimM[ind(c2)][0];
  int n2 = dimM[ind(c2)][1];

  if (m1 != m2 || n1 != n2) {
    printf("Matrices must be of the same dimensions!\n");
    printf("dim %c = %d x %d, dim %c = %d x %d\n", c1, m1, n1, c2, m2, n2);
    return;
  }

  printf("save in ");
  char c = obtainChar(M, dimM);
  
  if (c != c1 && c != c2) {
    dimM[ind(c)][0] = m1;
    dimM[ind(c)][1] = n1;
  }

  for (int i = 0; i < m1; ++i) {
    for (int j = 0; j < n1; ++j) {
      M[ind(c)][i][j] = M[ind(c1)][i][j] - M[ind(c2)][i][j];
    }
  }
}
