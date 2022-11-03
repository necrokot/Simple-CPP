#include <stdio.h>
// #include "log/log.h"

int main(int argc, char** argv) {
    printf("pick a number\n");

    char input;
    int leftBorder, rightBorder, guess;

    printf("enter a value for the left border\n");
    scanf("%i", &leftBorder);
    printf("enter a value for the right border\n");
    scanf("%i", &rightBorder);

    while (true)
    {
        guess = leftBorder + (rightBorder - leftBorder)/2;
        printf("%i - is it your number?\n", guess);
        scanf("%1s", &input);
        // getchar();

        switch (input)
        {
        case '=':
            printf("done\n");
            return 0;
        case '<':
            rightBorder = guess;
            break;

        case '>':
            leftBorder = guess;
            break;
        
        default:
            break;
        }
    }
    
    return 0;
}