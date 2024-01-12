#include<stdio.h>
#include<stdlib.h>

typedef struct node{

int data;
struct node*next,*prev;

}node;

node*head,*new_node,*temp;

void input(int n){

    printf("Enter the elements of your DLL->\n");
    for(int i=1;i<=n;i++){
        new_node=(node*)malloc(sizeof(node));
        printf("%d->",i);
        scanf("%d",&(new_node->data));

    if(head==NULL){
        head=new_node;
        head->prev=NULL;
        temp=new_node;
    }
    else{
        temp->next=new_node;
        new_node->prev=temp;
         temp=new_node;
    }
    temp->next=NULL;
    }
}

void function(){
new_node=(node*)malloc(sizeof(node));
printf("Enter element you want to inster at the start->\n");
if(head==NULL){
    printf("The linked list is emepty!");
}
scanf("%d",&(new_node->data));
new_node->next=head;
head->prev=new_node;
head=new_node;
head->prev=NULL;
}

void display(int n){
    for(int i=1;i<=n;i++){
        printf("%d->%d\n",i,head->data);
        head=head->next;
    }

}

int main(){

    head=NULL;
    int n;
    printf("Enter how many nodes you want in your DLL->");
    scanf("%d",&n);
     
    input(n);

    function();

    printf("After updating the final DLL is->\n");
    n++;
    display(n);
    return 0;
}