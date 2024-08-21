/*Name        : MANAS JOSHI
  Roll No.    : 22
  Section     :F


7.In a town, the percentage of men is 52. The percentage of total literacy is 48. If total percentage of
literate men is 35 of the total population, write a program to find the total number of Illiterate men and
women if the population of the town is 80,000.*/

#include<stdio.h>
int main()
{
    int pop;
    printf("\t\t\t*********INPUT*********\n");
    printf("POPULATION: ");
    scanf("%d",&pop);
    int men=(52*pop)/100;
    int lit=(48*pop)/100;
    int litmen=(35*pop)/100;
    int illmen=men-litmen;
    int illwomen=pop-men-(lit-litmen);
    printf("\t\t\t*********OUTPUT*********\n");
    printf("ILLITERATE MEN=%d\n",illmen);
    printf("ILLITERATE WOMEN=%d\n",illwomen);
    return 0;
}