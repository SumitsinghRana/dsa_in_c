#include<stdio.h>
#include<stdlib.h>

typedef struct node{
struct node*next;
int data;
}node;

node* input(int n){
node*temp,*head=NULL,*new_node;
printf("Enter inputs in your node:\n");
for(int i=1;i<=n;i++){
    printf("%d->",i);
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

for(int i=1;i<=n;i++){
    printf("%d->%d\n",i,head->data); 
    head=head->next;

}

}

 node* function(node*head,int n,int position){

    node*temp,*new_node;
    int i=0,item;
    printf("Enter new value you want to put after %d posotion->",position);
    scanf("%d",&item);
    new_node=(node*)malloc(sizeof(node));
    temp=head;
    while(i<position-1){
        temp=temp->next;
        i++;
    }
    new_node->data=item;
    new_node->next=temp->next;
    temp->next=new_node;
    return head;
 
}

int main(){
    node*head;
    int n0,n1;
    printf("How many nodes you want?");
    scanf("%d",&n0);
 
    head=input(n0);

    printf("Current node:\n");
    display(head,n0);

    printf("Enter the position after which you want to change the value:");
    scanf("%d",&n1);

    n0++;
    
    head=function(head,n0,n1);
    printf("After changing the value,new node looks like->\n");
    display(head,n0);
    return 0; 

    

}