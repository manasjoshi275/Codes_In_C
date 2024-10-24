#include<stdio.h>
#define MAX 100

void ss(int[],int);

int main(){
int arr[MAX],i,n;
printf("Enter the size\n");
scanf("%d",&n);
printf("Enter array elements\n");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
ss(arr,n);
printf("Sorted array \n");
for(i=0;i<n;i++){
printf("%d ",arr[i]);
}
return 0;
}

void ss(int arr[],int n){
int i,j,min,t;
for(i=0;i<n-1;i++){
min=i;
for(j=i+1;j<n;j++){
if(arr[j]<arr[min]){
min=j;
}
}
if(min!=i){
t=arr[i];
arr[i]=arr[min];
arr[min]=t;
}
}
}




