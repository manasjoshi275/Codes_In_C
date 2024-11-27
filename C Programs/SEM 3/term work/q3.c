//Q3.Write a C program to find and delete the node with second minimum data in the single link list.

#include <stdio.h>
#include <stdlib.h>

// Define the node structure
typedef struct node {
    int data;
    struct node *next;
} node;

node*createlink(node*);
void display(node*);
void second_min(node*);
void free_linked_list(node*);

int main() {
    node *head = NULL;
    int ch;
    do {
        printf("\n\nInput the choices:\n1-Create a link\n2-Display the link\n3-Find the second minimum\n0-Exit\n");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                head = createlink(head);
                break;
            case 2:
                display(head);
                break;
            case 3:
                second_min(head);
                break;
            case 0:
                free_linked_list(head);
                break;
            default:
                printf("\nInvalid choice.");
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

    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

// Function to find the second minimum in the linked list
void second_min(node *head) {
    if (head == NULL || head->next == NULL) {
        printf("\nNot enough elements to determine the second minimum.");
        return;
    }

    // Initialize min and second_min with the first two values
    int min, second_min;
    if (head->data < head->next->data) {
        min = head->data;
        second_min = head->next->data;
    } else {
        min = head->next->data;
        second_min = head->data;
    }

    node *current = head->next->next; // Start from the third node
    while (current != NULL) {
        if (current->data < min) {
            second_min = min;
            min = current->data;
        } else if (current->data > min && current->data < second_min) {
            second_min = current->data;
        }
        current = current->next;
    }

    if (min == second_min) {
        printf("\nNo second minimum value found (all values may be equal).");
    } else {
        printf("\nThe Second Minimum is %d", second_min);
    }
}

// Function to free the linked list memory
void free_linked_list(node *head) {
    node *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
    printf("\nMemory freed.");
}


