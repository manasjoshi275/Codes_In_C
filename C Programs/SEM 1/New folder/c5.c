/*Name        : MANAS JOSHI
  Roll No.    : 22
  Section     : F



5.WAP to find roots of a quadratic equation, equation is of the form (ax2+bx+c=0).*/


#include<stdio.h>
#include<math.h>
int main()
{
  float a,b,c;
  float discriminant,root1,root2;
  printf("\t\t\t*********INPUT*********\n");
  printf("ENTER THE COEFFICIENT a: ");
  scanf("%f",&a);
  printf("ENTER THE COEFFICIENT b: ");
  scanf("%f",&b);
  printf("ENTER THE COEFFICIENT c: ");
  scanf("%f",&c);
  discriminant=b*b-4*a*c;
  printf("\t\t\t*********OUTPUT*********\n");
  if(discriminant>0)
  {
    root1=(-b+sqrt(discriminant))/(2*a);
    root2=(-b-sqrt(discriminant))/(2*a);
    printf("ROOT1=%f\n",root1);
    printf("ROOT2=%f\n",root2);
  }
  else if(discriminant=0)
  {
    root1=-b/2*a;
    printf("ROOT1=ROOT2=%f\n",root1);
  }
  else
  {
    printf("IMAGINARY SOLUTIONS");

  }
return 0;
}

