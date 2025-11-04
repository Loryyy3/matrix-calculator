#include "utils.h"

void obtainPivots(double **M, double **pivots, int m, int n) {
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      if ( M[i][j] != 0 ) {
        pivots[i][0] = M[i][j];
        pivots[i][1] = j;
        break;
      }
      pivots[i][1] = -1;
    }
  }
}



void reduceLine(double **M, double **pivots, int l, int r, int n) {
            /*
             * l : a b c d e f ...
             * r : A B C D E F ...
             * r -> r - A / a * l
             */
            double a = pivots[l][0];
            double A = pivots[r][0];
            short unsigned int pivotNonOttenuto = 1;
            double value;

            int first_piv_position = (int) pivots[r][1];
            M[r][first_piv_position] = 0;
            for (int j = first_piv_position + 1; j < n; ++j) {
              value = M[r][j] - A / a * M[l][j];
              M[r][j] = value;
              if ( !isZero(value) && pivotNonOttenuto ) {
                pivots[r][0] = value;
                pivots[r][1] = j;
                pivotNonOttenuto = 0;
              }
            }
            if ( pivotNonOttenuto ) {
              pivots[r][1] = -1;
            }
}



void gauss_reduction(double **M, int m, int n) {
  double **pivots = malloc(m * sizeof(double *));
  if ( pivots == NULL ) {
    memoryError();
  }
  for (int i = 0; i < n; ++i) {
    pivots[i] = malloc(2 * sizeof(double));
    if ( pivots[i] == NULL) {
      for (int k = 0; k < i; ++k) {
        free(pivots[k]);
      }
      memoryError();
    }
  }

  obtainPivots(M, pivots, m, n);

  for (int j = 0; j < n - 1; ++j) {
    for (int l = 0; l < m; ++l) {
      if ( pivots[l][1] == j ) {
        for (int r = 0; r < m; ++r) {
          if ( r != l && pivots[r][1] == pivots[l][1] ) {
            reduceLine(M, pivots, l, r, n);
          }
        }
      }
    }
  }

}
