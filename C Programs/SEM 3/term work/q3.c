//Q3.Write a C program to find and delete the node with second minimum data in the single link list.

#include <stdio.h>
#include <stdlib.h>

// Define the node structure for a singly linked list
typedef struct node {
    int data;
    struct node* next;
} node;

// Function declarations
node* createList(node* head);
void displayList(node* head);
node* findSecondMin(node* head);
node* deleteSecondMin(node* head, int secondMin);

int main() {
    node* head = NULL;
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Create a list\n");
        printf("2. Display the list\n");
        printf("3. Find and delete the second minimum value\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                head = createList(head);
                break;
            case 2:
                displayList(head);
                break;
            case 3:
                {
                    int secondMin = findSecondMin(head);
                    if (secondMin != -1) {
                        head = deleteSecondMin(head, secondMin);
                    }
                }
                break;
            case 0:
                printf("\nExiting program...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}

// Function to create a linked list
node* createList(node* head) {
    node* newNode, *temp;
    int value;

    newNode = (node*)malloc(sizeof(node));
    printf("Enter value: ");
    scanf("%d", &value);
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    return head;
}

// Function to display the linked list
void displayList(node* head) {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to find the second minimum value in the list
node* findSecondMin(node* head) {
    if (head == NULL || head->next == NULL) {
        printf("Not enough elements to determine the second minimum.\n");
        return -1; // Indicating no second minimum exists
    }

    node *current = head, *prev = NULL;
    int min = head->data, secondMin = -1;

    while (current != NULL) {
        if (current->data < min) {
            secondMin = min;
            min = current->data;
        } else if (current->data > min && (secondMin == -1 || current->data < secondMin)) {
            secondMin = current->data;
        }
        current = current->next;
    }

    if (secondMin == -1) {
        printf("No second minimum value found.\n");
    } else {
        printf("Second minimum value is %d.\n", secondMin);
    }
    return secondMin;
}

// Function to delete the node with the second minimum value
node* deleteSecondMin(node* head, int secondMin) {
    if (head == NULL) {
        printf("The list is empty.\n");
        return head;
    }

    node *current = head, *prev = NULL;

    // Check if the second minimum is at the head of the list
    if (head->data == secondMin) {
        node* temp = head;
        head = head->next;
        free(temp);
        printf("The second minimum value %d has been deleted.\n", secondMin);
        return head;
    }

    // Traverse the list to find and delete the second minimum
    while (current != NULL && current->data != secondMin) {
        prev = current;
        current = current->next;
    }

    // If secondMin is found, delete it
    if (current != NULL) {
        prev->next = current->next;
        free(current);
        printf("The second minimum value %d has been deleted.\n", secondMin);
    }

    return head;
}





