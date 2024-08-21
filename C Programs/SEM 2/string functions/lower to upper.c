#include<stdio.h>
#include<string.h>
int main(){
    int i=0;
    char s[100];
    printf("Enter a string: ");
    fgets(s,30,stdin);
    while(s[i]!='\0'){
        if(s[i]>=97&&s[i]<=122){
            s[i]-=32;
        }
        i++;
    }       
    puts(s);
    return 0;
}