#include<stdio.h>
#include<string.h>
int main(){
    int i=0,l,n,l1,c=0,j=0;
    char str[100],ss[10];
    printf("INPUT SENTENCE\n");
    fgets(str,100,stdin);
    printf("INPUT THE SIZE OF WORD\n");
    scanf("%d",&n);
    l=strlen(str) - 1;
    str[l]=' ';
    str[l+1]='\0';
    while(str[i]!='\0'){
        while(str[i]!=' '){
            ss[j]=str[i];
            i++;
            j++;
        }
        ss[j]='\0';
        l1=strlen(ss);
        if(l1==n){
            c++;
        }
        i++;
        j=0;
    }
    printf("count of %d words is: %d",n,c);
    return 0;
}

