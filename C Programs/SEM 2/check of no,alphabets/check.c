#include<stdio.h>
#include<string.h>
int main(){
    int i=0,v=0;
    char n[100];
    printf("Enter a string: ");
    fgets(n,100,stdin);
    while(n[i]!='\0'){
    if(n[i]=='a'||n[i]=='A'||n[i]=='e'||n[i]=='E'||n[i]=='i'||n[i]=='I'||n[i]=='o'||n[i]=='O'||n[i]=='u'||n[i]=='U'){
    v++;
    }
    i++;
    }
    printf("The string has %d vowels.",v);
    return 0;
}