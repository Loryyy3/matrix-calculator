#include <time.h>
#include "utils.h"

void initializeRandom(double ***M, int **dimM, int m, int n) {
  printf("random initialize ");
  char c = obtainChar();

  dimM[ind(c)][0] = m;
  dimM[ind(c)][1] = n;

  int max;
  do {
    printf("Random range max: ");
    scanf("%d", &max);
  }
  while ( max < 1 );
  srand(time(NULL));
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      M[ind(c)][i][j] = rand() % (max + 1);
    }
  }
}
