#include "utils.h"

void enterCalculator(void) {
  clear();
  char *calculator = CALCULATOR;

  // Bold yellow title
  printf("\033[1;33m --- %s MATRIX CALCULATOR %s ---\033[0m\n\n", calculator, calculator);

  // ASCII art in cyan with a slight magenta accent
  printf("\033[1;36m");  // cyan
  printf("   .----.\n");
  printf("   |C>_ |\n");
  printf(" __|____|__\n");
  printf("|  ______--|\n");
  printf("`-/.::::.\\-'\033[1;35ma\033[1;36m\n");  // accent 'a' in magenta
  printf(" `--------'\033[0m\n\n");  // reset color

  printf("\nYou can use %d matrices (%c-%c) with max dim = %d x %d.\n\n", NUM_MATRICES, FIRST_M, LAST_M, MAX_DIM, MAX_DIM);
}
