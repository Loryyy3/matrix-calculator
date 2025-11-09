#include "utils.h"

void freadFromFile(double ***M, const char *filename, int **dimM) {
  FILE *file = fopen(filename, "r");
  if ( !file ) {
    printf("Error opening file!\n");
    return;
  }

  int rows, cols;
  if ( fscanf(file, "%d %d", &rows, &cols) != 2 ) {
    printf("Empty file %s!\n", filename);
    fclose(file);
    return;
  }

  char c = filename[9];

  dimM[ind(c)][0] = rows;
  dimM[ind(c)][1] = cols;

  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      if ( fscanf(file, "%lf", &M[ind(c)][i][j]) != 1 ) {
        printf("Error reading element [%d][%d] in '%s'\n", i + 1, j + 1, filename);
        fclose(file);
        return;
      }
    }
  }
  printf("File '%s' correctly read! (%d x %d)\n", filename, rows, cols);

  fclose(file);
}

void readFromFile(double ***M, int **dimM) {
  printf("read ");
  char c = obtainChar();

  char filename[32];
  sprintf(filename, "matrices/%c.txt", c);

  freadFromFile(M, filename, dimM);
}
