 //linked list by inserting node at LHS(based on LIFO)

#include<stdio.h>
#include<stdlib.h>
typedef struct linkedlist{
int data;
struct linkedlist *next;
}s;

int main()
{
s *p=NULL,*l=NULL;
int ch,value;
while(1){
	p=(s*)malloc(sizeof(s));
	if(p!=NULL){
		printf("Enter the value of node\n");
		scanf("%d",&value);
		p->data=value;
		p->next=l;
		l=p;//update
		}
	printf("Do you want to continue,press 0 or 1\n");
	scanf("%d",&ch);
	if(ch==0)
		break;
	}
p=l;
while(p!=NULL){
	printf("%d ",p->data);
	p=p->next;
	}
return 0;
}
//OUTPUT
//linked list by inserting node at LHS

#include<stdio.h>
#include<stdlib.h>
typedef struct linkedlist{
int data;
struct linkedlist *next;
}s;

int main()
{
s *p=NULL,*l=NULL;
int ch,value;
while(1){
	p=(s*)malloc(sizeof(s));
	if(p!=NULL){
		printf("Enter the value of node\n");
		scanf("%d",&value);
		p->data=value;
		p->next=l;
		l=p;//update
		}
	printf("Do you want to continue,press 0 or 1\n");
	scanf("%d",&ch);
	if(ch==0)
		break;
	}
p=l;
while(p!=NULL){
	printf("%d ",p->data);
	p=p->next;
	}
return 0;
}
