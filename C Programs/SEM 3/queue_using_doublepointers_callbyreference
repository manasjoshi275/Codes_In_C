//queue using double pointers(call by reference)

#include<stdio.h>
#include<stdlib.h>

typedef struct queue{
int data;
struct queue*next;
}q;

void enq(q**,q**);
void deq(q**,q**);
void disp(q*);

int main(){
q*F=NULL,*R=NULL;
int choice;
do{
	printf("\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
		enq(&F,&R);
		break;
		case 2:
		deq(&F,&R);
		break;
		case 3:
		disp(F);
		break;
	}
}while(choice<4);
return 0;
}

void enq(q**f1,q**r1){
int x;
q*p=NULL;
p=(q*)malloc(sizeof(q));
if(p!=NULL){
	printf("Enter value of node: \n");
	scanf("%d",&x);
	p->data=x;
	if(*f1==NULL && *r1==NULL){
	*f1=*r1=p;
	}
	else{
	(*r1)->next=p;
	*r1=p;
	}
	(*r1)->next=NULL;
}
}


void deq(q**f1,q**r1){
q*p=NULL;
if(*f1==NULL && *r1==NULL)
printf("queue is empty\n");
else
p=*f1;
printf("%d",(*f1)->data);
if(*f1==*r1)
*f1=*r1;
else
*f1=(*f1)->next;

free(p);
}

void disp(q*f1){
if(f1==NULL){
printf("queue is empty\n");
}
else{
while(f1!=NULL){
	printf("%d ",f1->data);
	f1=f1->next;
	}
}
}
