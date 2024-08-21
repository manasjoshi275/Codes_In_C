#include<stdio.h>
void tower(int,char,char,char);
int main(){
    int n=3;
    char A='A',B='B',C='C';
    tower(n,A,B,C);
}
void tower(int n,char A,char B,char C){
    if(n==1){
        printf("Move disc %d from %c TO %c\n",n,A,C);
        return;
    }
    tower(n-1,A,C,B);
    printf("Move disc %d from  %c TO  %c\n",n,A,C);
    
    tower(n-1,B,A,C);


    }
//Tower of Hanoi.
