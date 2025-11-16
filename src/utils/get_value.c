#include "utils.h"
#include "core.h"

void get_value(const char *prompt, const char *fmt, void *value, double ***M, int **dimM) {
  int counter;
  do {
    printf("%s", prompt);
    counter = scanf(fmt, value);

    if (counter == EOF) {
      printf("\nEOF detected. Exiting...\n");
      exitCalculator(M, dimM);
      exit(2);
    }

    if (counter != 1) {
      printf("Invalid input!\n");
      int ch;
      while ((ch = getchar()) != '\n' && ch != EOF) {}
    }
  } while (counter != 1);
}
