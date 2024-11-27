/*Q6. W.A.P. to create a binary search tree and perform the following operations:
         1) Find a node with second highest data. 
         2) Delete a node from the tree.
         3) Count total number of nodes having common parent. 
         4) Find the height of a binary search tree
         5) Count total numbers of nodes from left hand side of the root node */

#include <stdio.h>
#include <stdlib.h>

// Define a structure for the binary search tree node
typedef struct node {
    int data;
    struct node *left, *right;
} node;

// Function to create a new node
node *createNode(int val) {
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a node into the BST
node *insert(node *root, int val) {
    if (root == NULL) {
        return createNode(val);
    }
    if (val < root->data) {
        root->left = insert(root->left, val);
    } else if (val > root->data) {
        root->right = insert(root->right, val);
    }
    return root;
}

// Function to perform an in-order traversal and display the BST
void display(node *root) {
    if (root != NULL) {
        display(root->left);
        printf("%d ", root->data);
        display(root->right);
    }
}

// Function to find the second highest node in the BST
int findSecondHighest(node *root) {
    if (root == NULL || (root->left == NULL && root->right == NULL)) {
        printf("\nTree must have at least two nodes.");
        return -1;
    }

    node *parent = NULL;
    node *current = root;

    // Traverse to the rightmost node
    while (current->right != NULL) {
        parent = current;
        current = current->right;
    }

    // If the rightmost node has a left subtree
    if (current->left != NULL) {
        node *temp = current->left;
        while (temp->right != NULL) {
            temp = temp->right;
        }
        return temp->data;
    }

    // Otherwise, the second highest is the parent of the rightmost node
    return parent->data;
}

// Function to find the height of the BST
int findHeight(node *root) {
    if (root == NULL) {
        return -1; // Height of an empty tree is -1
    }
    int leftHeight = findHeight(root->left);
    int rightHeight = findHeight(root->right);
    return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
}

// Function to count the total number of nodes having both left and right children
int countCommonParents(node *root) {
    if (root == NULL) {
        return 0;
    }
    int count = 0;
    if (root->left != NULL && root->right != NULL) {
        count++;
    }
    return count + countCommonParents(root->left) + countCommonParents(root->right);
}

// Function to count the total number of nodes on the left-hand side of the root node
int countLeftNodes(node *root) {
    if (root == NULL || root->left == NULL) {
        return 0;
    }
    return 1 + countLeftNodes(root->left) + countLeftNodes(root->left->right);
}

// Function to find the in-order successor of a node
node *findInOrderSuccessor(node *current) {
    current = current->right;
    while (current != NULL && current->left != NULL) {
        current = current->left;
    }
    return current;
}

// Function to delete a node from the BST
node *deleteNode(node *root, int val) {
    if (root == NULL) {
        return root;
    }

    if (val < root->data) {
        root->left = deleteNode(root->left, val);
    } else if (val > root->data) {
        root->right = deleteNode(root->right, val);
    } else {
        // Node with one child or no child
        if (root->left == NULL) {
            node *temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            node *temp = root->left;
            free(root);
            return temp;
        }

        // Node with two children: Get the in-order successor
        node *successor = findInOrderSuccessor(root);
        root->data = successor->data;
        root->right = deleteNode(root->right, successor->data);
    }
    return root;
}

// Main function
int main() {
    node *root = NULL;
    int choice, val;

    do {
        printf("\n--- Binary Search Tree Operations ---");
        printf("\n1. Insert a node into the BST");
        printf("\n2. Display the BST (In-Order)");
        printf("\n3. Find the second highest node");
        printf("\n4. Delete a node from the BST");
        printf("\n5. Count total nodes with common parents");
        printf("\n6. Find the height of the BST");
        printf("\n7. Count total nodes on the left-hand side of the root");
        printf("\n0. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nEnter the value to insert: ");
                scanf("%d", &val);
                root = insert(root, val);
                break;
            case 2:
                printf("\nBST (In-Order): ");
                display(root);
                printf("\n");
                break;
            case 3:
                val = findSecondHighest(root);
                if (val != -1) {
                    printf("\nThe second highest value is: %d\n", val);
                }
                break;
            case 4:
                printf("\nEnter the value to delete: ");
                scanf("%d", &val);
                root = deleteNode(root, val);
                printf("\nNode deleted (if it existed).\n");
                break;
            case 5:
                val = countCommonParents(root);
                printf("\nTotal nodes with common parents: %d\n", val);
                break;
            case 6:
                val = findHeight(root);
                printf("\nHeight of the BST: %d\n", val);
                break;
            case 7:
                val = countLeftNodes(root);
                printf("\nTotal nodes on the left-hand side of the root: %d\n", val);
                break;
            case 0:
                printf("\nExiting...\n");
                break;
            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}

