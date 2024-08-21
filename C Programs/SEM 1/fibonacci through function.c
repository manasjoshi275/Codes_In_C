#include<stdio.h>
void fib(int);
int main()
{
    int n, i, res;
    printf("enter the number: \n");
    scanf("%d",&n);
    printf("\n0\n1\n");
    for(i=1;i<=n-2;i++)
    {
        res = fib(i);
        printf("%d\n",res);
    }
    return 0;
}
void fib(int n)
{
    if(n==0||n==1)
    
        return 1;

    else
    
        return fib(n-1)+fib(n-2);
    
}