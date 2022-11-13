#include <stdio.h>
#include <stdlib.h>

#define N 100

struct Point {
    int x;
    int y;
};

int main(int, char**) {
    Point a = {0, 0}, b = {10, 100};

    char *dynAdress = (char *)malloc(2*N);
    delete dynAdress;

    return 0;
}
