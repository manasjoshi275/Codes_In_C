#include<stdio.h>
int fact();
int main()
{
int n,res;
printf("enter the num\n");
scanf("%d",&n);
res=fact(&n);
printf("%d",res);
return 0;
}

int fact(int*b){
    int i,f=1;
    for(i=1;i<=*b;i++){
        f=f*i;
    }
    return f;
}