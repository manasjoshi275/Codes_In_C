#include<stdio.h>
#include<stdlib.h>

typedef struct linkedlist{
	int data;
	struct linkedlist *next;
}s;

s*Insa(s*);
s*Insb(s*);
s*Insc(s*);
s*Insd(s*);

int main()
{
s*p=NULL,*l=NULL,*r=NULL;
int x,ch,c=0;
int choice;
printf("Enter the no of nodes you want to enter \n");
scanf("%d",&ch);
while(c!=ch){
p=(s*)malloc(sizeof(s));
if(p!=NULL){
	printf("Enter the value of %d node",c+1);
	scanf("%d",&x);
	p->data=x;
	if(l==NULL&&r==NULL){
		l=r=p;//initialixe list with new node
	}
	else{
		r->next=p;//link of new node with end of list
		r=p;//update of end
	}
}
else{
	r->next=NULL;
	
	
}
c++;
}
//printing the linked list
p=l;//start from head of list
while(p!=NULL){
printf("%d",p->data);
p=p->next;
}

do{
printf("1.Insert before first node\n2.Insert after the first node\n3.Insert before the last node\n4.Insert aftr the last node\n5.Exit\n);
scanf("%d",&choice);
switch(choice){
	case 1:
	l=Insa(l);
	break;
	case 2;
	l=Insb(l);
	break;
	case 3:
	l=Insc(l);
	break;
	case 4:
	l=Insd(l);
	break;
}
}while(choice!=5);
return 0;
}

s*Insa(s*ptr){
int x;
s*p=NULL;
p=(s*)malloc(sizeof(s));
printf("Enter the value of new node\n");
scanf("%d",&x);
p->data=x;
p->next=ptr;
ptr=p;
return p;
}











	
