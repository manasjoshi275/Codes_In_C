/*Name        :MANAS JOSHI
  Roll No.    :22
  Section     :F



6.WAP to input a year and check if it is a leap year or not.*/

#include<stdio.h>
int main()
{
    int year;
    printf("\t\t\t*********INPUT*********\n");
    printf("ENTER YEAR: ");
    scanf("%d",&year);
    printf("\t\t\t*********OUTPUT*********\n");
    if(year%100==0)
    {
      if(year%400==0)
      {
        printf("LEAP YEAR\n");
      
      }
      else
      {
        printf("NOT A LEAP YEAR\n");
      }
    }
    else
    {
      if(year%4==0)
      {
        printf("LEAP YEAR\n");
      }
      else
      {
        printf("NOT A LEAP YEAR\n");
      }
    }
    return 0;
}