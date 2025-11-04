#include "utils.h"
#include "core.h"
#include "functions.h"

int main(void) {

  double ***M = malloc((NUM_MATRICES + 1) * sizeof(double **));
  if ( M == NULL ) {
    memoryError();
  }
  for (int i = 0; i < NUM_MATRICES + 1; ++i) {
    M[i] = malloc(MAX_DIM * sizeof(double *));
    if ( M[i] == NULL ) {
      memoryError();
    }
    for (int j = 0; j < MAX_DIM; ++j) {
      M[i][j] = malloc(MAX_DIM * sizeof(double));
      if ( M[i][j] == NULL ) {
        memoryError();
      }
    }
  }

  int **dimM = malloc((NUM_MATRICES + 1) * sizeof(int *));
  if ( dimM == NULL ) {
    memoryError();
  }
  for (int i = 0; i < NUM_MATRICES + 1; ++i) {
    dimM[i] = malloc(2 * sizeof(int));
    if ( dimM[i] == NULL ) {
      memoryError();
    }
  }

  enterCalculator();

  char choice;
  int m, n;
  while ( 1 ) {
    printf("('h' for manual) choose an action: ");
    scanf(" %c", &choice);
    clear();

    switch ( choice ) {
      case 'h':
        help();
        break;
      case 'c':
        clear();
        break;
      case 'q':
        exitCalculator(M, dimM);
        return 0;
      case 's':
        obtainDim(&m, &n);
        save(M, dimM, m, n);
        break;
      case 'i':
        obtainDim(&m, &n);
        initialize(M, dimM, m, n);
        break; 
      case 'R':
        obtainDim(&m, &n);
        initializeRandom(M, dimM, m, n);
        break;
      case 'r':
        // readFromFile();
        break;
      case 'w':
        // writeToFile();
        break; 
      case 'p':
        print(M, dimM);
        break; 
      case 'm':
        checkSym(M, dimM);
        break;
      case 't':
        transpose(M, dimM);
        break;
      case '^':
        findMaxColumn(M, dimM);
        break;
      case 'd':
        duplicate(M, dimM);
        break;
      case '*':
        multiplyScalar(M, dimM);
        break;
      case '+':
        sum(M, dimM);
        break;
      case '-':
        subtract(M, dimM);
        break;
      case 'x':
        multiply(M, dimM);
        break;
      case 'g':
        reduce(M, dimM);
        break;
      case 'D':
        determinant(M, dimM);
        break;
      default:
        printf("Invalid choice!\n");
        break;
    }
  }

  exitCalculator(M, dimM);

  return 0;
}
