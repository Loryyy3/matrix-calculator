#include "utils.h"

void reduceLine(double **M, int l, double a, int r, double A, int start_index, int n) {
  /*
   * l : a b c d e f ...
   * r : A B C D E F ...
   * r -> r - A / a * l
   */
  for (int j = start_index; j < n; ++j) {
    printf("M[%d][%d] -= %lf / %lf * %lf\n", r + 1, j + 1, A, a, M[l][j]);
    M[r][j] -= A / a * M[l][j];
  }
}

void swapLines(double **M, int line1, int line2) {
  printf("swapping line %d with %d\n", line1 + 1, line2 + 1);
  double *tempLine = M[line1];
  M[line1] = M[line2];
  M[line2] = tempLine;
}

void gauss_reduction(double **M, int m, int n) {
  double a, A;
  int count_lines = 0;
  for (int j = 0; j < n - 1 && count_lines < m; ++j) {
    int pivot_row = -1;
    for (int l = count_lines; l < m; ++l) {
      if ( !isZero(M[l][j]) ) {
        pivot_row = l;
        break;
      }
    }

    if ( pivot_row == -1 ) {
      continue;
    }

    if ( pivot_row != count_lines ) {
      swapLines(M, pivot_row, count_lines);
    }

    a = M[count_lines][j];

    for (int r = 0; r < m; ++r) {
      if ( r == count_lines ) {
        continue;
      }
      if ( !isZero(M[r][j]) ) {
        A = M[r][j];
        reduceLine(M, count_lines, a, r, A, j, n);
      }
    }
    
    ++count_lines;
  }
}
