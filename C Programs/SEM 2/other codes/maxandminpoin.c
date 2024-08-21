#include<stdio.h>
int main(){
    int n,arr[100],*p,i,max,min;
    printf("ENTER THE SIZE\n");
    scanf("%d",&n);
    p=arr;
    printf("ENTER ARRAY ELEMENTS\n");
    for(i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    min=*p;
    max=*(p+(n-1));
    for(i=1;i<n;i++){
        if(min>*(p+i)){
            min=*(p+i);
        }
        if(max<*(p+i)){
            max=*(p+i);
            
        }
    }
    printf("MAX ELEMENT ANd MIN ELEMENT ARE: %d and %d\n",max,min);
    return 0;
}
    
    
    