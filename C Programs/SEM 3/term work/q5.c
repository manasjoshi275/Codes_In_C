//Q5 Write a C program to find the node in the double linked list , at which the two linked list are intersected.

#include <stdio.h>
#include <stdlib.h>

// Define the doubly linked list node
typedef struct node {
    int data;
    struct node *next;
    struct node *prev;
} node;

/* Function to create a doubly linked list
node *createdoubly(node *head) {
    node *newnode = NULL, *temp = NULL;
    int ch = 0;

    while (1) {
        newnode = (node *)malloc(sizeof(node));
        if (newnode == NULL) {
            printf("\nMemory allocation failed.");
            return head;
        }

        printf("\nInput the data of the node: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        newnode->prev = NULL;

        if (head == NULL) {
            head = temp = newnode;
        } else {
            newnode->prev = temp;
            temp->next = newnode;
            temp = newnode;
        }

        printf("\nTo end, press 0. Otherwise, press any other number: ");
        scanf("%d", &ch);
        if (ch == 0)
            break;
    }

    return head;
}*/
node*createdoubly(node*head){
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
        ptr->prev = temp;
        temp->next = ptr;
        temp = ptr;
    }
    return head;
}

// Function to display a doubly linked list
void display(node *head) {
    if (head == NULL) {
        printf("\nThe list is empty.");
        return;
    }

    printf("\nDoubly Linked List: ");
    while (head != NULL) {
        printf("\nData: %d, Next: %p, Prev: %p", head->data, head->next, head->prev);
        head = head->next;
    }
    printf("\n");
}

// Function to find the intersection of two doubly linked lists
int intersection(node *head1, node *head2) {
    node *temp = head2;

    while (head1 != NULL) {
        head2 = temp;
        while (head2 != NULL) {
            if (head1->data == head2->data) {
                return head2->data; // Return the first matching node's data
            }
            head2 = head2->next;
        }
        head1 = head1->next;
    }
    return -1; // Return -1 if no intersection is found
}

int main() {
    node *head1 = NULL;
    node *head2 = NULL;
    int choice, num;

    do {
        printf("\nMenu:\n");
        printf("1. Create Doubly Linked List 1\n");
        printf("2. Create Doubly Linked List 2\n");
        printf("3. Display Doubly Linked List 1\n");
        printf("4. Display Doubly Linked List 2\n");
        printf("5. Find Intersection of the Lists\n");
        printf("0. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nCreating Doubly Linked List 1...");
                head1 = createdoubly(head1);
                break;
            case 2:
                printf("\nCreating Doubly Linked List 2...");
                head2 = createdoubly(head2);
                break;
            case 3:
                printf("\nDisplaying Doubly Linked List 1...");
                display(head1);
                break;
            case 4:
                printf("\nDisplaying Doubly Linked List 2...");
                display(head2);
                break;
            case 5:
                printf("\nFinding Intersection...");
                num = intersection(head1, head2);
                if (num == -1) {
                    printf("\nNo intersection found.");
                } else {
                    printf("\nThe intersection node is: %d", num);
                }
                break;
            case 0:
                printf("\nExiting...");
                break;
            default:
                printf("\nInvalid choice. Please try again.");
        }
    } while (choice != 0);

    return 0;
}
