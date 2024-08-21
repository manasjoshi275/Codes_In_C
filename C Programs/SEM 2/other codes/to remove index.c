#include<stdio.h>
int main()
{
    int n,i,pos,a[10];
    printf("Enter the number: \n");
    scanf("%d",&n);
    int size=10;
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the position\n");
    scanf("%d",&pos);
        for(i=pos-1;i<=n;i++)
        {
            a[i]=a[i+1];
        }
    n=n-1;
    printf("The updated array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}