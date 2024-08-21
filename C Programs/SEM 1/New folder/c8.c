/*Name        :MANAS JOSHI
  Roll No.    :22
  Section     :F


8. The following calculates value of f(x) if x has different ranges of value as below:
F(x) =x2+2 if 0<=x<=10
F(x) =x2+2x if 11<=x<=20
F(x) =x3+2x2 if 21<=x<=30
F(x) =0 if x>30*/

#include<stdio.h>
int main()
{
    int x,F1,F2,F3,F4;
    printf("\t\t\t*********INPUT*********\n");
    printf("ENTER THE VALUE OF X:");
    scanf("%d",&x);
    printf("\t\t\t*********OUTPUT*********\n");
    if(x>=0&&x<=10)
    {
        F1=(x*x)+2;
        printf("VALUE OF F(x) IS = %d\n",F1);
    }
    if(x>=11&&x<=20)
    {
        F2=(x*x)+2*x;
        printf("VALUE OF F(x) IS = %d\n",F2);
    }
    if(x>=21&&x<=30)
    {
        F3=(x*x*x)+2*x*x;
        printf("VALUE OF F(x) IS = %d\n",F3);
    }
    else
    {
        if(x>30)
        {
            F4=0;
            printf("VALUE OF F(x) IS = %d\n",F4);
        }
    }
    return 0;
}