/* menu driven prog for stack by using call by value*/

#include<stdio.h>
#define MAX 10
int push(int[],int);
int pop(int[],int);
void disp(int[],int);
void peek(int[],int);
int main(){
    int arr[MAX],top=-1,ch;
    do{
        printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.PEEK\n5.EXIT\n");
        printf("enter choice\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            top=push(arr,top);
            break;
            case 2:
            top=pop(arr,top);
            break;
            case 3:
            disp(arr,top);
            break;
            case 4:
            peek(arr,top);
            break;
        }
    }while(ch<5);
    return 0;
}
int push(int a[MAX],int top)
{
    int x;
    if(top==MAX-1){
        printf("stack is full\n");
    }
    else{
        printf("Enter the value of x\n");
        scanf("%d",&x);
        top++;
        a[top]=x;
    }
    return top;
}

int pop(int a[MAX],int top){
    int x;
    if(top==-1){
        printf("The stack is empty\n");
    }
    else{
        x=a[top];
        printf("The poped element is %d\n",x);
        top--;
    }
    return top;
}

void disp(int a[MAX],int top){
    if(top==-1){
        printf("Stack is empty\n");
    }
    else{
        while(top!=-1){
            printf("%d\n",a[top--]);
        }
        }
}

void peek(int a[MAX],int top){
    if(top==-1){
        printf("Stack is empty\n");
    }
    else{
        printf("The top element is %d\n",a[top]);
    }
}