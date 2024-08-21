/*Name        : MANAS JOSHI
  Roll No.    : 22
  Section     :F


9. Write a code to input a number and check how many times it is doubled to cross the value 100000.*/

#include <stdio.h>
int main() 
{
    int number, count = 0;
    printf("\t\t\t*********INPUT*********\n");
    printf("ENTER THE NUMBER: ");
    scanf("%d", &number);
    while (number < 100000) {
        number *= 2;
        count++;
    }
    printf("\t\t\t*********OUTPUT*********\n");
    printf("THE NUMBER NEEDS TO BE DOUBLED %d TIMES TO CROSS",number);
}



