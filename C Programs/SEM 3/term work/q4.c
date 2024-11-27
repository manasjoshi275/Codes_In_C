//Q4 Write a C program to create a single linked list, then find whether there exist any two nodes in the linked list whose multiplication is less than the target value.

#include <stdio.h>
#include <stdlib.h>
// Define the slstructure
typedef struct sl{
    int data;
    struct sl*next;
} sl;

sl*createlist(sl*);
void display(sl*);
void multiply(sl*); 

int main() {
    sl*head = NULL;
    int ch;
    do {
        printf("\n\nInput the choice:\n1-Create a list\n2-Display\n3-Find if any pair matches the target value\n0-Exit\n");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                head = createlist(head);
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
        }
    } while (ch != 0);

    return 0;
}

// Function to create a linked list
sl*createlist(sl*head){
    sl*ptr=NULL;
    sl*temp=head;
    ptr=(sl*)malloc(sizeof(sl));
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

void multiply(sl* head) {
    if (head == NULL || head->next == NULL) {
        printf("\nNot enough elements in the list to calculate.");
        return;
    }
    int target;
    printf("\nInput the target value: ");
    scanf("%d", &target);
    sl* current = head;
    int f = 0;  // flag to check if the pair is found
    while (current != NULL) {  // outer while loop
        sl* temp = current->next;
        while (temp != NULL) {  // inner while loop
            if (current->data * temp->data == target) {
                printf("\nYes, the pair (%d, %d) gives the product %d.", current->data, temp->data, target);
                f = 1;
                break;  // Exit the inner loop once a pair is found
            }
            temp = temp->next;
        }
        if (f == 1) {
            break;  // Exit the outer loop once a pair is found
        }
        current = current->next;  // Move to the next node in the outer loop
    }
    if (f == 0) {
        printf("\nNo pair found that gives the product %d.", target);
    }
}
// Function to display the linked list
void display(sl*head) {
    if (head == NULL) {
        printf("\nThe list is empty.");
        return;
    }
    printf("\nLinked List: ");
    while (head != NULL) {
        printf("\n%d", head->data);
        head = head->next;
    }
}
