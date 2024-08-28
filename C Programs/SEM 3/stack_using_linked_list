//stack using linked list by call by value yusing pointer
//here in this code value is passes as call by value with a single pointer
//also in this code structure is pass [self referential structure]


#include<stdio.h>
#include<stdlib.h>

typedef struct stack{
int data;
struct stack *next;
}s;

s* push(s*);
s* pop(s*);
void display(s*);

int main(){
s* top=NULL;
int ch;
do{
	printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
	scanf("%d",&ch);
	switch(ch){
			case 1:
			top=push(top);
			break;
			case 2:
			top=pop(top);//if null is passes you'll return null and other than null is passed the you'll recieve address 
			break;
			case 3:
			display(top);
			break;
		}
	}while(ch!=4);
	return 0;
}

s*push(s* tp){//here top is initialize with 0 or null
int x;
s* p=NULL;
p=(s*)malloc(sizeof(s));//
if(p!=NULL){
	printf("Enter value\n");
	scanf("%d",&x);
	p->data=x;
	p->next=tp;//pointing to null at first time
	tp=p;//here top and p having same address
}
else{
	printf("Memory not available");
	}
return tp;
}

s* pop(s*tp){//here tp is holding some address and will poped out accordingly
s*p=NULL;
if(tp==NULL){
printf("Stack is empty\n");
}
else{
p=tp;//to free in future
printf("Poped node is %d\n",tp->data);
tp=tp->next;//address of second left node
free(p);
}
return tp;//here address of poped node will return
}

void display(s*tp){
if(tp==NULL){
printf("Stack is empty\n");
}
else{
while(tp!=NULL){
printf("%d \n",tp->data);
tp=tp->next;
}
}
}



