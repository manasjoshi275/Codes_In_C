/*Name        : MANAS JOSHI
  Roll No.    : 22
  Section     :F


4.WAP to swap two numbers using third variable.*/

#include<stdio.h>
int main()
{
int a,b,c;
printf("\t\t\t*********INPUT*********\n");
printf("INPUT NUMBER 1: ");
scanf("%d",&a);
printf("INPUT NUMBER 2: ");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("\t\t\t*********OUTPUT*********\n");
printf("THE NUMBER AFTER SWAPPING ARE:%d%d\n",a,b);
return 0;

}