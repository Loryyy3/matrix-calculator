#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <stdlib.h>

// Global constants
#define NUM_MATRICES 26
#define MAX_DIM 25
#define FIRST_M 65
#define LAST_M (NUM_MATRICES+64)
#define CALCULATOR "🧮"

void memoryError(void);
void clear(void);
char obtainChar(void);
int ind(char c);
int isNotValid(char c);
int isNotValidDim(int dim);
void obtainDim(int *pm, int *pn);
int isZero(double x);
void swap(double *p1, double *p2);
void copyPaste(double ***M, char c, char d, int **dimM);

// for gauss algorithm
void gauss_reduction(double **M, int m, int n);

#endif
