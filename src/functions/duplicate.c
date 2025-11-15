#include "utils.h"

void duplicate(double ***M, int **dimM) {
  printf("duplicate ");
  char c = obtainChar(M, dimM);

  printf("save in ");
  char d = obtainChar(M, dimM);

  if (d == c) {
    printf("Please choose a different matrix!\n");
    return;
  }

  copyPaste(M, c, d, dimM);
}
