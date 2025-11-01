#include "utils.h"

int isZero(double x) {
    const double EPSILON = 1e-9;  // adjust depending on precision needs
    return x < EPSILON && x > - EPSILON;
}
