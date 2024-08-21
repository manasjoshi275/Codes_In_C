#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(){
    int i, n, c=0;
    char *p, ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    printf("Enter the size: ");
    scanf("%d",&n);
    p=(char*)malloc(n*sizeof(char));
    for(i=0;i<n;i++){
        scanf("%c",p+i);
    }
    for(i=0;i<n;i++){
        if(*(p+i)==' ' && *(p+i+1)==ch){
            c++;
        }
    }
    if(*p==ch){
        c++;
    }
    printf("There are %d words starting with the character %c",c,ch);
}