#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

TreeNode* createNode() {
    TreeNode *newNode = (TreeNode*)malloc(sizeof(TreeNode));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(EXIT_FAILURE);
    }

    printf("Enter node id: ");
    scanf("%d", &(newNode->id));

    printf("Enter project name (up to %d characters): ", MAX_PROJ_NAME);
    scanf("%s", newNode->project);

    newNode->left = newNode->right = NULL;
    return newNode;
}

void insertNode(TreeNode **root, TreeNode *newNode) {
    if (*root == NULL) {
        *root = newNode;
    } else {
        if (newNode->id < (*root)->id) {
            insertNode(&((*root)->left), newNode);
        } else {
            insertNode(&((*root)->right), newNode);
        }
    }
}

void freeTree(TreeNode *root) {
    if (root != NULL) {
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}

int treeHeight(TreeNode *root) {
    if (root == NULL) {
        return 0;
    } else {
        int leftHeight = treeHeight(root->left);
        int rightHeight = treeHeight(root->right);
        return (leftHeight > rightHeight) ? (leftHeight + 1) : (rightHeight + 1);
    }
}
