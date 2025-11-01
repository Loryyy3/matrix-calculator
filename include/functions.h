#ifndef FUNCTIONS_H
#define FUNCTIONS_H

// functionalities declarations
void save(double ***M, int **dimM, int m, int n);
void initialize(double ***M, int **dimM, int m, int n);
void initializeRandom(double ***M, int **dimM, int m, int n);
void print(double ***M, int **dimM);
void checkSym(double ***M, int **dimM);
void transpose(double ***M, int **dimM);
void findMaxColumn(double ***M, int **dimM);
void duplicate(double ***M, int **dimM);
void multiplyScalar(double ***M, int **dimM);
void sum(double ***M, int **dimM);
void subtract(double ***M, int **dimM);
void multiply(double ***M, int **dimM);
void reduce(double ***M, int **dimM);
void determinant(double ***M, int **dimM);

#endif
