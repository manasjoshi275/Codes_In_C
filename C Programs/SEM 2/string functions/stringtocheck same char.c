#include<stdio.h>
#include<string.h>
int main(){
    char s[100],n;
    int i=0,c=0;
    printf("enter a string\n");
    fgets(s,100,stdin);
    printf("Enter the character:\n");
    scanf("%c",&n);
    while(s[i]!='\0'){
        if(s[i]==' '){
            if(s[i+1]==n){
                c++;
            }
        }
        i++;
    }
    if(s[0]==n){
        c++;
    }
    printf("There are %d word starting with %c",c,n);
    return 0;
}   