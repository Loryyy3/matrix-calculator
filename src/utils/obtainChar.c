#include "utils.h"

char obtainChar(void) {
  char c;

  do {
    printf("(%c-%c): ", FIRST_M, LAST_M);
    scanf(" %c", &c);
  }
  while ( isNotValid(c) );

  return c;
}
