#include<stdio.h>
int reverse(int);
int main()
{
    int n, res;
    printf("enter the number: \n");
    scanf("%d",&n);
    res= reverse(n);
    printf("%d",res);
    return 0;
}
int reverse(int n)
{ 
    static int rev=0;
    if(n==0){
    return rev;
    }
    else{
    rev=rev*10 + n%10;
    reverse(n/10);
    }
}
    

        
    
