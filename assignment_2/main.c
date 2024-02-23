#include <stdio.h>
#include "tree.h"

int main() {
    TreeNode *root = NULL;
    int choice;

    do {
        printf("\n1. Insert Node\n");
        printf("2. Calculate Tree Height\n");
        printf("3. Free Tree\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertNode(&root, createNode());
                break;
            case 2:
                printf("Tree Height: %d\n", treeHeight(root));
                break;
            case 3:
                freeTree(root);
                root = NULL;
                printf("Tree freed successfully!\n");
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 4);

    return 0;
}
