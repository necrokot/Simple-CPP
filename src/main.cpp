#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list/list.h"


int main(int, char**) {

    char *str = "10 15 - 3 *";
    const char *sep = " ";
    //printf("%s\n", str);

    char *input = (char*)malloc(sizeof(strlen(str)));
    input = strncpy (input, str, strlen(str));

    char *token = strtok (input, sep);

    ListNode* list = NULL;

    while (token) {
        //printf("%s\n", token);
        switch (*token)
        {
        case '+': {
            double op1 = popFront (&list);
            double op2 = popFront (&list);
            double sum = op1 + op2;
            pushFront (sum, &list);
            break;
    }
    
        case '-': {
            double op1 = popFront (&list);
            double op2 = popFront (&list);
            double sub = op2 - op1;
            pushFront (sub, &list);
            break;
    }

        case '*': {
            double op1 = popFront (&list);
            double op2 = popFront (&list);
            double mult = op1 * op2;
            pushFront (mult, &list);
            break;
    }

        case '/': {
            double op1 = popFront (&list);
            double op2 = popFront (&list);
            double div = op2 / op1;
            pushFront (div, &list);
            break;
    }

        default:
            double num = strtod (token, NULL);
            pushFront (num, &list);
            break;
        }

        token = strtok (NULL, sep);
    }
 
    printList (list);

    return 0;
}