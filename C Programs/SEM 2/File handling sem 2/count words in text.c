#include<stdio.h>
#include<string.h>
int main(){
    int c=0, cd=0;
    char str[100], ch;
    FILE *fp,*fp1;
    fp=fopen("file.txt","w");
    printf("\t\t\t**********INPUT**********\n");
    printf("Enter the paragraph: ");
    fgets(str,100,stdin);
    fputs(str,fp);
    fclose(fp);
    fp=fopen("file.txt","r"),fp1=fopen("count.txt","w");
    while((ch=fgetc(fp))!=EOF){
        if(ch=='.'){
            fprintf(fp1,"%d %d\n",c,cd);
            c=cd=0;
        }
        if(ch>=65&&ch<=90 || ch>=97&&ch<=122){
            c++;
        }
        else if(ch>='0'&&ch<='9'){
            cd++;
        }
    }
    fclose(fp),fclose(fp1);
    fp1=fopen("count.txt","r");
    printf("\t\t\t**********OUTPUT**********\n");
    printf("The contents of count.txt are:\n");
    while((ch=fgetc(fp1))!=EOF){
        printf("%c",ch);
    }
    fclose(fp1);
    return 0;
}