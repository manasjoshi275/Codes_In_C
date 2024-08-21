#include<stdio.h>
#include<string.h>

int main(){
    char str[100],*p;
    printf("ENTER THE STRING\n");
    fgets(str,100,stdin);
    int l,t,i,j;
    p=str;
    l=strlen(p);
    for(i=0,j=l-1;i<l/2;i++,j--){
        t=*(p+i);
        *(p+i)=*(p+j);
        *(p+j)=t;
    }
    puts(p);

    
    return 0;
}


    

