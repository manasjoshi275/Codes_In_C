#include<stdio.h>
struct student{
    char nm[30];
    int stu_id;
    int m1,m2,m3;
    int per;
};
void perr(struct student x[],int n){
int i,j;
struct student t;
for(i=0;i<n-1;i++){
    for(j=0;j<n-i-1;j++){
        if(x[j].per>x[j+1].per){
            t=x[j];
            x[j]=x[j+1];
            x[j+1]=t;
        }
    }
}
}
int main(){
    struct student s[10];
    int i,n,per;
    printf("ENTER THE RECORDS\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter name ,student id and marks obtained and percentage  for student  %d\n",i+1);
        scanf(" %[^\n]s",s[i].nm);
        scanf("%d",&s[i].stu_id);
        scanf("%d%d%d",&s[i].m1,&s[i].m2,&s[i].m3);
        s[i].per= (s[i].m1+s[i].m2+s[i].m3)*0.67;

    }
    perr(s,n);
    for(i=0;i<n;i++){
        printf("NAME %s\nROLL NO  %d\nPERCENTAGE    %d\n",s[i].nm,s[i].stu_id,s[i].per);
    
    }
    return 0;
}