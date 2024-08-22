//evaluation of postfix expression by stack

#include<stdio.h>
#include<math.h>
#define MAX 50
void push(int[],int,int*);
int pop(int[],int*);
int main()
{
    int stack[MAX],top=-1,x,y,res=0,i=0,a;
    char postfix[MAX],ch;
    printf("Enter the postfix expression: \n");
    scanf("%s",postfix);
    while(postfix[i]!='\0'){
        ch=postfix[i];
        if((ch>=65&&ch<=90) || (ch>=97&&ch<=122)){
            printf("Enter the value for %c: ",ch);
            scanf("%d",&a);
            push(stack,a,&top);
        }
        else{
            x=pop(stack,&top);
            y=pop(stack,&top);
            if(ch=='^'){
                res=pow(y,x);
            }
            else if(ch=='+'){
                res=y+x;
            }
            else if(ch=='-'){
                res=y-x;
            }
            else if(ch=='%'){
                res=y%x;
            }
            else if(ch=='/'){
                res=y/x;
            }
            else{
                res=y*x;
            }
            push(stack,res,&top);
        }
        i++;
    }
    printf("Evaluation of postfix expression is: %d",res);
    return 0;
}

void push(int s[],int b,int *top){
    if(*top==MAX-1){
        printf("Stack is full\n");
    }
    else{
        (*top)++;
        s[*top]=b;
    }
}

int pop(int s[],int *top){
    int temp;
    if(*top==-1){
        printf("Stack is empty\n");
    }
    else{
        temp=s[*top];
        (*top)--;
    }
    return temp;
}
            
        
    
