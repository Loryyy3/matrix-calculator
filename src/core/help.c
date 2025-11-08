#include "utils.h"

void help(void) {
    clear();
    // Borders in bold blue
    printf("\033[1;34m+-------------------------+--------------------------------------------+\033[0m\n");
    // Header row: commands green, description yellow
    printf("\033[1;34m|\033[0m \033[32mCommand\033[0m                 \033[1;34m|\033[0m \033[33mDescription\033[0m                                \033[1;34m|\033[0m\n");
    printf("\033[1;34m+-------------------------+--------------------------------------------+\033[0m\n");

    // Rows with commands
    printf("| \033[31mh\033[0m                       | \033[33mhelp manual\033[0m                                |\n");
    printf("| \033[31mc\033[0m                       | \033[33mclear\033[0m                                      |\n");
    printf("| \033[31mq\033[0m                       | \033[33mexit\033[0m                                       |\n");
    printf("| \033[32ms\033[0m                       | \033[33msave\033[0m                                       |\n");
    printf("| \033[32mi\033[0m                       | \033[33minitialize with index sums\033[0m                 |\n");
    printf("| \033[32mR\033[0m                       | \033[33minitialize random\033[0m                          |\n");
    printf("| \033[32mr\033[0m                       | \033[33mread from file\033[0m                             |\n");
    printf("| \033[32mw\033[0m                       | \033[33mwrite to file\033[0m                              |\n");
    printf("| \033[32mp\033[0m                       | \033[33mprint\033[0m                                      |\n");
    printf("| \033[32mm\033[0m                       | \033[33mcheck symmetry\033[0m                             |\n");
    printf("| \033[32mt\033[0m                       | \033[33mtranspose\033[0m                                  |\n");
    printf("| \033[32m^\033[0m                       | \033[33mfind max sum column\033[0m                        |\n");
    printf("| \033[32md\033[0m                       | \033[33mduplicate\033[0m                                  |\n");
    printf("| \033[32m*\033[0m                       | \033[33mmultiply scalar\033[0m                            |\n");
    printf("| \033[32m+\033[0m                       | \033[33msum\033[0m                                        |\n");
    printf("| \033[32m-\033[0m                       | \033[33msubtraction\033[0m                                |\n");
    printf("| \033[32mx\033[0m                       | \033[33mmultiply\033[0m                                   |\n");
    printf("| \033[32mg\033[0m                       | \033[33mgauss reduction\033[0m                            |\n");
    printf("| \033[32mD\033[0m                       | \033[33mdeterminant\033[0m                                |\n");

    // Bottom border
    printf("\033[1;34m+-------------------------+--------------------------------------------+\033[0m\n");
}
