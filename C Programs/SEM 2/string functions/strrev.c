#include<stdio.h>
#include<string.h>
int main(){
    int i=0,l,j;
    char s[100],temp;
    printf("Enter a string: ");
    fgets(s,100,stdin);
    l=strlen(s);
    for(i=0,j=l-1;i<l/2;i++,j--){
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }     
    puts(s);
    return 0;
}