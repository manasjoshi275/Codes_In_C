//circular linked list thorugh double pointer

#include<stdio.h>
#include<stdlib.h>
typedef struct circularlinkedlist{
int data;
struct circularlinkedlist*next;
}cl;

void cenq(cl**,cl**);
void cdeq(cl**,cl**);
void display(cl*);

int main(){
cl*f=NULL,*r=NULL;
int choice;
do{
   printf("Enter the opertions to be done!!\n");
   printf("1.ENQUE\n2.DEQUEUE\n3.DISPLAY\n5.EXIT\n");
   scanf("%d",&choice);
   switch(choice){
   	case 1:
   	cenq(&f,&r);
   	break;
   	case 2:
   	cdeq(&f,&r);
   	break;
   	case 3:
   	display(f);
   	break;
   }
  }while(choice<4);
  return 0;
}

//FUNCTIONS

void cenq(cl**f1,cl**r1){
cl*t=NULL;
t=(cl*)malloc(sizeof(cl));
if(t!=NULL){
printf("Enter the value of node!\n");
scanf("%d",&t->data);
if(*f1==NULL&& *r1==NULL){
*f1=*r1=t;
}
else{
(*r1)->next=t;
*r1=t;
}
(*r1)->next=*f1;//as the address of first node will put int *r1->next
}
}

void cdeq(cl**f1,cl**r1){
cl*p=NULL;
if(*f1==NULL&& *r1==NULL){
printf("Circular queue is empty\n");
}
p=*f1;
printf("The dequeued node is %d\n",p->data);
if(*f1==*r1){
*f1=*r1=NULL;
}
else{

*f1=(*f1)->next;
(*r1)->next=*f1;
}
free(p);
}

void display(cl*f){
cl*p=f;//p and f are pointing to same node let say 3e
if(f==NULL){
printf("Circular queue is empty\n");
}
do{
printf("%d\n",p->data);
p=p->next;
}while(p!=f);
}





   	
