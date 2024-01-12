#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int data;
struct node *left;
struct node *right;
}node;


node*createNode(int val){
     node*root=(node*)malloc(sizeof(node));
     root->data=val;
     root->left=root->right=NULL;
     return root;


}
node*insert(node*root,int val){
   
    if(root==NULL){
       return createNode(val);
    }
    if(val>root->data){
        root->left=insert(root->left,val);
    }
    if(val<root->data){
        root->right=insert(root->right,val);
    }
    return root;
}
void inorder(node*root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    printf("%d",root->data);
    inorder(root->right);
}
int main(){
    int n,val;
    node*root=NULL;
    printf("Total numbers of elements->");
    scanf("%d",&n);
    printf("Enter valiues->");
    for(int i=0;i<n;i++){
        printf("%d->",i+1);
        scanf("%d",val);
        root=insert(root,val);

    }
      printf("Inorder travelsal->");
    inorder(root);

}