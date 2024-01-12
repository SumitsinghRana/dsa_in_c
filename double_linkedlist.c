#include<stdio.h>
#include<stdlib.h>

typedef struct node{

struct node*next,*prev;
int data;


}node;
node*head,*new_node,*temp;

void input(int n){
head=NULL;
printf("Enter elements in your node->\n");
for(int i=1;i<=n;i++){

    printf("%d->",i);
    new_node=(node*)malloc(sizeof(node));
    scanf("%d",&(new_node->data)); 

    if(head==NULL){
        head=new_node;
        temp=new_node;
        temp->prev=NULL;
    }
    else{
     temp->next=new_node;
     new_node->prev=temp;
     temp=new_node;
        
    }

}
temp->next=NULL;
}

void display(int n){

    printf("Your inputed node is->\n");
    for(int i=1;i<=n;i++){
        printf("%d->%d(Node_Address=%d,prev=%d,next=%d)\n",i,head->data,head,head->prev,head->next);
        head=head->next;
    }
}


int main(){
int n;
printf("How many nodes you want in your Double_linked_list?");
scanf("%d",&n);

input(n);

display(n);

return 0;


}