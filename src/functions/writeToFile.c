#include "utils.h"
#include "functions.h"

// for mkdir command
#include <sys/stat.h>
#include <sys/types.h>

void fwriteToFile(double **M, const char *filename, int rows, int cols) {
  mkdir("matrices", 0777);
  FILE *file = fopen(filename, "w");
  if (!file) {
    printf("Error opening file!\n");
    return;
  }

  // header in txt file
  fprintf(file, "%d %d\n", rows, cols);

  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      fprintf(file, "%.17g ", M[i][j]);
    }
    fprintf(file, "\n");
  }
  
  printf("File '%s' correctly written!\n", filename);

  fclose(file);
}

void writeToFile(double ***M, int **dimM) {
  printf("write ");
  char c = obtainChar(M, dimM);

  int m = dimM[ind(c)][0];
  int n = dimM[ind(c)][1];

  if (m == 0 || n == 0) {
    printf("Matrix %c does not exist!\n", c);
    obtainDim(&m, &n, M, dimM);
    fsave(M, c, m, n);
  }
  dimM[ind(c)][0] = m;
  dimM[ind(c)][1] = n;

  char filename[32];
  sprintf(filename, "matrices/%c.txt", c);

  fwriteToFile(M[ind(c)], filename, m, n);
}
