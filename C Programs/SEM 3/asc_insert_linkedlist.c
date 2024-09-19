#include<stdio.h>
#include<stdlib.h>

typedef struct doublelinkedlist{
struct doublelinkedlist*prev;
int data;
struct doublelinkedlist*next;
}adl;

void asc_ins(adl**,adl**);
void display(adl*);

int main(){
adl*l=NULL,*r=NULL;
int choice;
do{
	printf("\n1.INSERT\n2.DISPLAY\n3.EXIT\n");
	printf("Enter the choice!!\n");
	scanf("%d",&choice);
	switch(choice){
	case 1:
	asc_ins(&l,&r);
	break;
	case 2:
	display(l);
	break;
	}
}while(choice<=3);
return 0;
}

void asc_ins(adl**l1,adl**r1){
adl*ptr=NULL,*q=NULL;
ptr=(adl*)malloc(sizeof(adl));
if(ptr!=NULL){
printf("Enter the data in node: \n");
scanf("%d",&ptr->data);
ptr->next=NULL;
if(*l1==NULL && *r1==NULL){
*l1=*r1=ptr;
}
//adding at the beginning of list
else if(ptr->data < (*l1)->data){
ptr->next=*l1;
(*l1)->prev=ptr;
*l1=ptr;
ptr->prev=NULL;
}
//adding at the last of the list
else if(ptr->data > (*r1)->data){
(*r1)->next=ptr;
ptr->prev=(*r1);
*r1=ptr;
}
//adding in middle of the nodes
else{
q=*l1;
while(q->data < ptr->data){
q=q->next;
}
ptr->next=q;
ptr->prev=q->prev;
q->prev->next=ptr;
q->prev=ptr;
}
}
}

void display(adl*f){
if(f==NULL){
printf("EMPTY\n");
}
else{
while(f!=NULL){
printf("%d ",f->data);
f=f->next;
}
}
}

	
	
