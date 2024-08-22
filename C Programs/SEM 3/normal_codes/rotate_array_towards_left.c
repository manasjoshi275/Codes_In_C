#include<stdio.h>
#include<stdlib.h>
void reverse(int *,int,int);
void main(){
    int n, k, *p, i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",p+i);
    }
    printf("Enter number of times to rotate: ");
    scanf("%d",&k);
    reverse(p,k,n);
    reverse(p,0,k);
    reverse(p,0,n);
    
    printf("The array after rotation is: ");
    for(i=0;i<n;i++){
        printf("%d ",*(p+i));
    }
    }
    void reverse(int *p,int first,int last){
        int temp,i,j;
        for(i=first,j=last-1;i<j;i++,j--){
            temp=*(p+i);
            *(p+i)=*(p+j);
            *(p+j)=temp;
        }
    }