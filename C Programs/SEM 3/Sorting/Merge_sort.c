//MERGE SORT

#include<stdio.h>
#define MAX 100

void Mergesort(int[],int,int);
void merge(int[],int[],int,int,int);

int main(){
int ub,i;
int arr[MAX],t[MAX];
printf("Enter the size of array\n");
scanf("%d",&ub);
printf("Enter array elements\n");
for(i=0;i<ub;i++){
scanf("%d",&arr[i]);
}
Mergesort(arr,0,ub-1);

printf("Sorted array \n");
for(i=0;i<ub;i++){
printf("%d ",arr[i]);
}
return 0;
}

void Mergesort(int arr[],int lb,int ub){
int mid=0,t[MAX];
if(lb<ub){
mid=(lb+ub)/2;
Mergesort(arr,lb,mid);
Mergesort(arr,mid+1,ub);
merge(arr,t,lb,mid,ub);
}
}

void merge(int arr[],int temp[],int lb,int mid,int ub){
int k=lb;//don't put k=0
int i=lb,j=mid+1;
while(i<=mid && j<=ub){
if(arr[i]<arr[j]){
temp[k++]=arr[i];
i++;
}
else{
temp[k++]=arr[j];
j++;
}
}
while(i<=mid){
temp[k++]=arr[i];
i++;
}
while(j<=ub){
temp[k++]=arr[j];
j++;
}
for(i=lb;i<=ub;i++){
arr[i]=temp[i];
}
}


