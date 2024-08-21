#include<stdio.h>
void value();
int main(){
    int n,arr[100],i,max,min;
    printf("Enter the size\n");
    scanf("%d",&n);
    printf("ente rthe arrsy elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    value(arr,n,&min,&max);
    
    return 0;
}
void value(int*p,int n,int *min,int *max){

    *min=p
    *max=p
    for(i=1;i<n;i++){
        if(*min>p){
            *min=p;
            
        }
        if(*max<p){
            *max=p+i;
            
        }
    }
    
    
}
