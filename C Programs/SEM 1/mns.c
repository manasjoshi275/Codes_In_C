#include<stdio.h>
int main()
{
char c;
printf("Enter the character: ");
scanf("%c",&c);
if(c>=48&&c<=57)
{
    printf("Digit\n");

}
else if((c>=60&&c<=90) || (c>=97&&c<=122))
{
    printf("Alphabet\n");

}
else
{
    printf("Special character\n");

}
return 0;
}