#include <stdio.h>
#include <stdlib.h>

#define N 100

struct Point {
    int x;
    int y;
};

Point generatePoint () {
    int x = rand()%201-100;
    int y = rand()%201-100;
    return {x, y};
}

void printPoint (Point p) {
    printf("{%i, %i}\n", p.x, p.y);
}

int main(int, char**) {

    unsigned int numberOfPoints;
    printf("enter the number of points\n");
    scanf("%i", &numberOfPoints);

    Point *points = (Point *)malloc(sizeof(Point)*numberOfPoints);

    for (unsigned int i = 0; i < numberOfPoints; i++)
    {
        points[i] = generatePoint();
    }

    for (unsigned int i = 0; i < numberOfPoints; i++)
    {
        printPoint(points[i]);
    }
    
    return 0;
}
