#include<stdio.h>
void printrollno();
void printname();
typedef struct student{
    int rollno, yearofjoining;
    char name[30], department[50], course[30];
}stu;
int main(){
    stu s[450];
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the roll no, name, department, course, year of joining of student %d: \n",i+1);
        scanf("%d %[^\n] %[^\n] %[^\n] %d" , &s[i].rollno, s[i].name, s[i].department, s[i].course, &s[i].yearofjoining);
    }
    printname(s,n);
    printrollno(s,n);
    return 0;
}
void printname(struct student s[],int n){
    int i, yr;
    printf("Enter the year: \n");
    scanf("%d",&yr);
    for(i=0;i<n;i++) {
        if(s[i].yearofjoining==yr)
        printf("%s\n",s[i].name);
    }
    }
    void printrollno(struct student s[],int n){
    int r, i;
    printf("Enter the roll no: \n");
    scanf("%d",&r);
    for(i=0;i<n;i++){
        if(s[i].rollno==r)
        printf("%d %s %s %s %d", s[i].rollno, s[i].name, s[i].department, s[i].course, s[i].yearofjoining);
    }
}
