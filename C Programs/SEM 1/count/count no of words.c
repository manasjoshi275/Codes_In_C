#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    int c=0,i=0;
    printf("Enter a string\n");
    fgets(s,100,stdin);
    while(s[i]!='\0'){
        if(s[i]==' '){
            c++;}
            i++;
        }
        printf("There are %d words in given string",c+1));

    }
