#include<stdio.h>
#include<string.h>
int main(){
    char s[100],s1[50];
    int i=0,l,l1;
    printf("enter two string\n");
    fgets(s,100,stdin);
    fgets(s1,50,stdin);
    l=strlen(s);
    while(s1[i]!='\0')
    {
        s[l-1]=s1[i];
        l++;
        i++;
    }
s[l]='\0';
puts(s);
return 0;
}   