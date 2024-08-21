#include<stdio.h>
int main(){
int n,rem,k;
printf("enter the number: ");
scanf("%d",&n);
k=0;
while(n!=0)
{
    rem =rem%10;
    n=n/10;
    if(rem==0||rem!=0)
    {
        k=k+1;
    }
}
printf("%d\n",k);
return 0;
}


