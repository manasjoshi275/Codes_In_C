//Q2.Write a menu driven  program to delete duplicate name(if any) in the single Link list. The information field of each node should contain name and noll no of students.
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    char name[100];
    int roll;
    struct node* next;
} sl;

// Function prototypes
sl* createlist(sl* );
void display(sl* );
void compare(sl* );
int compareStrings(char* , char* );

int main() {
    sl* head = NULL;
    int ch;
    do {
        printf("\nInput the choices:\n1-Create a list\n2-Display a link\n3-Delete duplicate names\n4-Exit\n");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                head = createlist(head);
                break;
            case 2:
                display(head);
                break;
            case 3:
                compare(head);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    } while (ch != 0);
    return 0;
}


sl*createlist(sl*head){
    sl*ptr=NULL;
    sl*temp=head;
    ptr=(sl*)malloc(sizeof(sl));
    printf("\nInput the roll number: ");
    scanf("%d", &ptr->roll);
    printf("Input the name: ");
    scanf("%s", ptr->name);
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

void display(sl* head) {
    if (head == NULL) {
        printf("\nList is empty.\n");
        return;
    }
    while (head != NULL) {
        printf("\n%d -> %s", head->roll, head->name);
        head = head->next;
    }
    printf("\n");
}

// Function to compare strings manually
int compareStrings(char* str1, char* str2) {
    while (*str1 && *str2) {
        if (*str1 != *str2)
            return 1; // Strings are not equal
        str1++;
        str2++;
    }
    // If both strings end simultaneously, they are equal
    return (*str1 == '\0' && *str2 == '\0') ? 0 : 1;
}

void compare(sl* head) {
    if (head == NULL) {
        printf("\nList is empty. No duplicates to remove.\n");
        return;
    }

    sl* current = head;
    while (current != NULL) {
        sl* prev = current;
        sl* temp = current->next;

        while (temp != NULL) {
            if (compareStrings(current->name, temp->name) == 0) {
                // Duplicate found
                prev->next = temp->next;
                free(temp);
                temp = prev->next;
            } else {
                prev = temp;
                temp = temp->next;
            }
        }
        current = current->next;
    }
    printf("\nDuplicate names removed successfully.\n");
}
