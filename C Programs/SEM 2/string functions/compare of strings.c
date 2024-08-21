#include<stdio.h>
#include<string.h>
int main(){
    char s[100],s1[100];
    int res;
    printf("Enter the string\n");
    fgets(s,100,stdin);
    fgets(s1,100,stdin);
    res=strcmp(s,s1);
    if(res==0)
    puts("same");
    else
    puts("not same");
    return 0;
}