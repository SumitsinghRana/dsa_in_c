#include<stdio.h>
#include<stdlib.h>
 typedef struct node{
    int data;
    struct node*next;
}node;


node*input(int n){

node*temp,*new_node,*head;
head=NULL;
printf("Enter inputs in your nodes->");
for(int i=0;i<n;i++){
new_node=(node*)malloc(sizeof(node));
scanf("%d",&(new_node->data));
if(head==NULL){
    head=new_node;
    temp=new_node;
}
else{
temp->next=new_node;
temp=new_node;
}
}
new_node->next=NULL;
return head;

}

void display(node*head,int n){

printf("Node's with your inputs is->\n");
for(int i=0;i<n;i++){
    printf("%d->",head->data);
    printf("%d\t",head);
    printf("%d->>\n ",head->next);
    head=head->next;
    
}
}


int main(){
node* head;
int n;
printf("How many node you want in your linked_list?");
scanf("%d",&n);
head=input(n);
display(head,n);
return 0;
  
}
