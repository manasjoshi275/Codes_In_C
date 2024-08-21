/*Name        : MANAS JOSHI
  Roll No.    : 22
  Section     :F



1.WAP to input marks obtained by a student in five different subjects through the keyboard. Find out the
aggregate marks and percentage marks obtained by the student. Assume that the maximum mark that
can be obtained by a student in each subject is 100 */


#include<stdio.h>
int main()
{
float a,b,c,d,e,agg,per;
printf("\t\t\t**********INPUT**********\n");
printf("ENTER MARKS FOR SUBJECT 1: ");
scanf("%f",&a);
printf("ENTER MARKS FOR SUBJECT 2: ");
scanf("%f",&b);
printf("ENTER MARKS FOR SUBJECT 3: ");
scanf("%f",&c);
printf("ENTER MARKS FOR SUBJECT 4: ");
scanf("%f",&d);
printf("ENTER MARKS FOR SUBJECT 5: ");
scanf("%f",&e);
agg=(a+b+c+d+e);
per=agg/5;
printf("\t\t\t**********OUTPUT**********\n");
printf("AGGREGATE MARKS:%f\n",agg);
printf("PERCENTAGE MARKS:%f\n",per);
return 0;   
}