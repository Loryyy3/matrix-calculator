#include "utils.h"
#include "core.h"

int readValue(const char *prompt, const char *fmt, void *value) {
    int counter;
    do {
        printf("%s", prompt);
        counter = scanf(fmt, value);

        if (counter == EOF) return 0;

        if (counter != 1) {
            printf("Invalid input!\n");
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF) {}
        }
    } while (counter != 1);
    return 1;
}


bool get_value(const char *prompt, const char *fmt, void *value, double ***M, int **dimM) {
  if (!readValue(prompt, fmt, value)) {
    printf("\nEOF detected. Exiting...\n");
    exitCalculator(M, dimM);
    exit(2);
  }
  return true;
}
