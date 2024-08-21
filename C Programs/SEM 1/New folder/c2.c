/*Name        :MANAS JOSHI
  Roll No.    :22
  Section     :F


2.The length & breadth of a rectangle and radius of a circle are input through the keyboard. Write a
program to calculate the area & perimeter of the rectangle, and the area & circumference of the circle.*/


#include<stdio.h>
int main()
{
int l,b,r,Area,Perimeter,area,perimeter;
printf("\t\t\t*********INPUT*********\n");
printf("ENTER THE LENGTH OF RECTANGLE: ");
scanf("%d",&l);
printf("ENTER THE BREADTH OF RECTANGLE: ");
scanf("%d",&b);
printf("ENTER THE RADIUS OF CIRCLE: ");
scanf("%d",&r);
Area=l*b;
Perimeter=2*(l+b);
area=3.14*r*r;
perimeter=2*3.14*r;
printf("\t\t\t*********OUTPUT*********\n");
printf("AREA OF RECTANGLE IS: %d\n",Area);
printf("PERIMETER OF RECTANGLE IS: %d\n",Perimeter);
printf("AREA OF CIRCLE IS: %d\n",area);
printf("PERIMETER OF CIRCLE IS: %d\n",perimeter);
return 0;
}