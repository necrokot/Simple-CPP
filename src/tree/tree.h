struct BinaryTree
{
    double data;
    BinaryTree *left;
    BinaryTree *right;
};

BinaryTree* createNode (double data);

void insert (double data, BinaryTree** tree);