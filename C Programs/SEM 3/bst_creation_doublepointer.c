#include<stdio.h>
#include<stdlib.h>

typedef struct tree{
struct tree*left;
int data;
struct tree*right;
}bst;

void insert(bst**,int);
void display(bst*);
void preorder(bst*);
void inorder(bst*);
void postorder(bst*);

int main(){
bst*root=NULL,*temp;
int ch,num;
while(1){
printf("Press 0 to stop\n");
scanf("%d",&ch);
if(ch!=0){
printf("Enter the num\n");
scanf("%d",&num);
insert(&root,num);
}
else{
break;
}
}


printf("The left subtree is: ");
display(root->left);

printf("\nThe right subtree is: ");
display(root->right);

printf("\nPreorder: ");
preorder(root);


printf("\nInorder: ");
inorder(root);

printf("\nPostorder: ");
postorder(root);
return 0;
}

void insert(bst**root,int num){
if(*root==NULL){
bst*ptr=(bst*)malloc(sizeof(bst));
ptr->data=num;
ptr->left=NULL;
ptr->right=NULL;
*root=ptr;
}
else if((*root)->data>num){
insert(&(*root)->left,num);
}
else if((*root)->data<num){
insert(&(*root)->right,num);
}
else{
printf("No duplicate info not allowed!!\n");
}
}

void display(bst* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        display(root->left);
        display(root->right);
    }
}

void preorder(bst*root)
{
if(root!=NULL){
printf("%d ",root->data);
preorder(root->left);
preorder(root->right);
}
}

void inorder(bst*root)
{
if(root!=NULL){
inorder(root->left);
printf("%d ",root->data);
inorder(root->right);
}
}

void postorder(bst*root)
{
if(root!=NULL){
postorder(root->left);
postorder(root->right);
printf("%d ",root->data);
}
}
