#include "utils.h"

void findMaxColumn(double ***M, int **dimM) {
  printf("max sum column ");
  char c = obtainChar();

  int m = dimM[ind(c)][0];
  int n = dimM[ind(c)][1];

  double sum;
  double max = 0;
  int maxposition = 0;
  for(int i = 0; i < m; ++i) {
    max += M[ind(c)][i][0];
  }
  for (int j = 1; j < n; ++j) {
    sum = 0;
    for (int i = 0; i < m; ++i) {
      sum += M[ind(c)][i][j];
    }
    if ( sum > max ) {
      max = sum;
      maxposition = j;
    }
  }

  printf("%c^%d : ( ", c, maxposition + 1);
  for (int i = 0; i < m - 1; ++i) {
    printf("%lf, ", M[ind(c)][i][maxposition]);
  }
  printf("%lf )\n", M[ind(c)][m - 1][maxposition]);
  printf("sum: %lf\n", sum);
}
