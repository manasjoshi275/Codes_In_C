#include<stdio.h>
int main()
{
    int i,j,k,n;
    int m=1;
    
    printf("enter the no:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(k=0;k<i;k++){
            printf(" ");
        }
        for(j=n;j>=i;j--){
            printf("d",m);
            m++;
            
        }
        printf("\n");
    }
    return 0;
}