#include "utils.h"

char obtainChar(double ***M, int **dimM) {
  char c;

  do {
    char prompt[16];
    snprintf(prompt, sizeof(prompt), "(%c-%c): ", FIRST_M, LAST_M);
    get_value(prompt, " %c", &c, M, dimM);
  } while (isNotValid(c));

  return c;
}
