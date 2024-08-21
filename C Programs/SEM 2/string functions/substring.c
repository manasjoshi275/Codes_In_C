#include<stdio.h>
#include<string.h>
int main(){
    int i=0,a,c=0,k=0;
    char n, str[100];
    printf("Enter a string: ");
    fgets(str,100,stdin);
    printf("Enter the character: ");
    scanf("%c",&n);
    while(str[i]!='\0'){
        if(n==str[i]){
        c++;
        if(k==0){
            a=i;
            k++;
        }
        }
        i++;
    }
    printf("%c is present %d times in the string and first appears at %d index.",n,c,a);
    return 0;
}