/* Name       :MANAS JOSHI
  Roll No.    :22
  Section     :F


3.Mr. X’s basic salary is input through the keyboard. His dearness allowance is 40% of the basic salary,
and the house rent allowance is 20% of basic salary. Write a program to calculate his gross salary.*/


#include<stdio.h>
int main()
{ 
int BS,DA,HRA,GS;
printf("\t\t\t*********INPUT*********\n");
printf("INPUT BASIC SALARY: ");
scanf("%d",&BS);
DA=(30*BS)/100;
HRA=(50*BS)/100;
GS=DA+HRA+BS;
printf("\t\t\t*********OUTPUT*********\n");
printf("GROSS SALARY IS: %d\n",GS);
return 0;
}







}



