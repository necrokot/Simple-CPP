#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

BinaryTree* createNode (double data) {
    BinaryTree* node = (BinaryTree*)malloc(sizeof(BinaryTree));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void insert (double data, BinaryTree** tree) {
    if (*tree == NULL)
    {
        *tree = createNode (data);
    }
    else if (data < (*tree)->data)
    {
        if ((*tree)->left == NULL)
        {
            (*tree)->left = createNode (data);
        }
        else
        {
            insert(data, &(*tree)->left);
        }
    }
    else
    {
        if ((*tree)->right == NULL)
        {
            (*tree)->right = createNode (data);
        }
        else
        {
            insert(data, &(*tree)->right);
        }
    }
    
}
