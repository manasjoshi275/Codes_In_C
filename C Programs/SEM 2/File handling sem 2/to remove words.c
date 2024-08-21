#include<stdio.h>
#include<string.h>
int WordToRemove(char *word){
    return strcmp(word, "a") == 0 || strcmp(word, "the") == 0 || strcmp(word, "an") == 0;
}
int main(){
    FILE *fp, *fp1;
    char str[50],word[20];
    fp=fopen("data.txt","w");
    printf("\t\t\t**********INPUT**********\n");
    printf("Enter the text: ");
    while (fgets(str, 50, stdin) != NULL) {
        fputs(str, fp);
    }
    fclose(fp);
    fp=fopen("data.txt","r"),fp1=fopen("del.txt","w");
    while (fscanf(fp, "%s", word) != EOF) {
        if(!WordToRemove(word)){
            fprintf(fp1, "%s ", word);
        }
    }
    fclose(fp),fclose(fp1);
    fp1=fopen("del.txt","r");
    fgets(str,50,fp1);
    printf("\t\t\t**********OUTPUT**********\n");
    printf("\nThe file contents after deletion: ");
    printf("%s",str);
    fclose(fp1);
    return 0;
}

   