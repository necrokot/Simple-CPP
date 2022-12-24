#include <stdio.h>
#include <stdlib.h>
#include "tree/tree.h"


int main(int, char**) {
    BinaryTree *tree = NULL;
    insert (100, &tree);
    insert (80, &tree);
    insert (300, &tree);
    return 0;
}