#include<stdio.h>
#include<stdlib.h>
void reverse(int,int,int *,int);
void main(){
    int n, *p, i, temp;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    p=malloc(n*sizeof(int));
    printf("Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    reverse(0,n-1,p,temp);
    printf("The reversed array is: ");
    for(i=0;i<n;i++){
        printf("%d ",*(p+i));
    }
}
void reverse(int i , int n , int *p, int temp){
    if(i>n/2){
        return; 
    }
    temp = *(p+i);
    *(p+i) = *(p+n-i);
    *(p+n-i) = temp;
    reverse(i+1,n,p,temp);
}