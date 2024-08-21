#include<stdio.h>
int main()
{int i,n,j,k,sp;
printf("input the no of lines in pattern: ");
scanf("%d",&n);
sp=n;
for(i=1;i<=n;i++)
{
    for(k=1;k<=sp;k++)
    {
        printf(" ");
    }
    sp--;
    
    for(j=1;j<=i;j++){
        printf("*");
    }
    printf("\n");
}
return 0;
}