#include<stdio.h>
#include<string.h>
int main(){
    int i=0;
    char s[100];
    printf("Enter a string: ");
    fgets(s,100,stdin);
    while(s[i]!='\0'){
        if(s[i]>=65&&s[i]<=90){
            s[i]+=32;
        }
        i++;
    }       
    puts(s);
    return 0;
}