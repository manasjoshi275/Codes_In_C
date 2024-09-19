//Stack using double pointers(call by reference)

#include<stdio.h>
#include<stdlib.h>

typedef struct stack{
int data;
struct stack*next;
}s;

void push(s**);
void pop(s**);
void disp(s*);

int main(){
s*top=NULL;
int choice;
do{
	printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
		push(&top);
		break;
		case 2:
		pop(&top);
		break;
		case 3:
		disp(top);
		break;
	}
}while(choice<4);
return 0;
}

void push(s**tp){
int x;
s*p=NULL;
p=(s*)malloc(sizeof(s));
if(p!=NULL){
	printf("Enter value of node: \n");
	scanf("%d",&x);
	p->data=x;
	p->next=*tp;
	*tp=p;
}
}


void pop(s**tp){
s*p=NULL;
if(*tp!=NULL){
	printf("%d",(*tp)->data);
	p=*tp;
	*tp=(*tp)->next;
	free(p);
}
else{
printf("stack is empty\n");
}
}

void disp(s*tp){
if(tp==NULL){
printf("Stack is empty\n");
}
else{
while(tp!=NULL){
	printf("%d ",tp->data);
	tp=tp->next;
	}
}
}
