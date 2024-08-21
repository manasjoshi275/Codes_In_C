#include<stdio.h>
void toh(int,char,char,char);
void main(){
    int n;
    printf("Enter the number of discs: ");
    scanf("%d",&n);
    toh(n,'A','B','C');
}
void toh(int n,char from, char help, char to){
    if(n==1){
        printf("Move disc %d from %c to %c\n",n,from,to);
        return;
    }
    toh(n-1,from,to,help);
    printf("Move disc %d from %c to %c\n",n,from,to);
    toh(n-1,help,from,to);
}