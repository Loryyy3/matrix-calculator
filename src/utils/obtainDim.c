#include "utils.h"

void obtainDim(int *pm, int *pn, double ***M, int **dimM) {
  int m, n;
  do {
    get_value("#rows m: ", " %d", &m, M, dimM);
  } while (isNotValidDim(m));

  do {
    get_value("#cols n: ", " %d", &n, M, dimM);
  } while (isNotValidDim(n));

  *pm = m;
  *pn = n;
}
