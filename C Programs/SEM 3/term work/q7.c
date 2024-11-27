//Q7 Write a C program to sort N names given by user in an array, using Quick sort technique. 

#include <stdio.h>

// Function Prototypes
void inputArray(int a[], int *n);
void displayArray(int a[], int n);
void quickSort(int a[], int lb, int ub);
int partition(int a[], int lb, int ub);
void swap(int *a, int *b);

int main() {
    int a[100], n = 0, choice;

    while (1) {
        printf("\nMenu:\n1. Input Array\n2. Display Array\n3. Sort Array using Quick Sort\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                inputArray(a, &n);
                break;

            case 2:
                if (n == 0) {
                    printf("Array is empty. Please input the array first.\n");
                } else {
                    displayArray(a, n);
                }
                break;

            case 3:
                if (n == 0) {
                    printf("Array is empty. Please input the array first.\n");
                } else {
                    quickSort(a, 0, n - 1);
                    printf("Array sorted successfully!\n");
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

// Function to input array
void inputArray(int a[], int *n) {
    printf("Enter the number of elements: ");
    scanf("%d", n);
    printf("Enter the elements:\n");
    for (int i = 0; i < *n; i++) {
        scanf("%d", &a[i]);
    }
}

// Function to display array
void displayArray(int a[], int n) {
    printf("Array elements are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

// Recursive quick sort function
void quickSort(int a[], int lb, int ub) {
    if (lb < ub) {
        int pivot = partition(a, lb, ub);
        quickSort(a, lb, pivot - 1);
        quickSort(a, pivot + 1, ub);
    }
}

// Partition function for quick sort
int partition(int a[], int lb, int ub) {
    int pivot = a[lb];
    int start = lb;
    int end = ub;

    while (start < end) {
        while (a[start] <= pivot) {
            start++;
        }
        while (a[end] > pivot) {
            end--;
        }
        if (start < end) {
            swap(&a[start], &a[end]);
        }
    }
    swap(&a[lb], &a[end]);
    return end;
}

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
