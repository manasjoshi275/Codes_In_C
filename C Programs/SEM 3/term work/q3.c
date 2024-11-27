//Q3.Write a C program to find and delete the node with second minimum data in the single link list.

#include <stdio.h>
#include <stdlib.h>

// Define the sl structure
typedef struct sl {
    int data;
    struct sl *next;
} sl;

sl* createlist(sl*);
void display(sl*);
sl* delete_second_min(sl*);

int main() {
    sl* head = NULL;
    int ch;
    do {
        printf("\n\nInput the choices:\n1-Create a list\n2-Display the link\n3-Delete the second minimum\n0-Exit\n");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                head = createlist(head);
                break;
            case 2:
                display(head);
                break;
            case 3:
                head = delete_second_min(head);
                break;
            case 0:
                return 0;
        }
    } while (ch != 0);
    return 0;
}

// Function to create a linked list
sl* createlist(sl* head) {
    sl* ptr = NULL;
    sl* temp = head;
    ptr = (sl*)malloc(sizeof(sl));
    printf("\nEnter the value: ");
    scanf("%d", &ptr->data);
    ptr->next = NULL;
    if (head == NULL) {
        head = ptr;
    } else {
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = ptr;
    }
    return head;
}
// Function to delete the node with the second minimum value
sl* delete_second_min(sl* head) {
    if (head == NULL || head->next == NULL) {
        printf("\nNot enough elements to determine the second minimum.\n");
        return head;
    }
    int min, second_min;
    sl* current = head, *second_min_prev = NULL, *min_prev = NULL, *prev = NULL; // Initialize min and second_min
    if (head->data < head->next->data) {
        min = head->data;
        second_min = head->next->data;
    } else {
        min = head->next->data;
        second_min = head->data;
    }

    current = head->next->next;
    while (current != NULL) {
        if (current->data < min) {
            second_min = min;
            second_min_prev = min_prev;
            min = current->data;
            min_prev = prev;
        } else if (current->data > min && current->data < second_min) {
            second_min = current->data;
            second_min_prev = prev;
        }
        prev = current;
        current = current->next;
    }

    if (min == second_min) {
        printf("\nNo second minimum value found (all values may be equal).\n");
        return head;
    }
    // Delete the node with the second minimum value
    if (second_min_prev == NULL) { // The second minimum is the head
        sl* to_delete = head;
        head = head->next;
        free(to_delete);
    } else {
        sl* to_delete = second_min_prev->next;
        second_min_prev->next = to_delete->next;
        free(to_delete);
    }

    printf("\nThe second minimum value %d has been deleted.\n", second_min);
    return head;
}
// Function to display the linked list
void display(sl* head) {
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




