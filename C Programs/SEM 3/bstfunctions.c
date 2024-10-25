#include<stdio.h>
#include<stdlib.h>
typedef struct tree{
    struct tree *left;
    int data;
    struct tree *right;
}bst;
int count_nodes(bst*);
int count_leaf_nodes(bst*);
int count_one_child_nodes(bst*);
void insert(bst**,int);
void main(){
    bst* root=NULL;
    int num,ch,total,leaf,onechild;
    do{
        printf("\n1.Insert a node.\n2.Count total nodes.\n3.Count leaf nodes.\n4.Count nodes having 1 child.\n0.Exit\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
        printf("Enter the number: ");
        scanf("%d",&num);
        insert(&root,num);break;
        case 2:
        total=count_nodes(root);
        printf("There are %d total nodes.",total);break;
        case 3:
        leaf=count_leaf_nodes(root);
        printf("There are %d leaf nodes.",leaf);break;
        case 4:
        onechild=count_one_child_nodes(root);
        printf("There are %d nodes having only one child.",onechild);break;
        case 0:
        exit(1);
        default:
        printf("Please enter a valid choice.");break;
        }
    }while(ch!=0);
}
void insert(bst **root,int num){
    if(*root==NULL){
        *root=(bst*)malloc(sizeof(bst));
        (*root)->left=NULL;
        (*root)->data=num;
        (*root)->right=NULL;
    }
    else if((*root)->data<num){
        insert(&((*root)->right),num);
    }
    else if((*root)->data>num){
        insert(&((*root)->left),num);
    }
    else{
        printf("Duplicates not allowed.");
    }
}
int count_nodes(bst* root){
    static int c=0;
    if(root!=NULL){
        c++;
        count_nodes(root->left);
        count_nodes(root->right);
    }
    return c;
}
int count_leaf_nodes(bst* root){
    static int cl=0;
    if(root!=NULL){
        if(root->left==NULL && root->right==NULL)
            cl++;
    count_leaf_nodes(root->left);
    count_leaf_nodes(root->right);
    }
    return cl;
}
int count_one_child_nodes(bst* root){
    static int co=0;
    if(root!=NULL){
        if((root->left==NULL && root->right!=NULL)||(root->left!=NULL && root->right==NULL))
            co++;
        count_one_child_nodes(root->left);
        count_one_child_nodes(root->right);
    }
    return co;
}