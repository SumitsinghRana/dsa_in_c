#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node*left;
    struct node*right;
}node;

node* insertion(){

    node*root=(node*)malloc(sizeof(node));
    scanf("%d",&root->data);

    if(root->data==0){
        return NULL;
    }
     printf("Enter data for left of %d->",root->data);
     root->left=insertion();
     printf("Enter data for right of %d->",root->data);
     root->right=insertion();
     return root;
     
}

void postorder(node*root){
    
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);

}

int main(){
     node*root;
    printf("Enter data of tree->");
     root=insertion();
     printf("post order conversion=");
     postorder(root);

}