//CREATION OF LINKED LIST FROM RHS(FIFO BASED ON QUEUE)

#include<stdio.h>
#include<stdlib.h>
typedef struct linkedlist{
	int data;
	struct linkedlist *next;
}s;

int main()
{
s*p=NULL,*l=NULL,*r=NULL;
int x,ch,c=0;
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
return 0;
}



	