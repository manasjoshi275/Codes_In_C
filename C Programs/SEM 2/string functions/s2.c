#include<stdio.h>
#include<string.h>
int main(){
    char s[100],s2[100],res;
    int i=0,l1,l2,f=0;
    printf("Enter the string\n");
    fgets(s,100,stdin);
    fgets(s2,100,stdin);
    l1=strlen(s);
    l2=strlen(s2);
    if(l1!=l2){
        printf("Length is not same\n");
    }
    else{
        while(s[i]!=0){
            if(s[i]!=s2[i]){
                 f=1;
                 break;
            }
        }
    }
            if( f==0){
                printf("same\n");

            }
            else{
                printf("disimilar\n");
            }
        
    
    return 0;
}

    