//double linked list using call by value
#include<stdio.h>
#include<stdlib.h>

typedef struct doublelinkedlist{
struct doublelinkedlist*prev;
int data;
struct doublelinkedlist*next;
}dl;

dl* denq(dl*);
dl* ddeq(dl*);
void display(dl*);

int main(){
dl*f=NULL,*r=NULL;
int choice;
do{
	printf("Enter the operations to be performed!!\n");
	printf("1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
		r=denq(r);
		if(f==NULL)
		f=r;
		break;
		case 2:
		f=ddeq(f);
		if(f=NULL)
		r=NULL;
		break;
		case 3:
		display(f);
		break;
	}
}while(choice<=3);
return 0;
}

dl*denq(dl*r1){
dl*t=NULL;
t=(dl*)malloc(sizeof(dl));
if(t!=NULL){
printf("Enter the value of the node!!\n");
scanf("%d",&t->data);
if(r1==NULL){
r1=t;
r1->prev=NULL;//cause it being the first node that why prev will hold 0
}
else{
r1->next=t;
t->prev=r1;
r1=t;}
r1->next=NULL;
}
return r1;
}

dl*ddeq(dl*f1){
dl*p=NULL;
if(f1==NULL){
printf("QUEUE IS EMPTY\n");
}
else{
p=f1;
printf("The dequeued node is: %d\n",f1->data);
f1=f1->next;
if(f1!=NULL){
f1->prev=NULL;
}
free(p);
}
return f1;
}

void display(dl*f1){
if(f1==NULL){
printf("EMPTY\n");
}
else{
while(f1!=NULL){
printf("%d\n",f1->data);
f1=f1->next;
}
}
}

		

to be edited
