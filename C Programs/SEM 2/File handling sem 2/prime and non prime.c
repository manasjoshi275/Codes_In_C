#include<stdio.h>
int prime(int n){
    int i,c=0;
    for(i=1;i<=n;i++){
        if(n%i==0){
            c++;
        }
    }
    if(c==2){
    return 1;
    }
    else{
    return 0;
    }
}
int main(){
    FILE *fp, *fp1, *fp2;
    int n, i, num, res, cp=0, cnp=0;
    fp=fopen("int.txt","w");
    printf("\t\t\t**********INPUT**********\n");
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&num);
        putw(num,fp);
    }
    fclose(fp);
    fp=fopen("int.txt","r"),fp1=fopen("prime.txt","w"),fp2=fopen("nonprime.txt","w");
    for(i=0;i<n;i++){
        num= getw(fp);
        res= prime(num);
        if(res==1){
            putw(num,fp1);
            cp++;
        }
        else{
            putw(num,fp2);
            cnp++;
        }
    }
    fclose(fp),fclose(fp1),fclose(fp2);
    fp1=fopen("prime.txt","r");
    fp2=fopen("nonprime.txt","r");
    printf("\t\t\t**********OUTPUT**********\n");
    printf("The prime numbers are: ");
    for(i=0;i<cp;i++){
        num=getw(fp1);
        printf("%d ",num);
    }
    fclose(fp1);
    printf("\nThe non-prime numbers are: ");
    for(i=0;i<cnp;i++){
        num=getw(fp2);
        printf("%d ",num);
    }
    fclose(fp2);
    return 0;
}