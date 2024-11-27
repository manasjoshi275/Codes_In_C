//Q1. Write a menu driven  program to reverse a single linked list in O(N) time with a non-recursive function.

#include<stdio.h>
#include<stdlib.h>
typedef struct list
{
    int data;
    struct list *next;
}sl;

sl* insert(sl*);
void display(sl*);
sl* reverselist(sl*);

int main(){
    sl* head = NULL;
    int choice;
    do{
        printf("\n1.Insert a node\n2.Display the list\n3.Reverse the list\n0.Exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            head = insert(head);
            break;
            case 2:
            display(head);
            break;
            case 3:
            head = reverselist(head);
            break;
            case 0:
            exit(1);
        }
    }while(choice!=0);
    return 0;
}

sl* insert(sl*head){
    sl *ptr=NULL, *temp=head;
    ptr = (sl*)malloc(sizeof(sl));
    printf("\nEnter the node value: ");
    scanf("%d",&ptr->data);
    ptr->next=NULL;
    if(head==NULL){
        head=ptr;
    }
    else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=ptr;
    }
    return head;
}

void display(sl*head){
    if(head==NULL){
        printf("\nEmpty list");
    }
    else{
        while(head!=NULL){
            printf("%d ",head->data);
            head = head->next;
        }
    }
}

sl* reverselist(sl* head){
    sl *current=head, *prev=NULL, *next=NULL;
    while(current!=NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}