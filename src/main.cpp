#include <stdio.h>
// #include "log/log.h"

const float FLOAT_EPSILON = 0.000000001;

void main(int, char**) {
    int a = 10, b = 11;
    if(a = b) {
        // do nothing
    }
    if(a >= b) {
        printf("a >= b");
    } else {
        printf("a < b");
    }

    float fa = 0.1, fb = 0.2;
    if(fa - fb >= FLOAT_EPSILON) {
        printf("fa >= fb");
    } else {
        printf("fa < fb");
    }
}
