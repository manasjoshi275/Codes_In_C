#include<stdio.h>
int main()
{
    int n,i,k,cp=0,cn=0,cz=0;
    printf("\t\t\t*********INPUT*********\n");
    printf("ENTER THE NO OF ELEMENTS:");
    scanf("%d",&n);
    int arr[n];
    printf("ENETR THE ELEMENTS OF THE ARRAYS:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("ENTER THE VALUE OF K: ");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]>k)
        {
            cp++;
        }
        else if(arr[i]<k)
        {
            cn++;
        }
        else
        {
            cz++;
        }
    }
    printf("\t\t\t*********OUTPUT*********\n");
    printf("GREATER NUMBERS= %d\n",cp);
    printf("SMALLER NUMBERS=%d\n",cn);
    printf("NUMBER EQUAL TO %d= %d\n",k,cz);
    return 0;
}
