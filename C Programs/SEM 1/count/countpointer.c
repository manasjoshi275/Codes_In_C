#include<stdio.h>
#include<string.h>
void count();
int main(){
    char str[100];
    printf("ENTER THE STRING\n");
    fgets(str,100,stdin);
    count(str);
    return 0;
}

void count(char *q){
   
    int c=1;
    while(*q!='\0'){
        if(*q==' '){
            c++;
        }
        q++;
        }
        printf("No of words are: %d\n",c);
      
}