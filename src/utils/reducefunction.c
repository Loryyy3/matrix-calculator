#include "utils.h"

void reducefunction(double **M, int m, int n) {
  double **pivots = malloc(m * sizeof(double *));
  if ( pivots == NULL ) {
    memoryError();
  }
  for (int i = 0; i < m; ++i) {
    pivots[i] = malloc(2 * sizeof(double));
    if ( pivots[i] == NULL ) {
      memoryError();
    }
  }



  // obtainPivots
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



  // gaussAlgorithm
  double a, A, value;
  short unsigned int pivotNonOttenuto;
  int intpivot;

  for (int j = 0; j < n - 1; ++j) {
    for (int l = 0; l < m; ++l) {
      if ( pivots[l][1] == j ) {
        for (int r = 0; r < m; ++r) {
          // TODO == -> isZero
          if ( r != l && pivots[r][1] == pivots[l][1] ) {


            // reduceLine(M, pivots, i, k, n);
            /*
             * l : a b c d e f ...
             * r : A B C D E F ...
             *
             * r -> r - A / a l
             */
            a = pivots[l][0];
            A = pivots[r][0];
            pivotNonOttenuto = 1;

            intpivot = (int) pivots[r][1];
            M[r][intpivot] = 0;
            for (int j = intpivot + 1; j < n; ++j) {
              value = M[r][j] - A / a * M[l][j];
              M[r][j] = value;
              if ( value != 0 && pivotNonOttenuto ) {
                pivots[r][0] = value;
                pivots[r][1] = j;
                pivotNonOttenuto = 0;
              }
            }
            if ( pivotNonOttenuto ) {
              pivots[r][1] = -1;
            }


          }
        }
        break;
      }
    }
  }



  for (int i = 0; i < m; ++i) {
    free(pivots[i]);
  }
  free(pivots);
}
