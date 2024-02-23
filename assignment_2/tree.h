#ifndef TREE_H
#define TREE_H

#define MAX_PROJ_NAME 32

typedef struct myNode
{
    int id;
    char project[MAX_PROJ_NAME];
    struct myNode *left;
    struct myNode *right;
} TreeNode;

TreeNode* createNode();
void insertNode(TreeNode **root, TreeNode *newNode);
void freeTree(TreeNode *root);
int treeHeight(TreeNode *root);

#endif
