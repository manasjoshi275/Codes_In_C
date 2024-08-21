#include<stdio.h>
#include<stdlib.h>

int main() {
    int n, i, start, *ptr, temp;
    printf("\t\t\t**********INPUT**********\n\n");
    printf("Enter no of elements: ");
    scanf("%d", &n);
    ptr = (int*)malloc(n * sizeof(int));
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }    printf("Enter the start index for reversing: ");
    scanf("%d", &start);
    for (i = start; i < (n + start) / 2; i++) {
        temp = ptr[i];
        ptr[i] = ptr[n - i + start- 1];
        ptr[n - i + start- 1] = temp;
    }    printf("Reversed array:\n");
      printf("\t\t\t**********OUTPUT**********\n\n");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");
    free(ptr);

    return 0;
}
