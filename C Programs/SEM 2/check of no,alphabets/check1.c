#include<stdio.h>
#include<string.h>
int main(){
    int i=0,c=0,sp=0,d=0,v=0;
    char n[100];
    printf("Enter a string: ");
    fgets(n,100,stdin);
    while(n[i]!='\0'){
    if((n[i]>=65&&n[i]<=90) || (n[i]>=97&&n[i]<=122)){
    if(n[i]!='a'&& n[i]!='A'&& n[i]!='e'&& n[i]!='E'&& n[i]!='i'&& n[i]!='I'&& n[i]!='o'&& n[i]!='O'&& n[i]!='u'&& n[i]!='U'){
    c++;
    }
    else{
    v++;
    }}
    else if(n[i]>='0' && n[i]<='9'){
    d++;
    }
    else{
    sp++;
    }
    i++;
    }
    printf("The string has %d vowels, %d consonants, %d digits, %d special characters.",v,c,d,sp);
    return 0;
}