#include "utils.h"

void exitCalculator(double ***M, int **dimM) {
  for (int i = 0; i < NUM_MATRICES + 1; ++i) {

    free(dimM[i]);

    for (int j = 0; j < MAX_DIM; ++j) {
      free(M[i][j]);
    }
    free(M[i]);
  }

  free(dimM);
  free(M);

  printf("Exit ...\n");
}
