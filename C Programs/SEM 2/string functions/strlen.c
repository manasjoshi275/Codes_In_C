#include<stdio.h>
#include<string.h>
int main(){
    int i=0,l=0;
    char str[100];
    printf("Enter a string: ");
    fgets(str,100,stdin);
    while(str[i]!='\0'){
        l++;
        i++;
    }       
    printf("Length is %d ",l);
    return 0;
}