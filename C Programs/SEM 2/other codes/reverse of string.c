/*#include<stdio.h>
#include<string.h>
int main(){
    char str[100],*p;
    printf("ENTER THE STRING\n");
    fgets(str,100,stdin);
    p=str;
    int l,t,i=0,j;
    l=strlen(p);
    while(*(p+i)!='\0'){
        if(*(p+i)==' '){
        for(i=0,j=l-1;i<l/2;i++,j--){
        t=*(p+i);
        *(p+i)=*(p+j);
        *(p+j)=t;
        }
        
    }
    i++;
    }
    puts(p);
}*/
#include<stdio.h>
#include<string.h>
int main(){
    char str[100],*p;
    int i=0,j,t,l;
    printf("ENTER THE STRING\n");
    fgets(str,100,stdin);
    p=str;
    l=strlen(str);
    while (*(p+i)!='\0')
    {
        for(i=0,j=l-1;i<=l/2;i++,j--){
        t=*(p+i);
        *(p+i)=*(p+j);
        *(p+j)=t;
    } 
    i++;
    }
    
    
    printf("%s",*p);
    return 0;}
    

