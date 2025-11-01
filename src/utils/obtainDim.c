#include "utils.h"

void obtainDim(int *pm, int *pn) {
  int m, n;
  do {
    printf("#rows m: ");
    scanf("%d", &m);
  }
  while ( isNotValidDim(m) );
  do {
    printf("#columns n: ");
    scanf("%d", &n);
  }
  while ( isNotValidDim(n) );
  *pm = m;
  *pn = n;
}
