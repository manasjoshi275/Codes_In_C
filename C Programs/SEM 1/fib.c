#include<stdio.h>
void fib(int);
int main()
{
    int n;
    printf("Enter the number upto which fibonacci is to be printed: ");
    scanf("%d",&n);
    printf("Fibonacci Series :");
    printf("\n0\n1\n");
    fib(n);
    return 0;
}
void fib(int n){
    int t1=0,t2=1;
    int next= t1+t2;
    while(next<=n){
        printf("%d\n",next);
        t1=t2;
        t2=next;
        next=t1+t2;
    }
}

