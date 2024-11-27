//Q4 Write a C program to create a single linked list, then find whether there exist any two nodes in the linked list whose multiplication is less than the target value.

#include <stdio.h>
#include <stdlib.h>

// Define the node structure
typedef struct node {
    int data;
    struct node *next;
} node;

node *createlink(node *);
void display(node *);
void multiply(node *); 

int main() {
    node *head = NULL;
    int ch;
    do {
        printf("\n\nInput the choice:\n1-Create a link\n2-Display\n3-Find if any pair matches the target value\n0-Exit\n");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                head = createlink(head);
                break;
            case 2:
                display(head);
                break;
            case 3:
                multiply(head);
                break;
            case 0:
                printf("\nExiting...");
                break;
            default:
                printf("\nInvalid choice. Try again.");
        }
    } while (ch != 0);

    return 0;
}

// Function to create a linked list
node*createlink(node*head){
    node*ptr=NULL;
    node*temp=head;
    ptr=(node*)malloc(sizeof(node));
    printf("\nEnter the node value: ");
    scanf("%d",&ptr->data);
    ptr->next=NULL;
    if(head==NULL){
        head=ptr;
    }
    else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=ptr;
    }
    return head;
}

// Function to display the linked list
void display(node *head) {
    if (head == NULL) {
        printf("\nThe list is empty.");
        return;
    }

    printf("\nLinked List: ");
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

// Function to find if any pair of elements has a product equal to the target value
void multiply(node *head) {
    if (head == NULL || head->next == NULL) {
        printf("\nNot enough elements in the list to calculate.");
        return;
    }

    int target, flag = 0;
    printf("\nInput the target value: ");
    scanf("%d", &target);

    // Outer loop to pick the first element
    for (node *current = head; current != NULL; current = current->next) {
        // Inner loop to pick the second element
        for (node *temp = current->next; temp != NULL; temp = temp->next) {
            if (current->data * temp->data == target) {
                printf("\nYes, the pair (%d, %d) gives the product %d.", current->data, temp->data, target);
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            break;
    }

    if (flag == 0)
        printf("\nNo pair of elements has a product equal to the target value.");
}

