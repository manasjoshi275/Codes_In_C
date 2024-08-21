#include <stdio.h>
#define MAX 10

int enqueue(int[], int, int);
int dequeue(int[], int, int);
void disp(int[], int, int);
void peek(int[], int);

int main() {
    int que[MAX], f = -1, r = -1, ch;

    do {
        printf("\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.PEEK\n5.EXIT\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                r = enqueue(que, f, r);
                if (f == -1) {
                    f = 0; 
                }
                break;
            case 2:
                f = dequeue(que, f, r);
                if (f == -1) {
                    r = -1;
                }
                break;
            case 3:
                disp(que, f, r);
                break;
            case 4:
                peek(que, f);
                break;
        }
    } while (ch != 5);

    return 0;
}

int enqueue(int a[MAX], int f, int r) {
    int x;

    if (r == MAX - 1) {
        printf("Queue is full\n");
        
    }
    else{
    printf("Enter the value of x: ");
    scanf("%d", &x);
    if (f == -1) {
        f = 0; 
    }
    r++;
    a[r] = x;
    }
    return r;
}

int dequeue(int a[MAX], int f, int r) {
    if (f == -1) {
        printf("The queue is empty\n");
        
    }

    

    if (f == r) {
        f = -1; 
    } else {
        printf("The dequeued element is %d\n", a[f]);
        f++;
    }

    return f;
}

void disp(int a[MAX], int f, int r) {
    if (f == -1) {
        printf("Queue is empty\n");
    } else {
        for(int i=f;i<=r;i++) {
            printf("%d\n", a[i]);
        }
    }
}

void peek(int a[MAX], int f) {
    if (f == -1) {
        printf("Queue is empty\n");
    } else {
        printf("The first element is %d\n", a[f]);
    }
}
