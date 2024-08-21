#include<stdio.h>
int main(){
    int n,arr[100],i,j,temp,*p;
    printf("ENTER THE SIZE\n");
    scanf("%d",&n);
    p=arr;
    printf("ENTER THE ARRAY ELEMENTS\n");
    for(i=0;i<n;i++){
         scanf("%d",(p+i));
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(*(p+j)<*(p+j+1)){
                temp=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+1+j)=temp;
            }
        }

    }
    for(i=0;i<n;i++){
        printf(" %d\n",*(p+i));
    }
    return 0;
}