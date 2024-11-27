//Q8 Write a C program to implement time sharing environment using circular linked list to allocate time slots of 10 ns for N given processes, and then print which process will be completed in how much time.

#include <stdio.h>
#include <stdlib.h>

// Structure Definition
typedef struct circular {
    int pro, time;
    struct circular *next;
} cl;

// Function Prototypes
cl* insert(cl*);
void display(cl*);
void calculate(cl*, int);

int main() {
    int choice, cputime;
    cl* ptr = NULL;

    printf("--- CPU PROCESS SCHEDULER ---\n");
    printf("Enter the time taken by CPU to complete 1 process: ");
    scanf("%d", &cputime);
    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Insert Process\n2. Display Processes\n3. Calculate Completion Time\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                ptr = insert(ptr);
                break;
            case 2:
                if (ptr == NULL)
                    printf("No processes to display. Please insert processes first.\n");
                else
                    display(ptr);
                break;
            case 3:
                if (ptr == NULL)
                    printf("No processes to calculate. Please insert processes first.\n");
                else {
                    calculate(ptr, cputime);
                    ptr = NULL;  // Reset after calculation
                }
                break;
            case 4:
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}

// Function to Insert Processes
cl* insert(cl* last) {
    int choice = 1;
    cl* p = NULL;
    while (choice == 1) {
        p = (cl*)malloc(sizeof(cl));
        printf("\nEnter Process Number: ");
        scanf("%d", &p->pro);
        printf("Enter Time Required: ");
        scanf("%d", &p->time);
        if (last == NULL) {
            last = p;
            last->next = last;
        } else {
            p->next = last->next;
            last->next = p;
            last = p;
        }
        printf("Enter 1 to add another process or 0 to stop: ");
        scanf("%d", &choice);
    }
    return last->next;
}

// Function to Display Processes
void display(cl* f) {
    cl* p = f;
    printf("\n--- PROCESS LIST ---\n");
    do {
        printf("Process: %d, Time: %d\n", p->pro, p->time);
        p = p->next;
    } while (p != f);
}

// Function to Calculate Completion Time
void calculate(cl* ptr, int t) {
    int ctr = 0;
    cl* p = ptr->next;
    while (p->next != ptr)  // Find the last node
        p = p->next;
    while (ptr != ptr->next) {
        do {
            ctr++;
            if (ptr->time <= t) {
                cl* f = ptr;
                printf("\nProcess %d completed in %d ns\n", ptr->pro, ctr * t);
                p->next = ptr->next;
                ptr = ptr->next;
                free(f);
                if (p == ptr)
                    break;
            } else {
                ptr->time -= t;
                p = ptr;
                ptr = ptr->next;
            }
        } while (ptr != p->next);
    }
    ctr = (ptr->time + (ctr * t));
    printf("\nProcess %d completed in %d ns\n", ptr->pro, ctr);
    printf("Total Time Taken: %d ns\n", ctr);
    free(ptr);
}
