#include<stdio.h>
#define max 10
int cenq(int[],int,int);
int cdeq(int[],int,int);
void disp(int[],int,int);
void peek(int[],int,int);
void main(){
int cq[max],f=-1,r=-1,ch;
do{
printf("\nPress 1 for enqueue.\nPress 2 for dequeue.\nPress 3 for display.\nPress 4 for peek.\n");
printf("Choose your operation: ");
scanf("%d",&ch);
switch(ch){
case 1:
r=cenq(cq,f,r);
if(f==-1){
f=0;}
break;
case 2:
f=cdeq(cq,f,r);
if(f==-1){
r=-1;}
break;
case 3:
disp(cq,f,r);
break;
case 4:
peek(cq,f,r);
break;
}
}while(ch<=4);
}

int cenq(int cq[],int f,int r){
int x;
if((r+1)%max==f){
printf("\nQueue is full.\n");}
else{
printf("\nEnter the element: ");
scanf("%d",&x);
r=(r+1)%max;
cq[r]=x;
}
return r;
}
int cdeq(int cq[],int f,int r){
int x;
if(f==-1&&r==-1)
printf("\nQueue is empty.\n");
else{
x=cq[f];
printf("\n%d was dequeued.\n",x);
if(f==r)
f=-1;
else
f=(f+1)%max;
}
return f;
}
void disp(int cq[],int f,int r){
if(f==-1&&r==-1){
printf("\nQueue is empty.\n");}
else{
printf("\nThe queue is: ");
while(f!=r){
printf("%d ",cq[f]);
f=(f+1)%max;
}
printf("%d.\n",cq[f]);
}}

void peek(int cq[],int f,int r){
if(f==-1&&r==-1){
printf("\nQueue is empty.\n");}
else{
printf("\nThe first element is: %d.\n",cq[f]);}
}