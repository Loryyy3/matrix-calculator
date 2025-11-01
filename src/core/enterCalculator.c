#include "utils.h"

void enterCalculator(void) {
  printf(" --- MATRIX CALCULATOR ---\n\n");
  printf("   .----.\n");
  printf("   |C>_ |\n");
  printf(" __|____|__\n");
  printf("|  ______--|\n");
  printf("`-/.::::.\\-'a\n");
  printf(" `--------'\n");

  printf("\nYou can use %d matrices (%c-%c) with max dim = %d x %d.\n\n", NUM_MATRICES, FIRST_M, LAST_M, MAX_DIM, MAX_DIM);
}
