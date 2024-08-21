/* menu driven prog for stack by using DMA function*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 10
void push(int[],int*);
void pop(int[],int*);
void disp(int[],int);
void peek(int[],int);
int main(){
    int *arr=NULL,top=-1,ch;
    int n;
    printf("enter value of n\n");
    arr=(int*)malloc(n*sizeof(int));
    do{
        printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.PEEK\n5.EXIT\n");
        printf("enter choice\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            push(arr,&top);
            break;
            case 2:
            pop(arr,&top);
            break;
            case 3:
            disp(arr,top);
            break;
            case 4:
            peek(arr,top);
            break;
        }
    }while(ch<=4);
    return 0;
}
void push(int *p,int *top)
{
    int x;
    if(*top==MAX-1){
        printf("stack is full\n");
    }
    else{
        printf("Enter the value of x\n");
        scanf("%d",&x);
        (*top)++;
        *(p + *(top))=x;
    }

}

void pop(int *p,int *top){
    int x;
    if(*top==-1){
        printf("The stack is empty\n");
    }
    else{
        x=*(p + *(top));
        printf("The poped element is %d\n",x);
        (*top)--;
    }
    
}

void disp(int *p,int top){
    if(top==-1){
        printf("Stack is empty\n");
    }
    else{
        while(top!=-1){
            printf("%d\n",*(p + (top)));
            top--;
        }
        }
}

void peek(int *p,int top){
    if(top==-1){
        printf("Stack is empty\n");
    }
    else{
        printf("The top element is %d\n",*(p + (top)));
    }
}