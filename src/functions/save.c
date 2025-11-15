#include "utils.h"

void fsave(double ***M, int **dimM, char c, int m, int n) {
  for (int i = 0; i < m; ++i) {
    printf("Row #%d:\n", i + 1);
    for (int j = 0; j < n; ++j) {
      char prompt[32];
      snprintf(prompt, sizeof(prompt), "(%d, %d): ", i + 1, j + 1);

      if (!get_value(prompt, "%lf", &M[ind(c)][i][j], M, dimM)) {
        return;
      }
    }
    printf("\n");
  }
}

void save(double ***M, int **dimM, int m, int n) {
  printf("save in ");
  char c = obtainChar(M, dimM);

  dimM[ind(c)][0] = m;
  dimM[ind(c)][1] = n;

  fsave(M, dimM, c, m, n);
}
