#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node*next,*prev;
}node;
node*new_node,*temp,*head;

void input(int n){
    printf("Enter elements in your DLL_>\n");
    for(int i=1;i<=n;i++){
   new_node=(node*)malloc(sizeof(node));
   printf("%d->",i); 
   scanf("%d",&new_node->data);
   if(head==NULL){
    head=new_node;
    new_node->prev=NULL;
    temp=new_node;
   }
   else{
    temp->next=new_node;
    new_node->prev=temp;
    temp=new_node;
   }
    }
     temp->next=NULL;

}

void function(){
    
new_node=(node*)malloc(sizeof(node));
printf("Enter the element you want to add at last of DLL_>\n");
scanf("%d",&new_node->data);
temp->next=new_node;
new_node->prev=temp;
new_node->next=NULL;

}
 
void display(int n){
    printf("Update DLL_>\n");
    for(int i=1;i<=n;i++){
    printf("%d->%d\n",i,head->data); 
    head=head->next;
    }

}

int main(){
    int n;
    head=NULL;
    printf("how many nodes you want in your DLL?");
    scanf("%d",&n);

    input(n);

    function();
n++;
    display(n);
    return 0;
}