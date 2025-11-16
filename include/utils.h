#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#define NUM_MATRICES 26
#define MAX_DIM 25
#define FIRST_M 65
#define LAST_M (NUM_MATRICES+64)
#define CALCULATOR "🧮"

void memoryError(void);
void clear(void);

char obtainChar(double ***M, int **dimM);
void get_value(const char *prompt, const char *fmt, void *value, double ***M, int **dimM);

int ind(char c);
int isNotValid(char c);
int isNotValidDim(int dim);
void obtainDim(int *pm, int *pn, double ***M, int **dimM);
int isZero(double x);
void swap(double *p1, double *p2);
void copyPaste(double ***M, char c, char d, int **dimM);

void reduceLine(double **M, int l, double A, int r, double a, int start_index, int n);
void swapLines(double **M, int line1, int line2);
void gauss_reduction(double **M, int m, int n);

#endif
