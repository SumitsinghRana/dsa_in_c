#include<stdio.h>
#include<stdlib.h>

typedef struct node{
int data;
struct node*next,*prev;

}node;
node*head,*temp,*new_node;

void input(int n){
    printf("Enter elements in your DLL->\n");
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
            new_node->prev=temp;
            temp->next=new_node;
            temp=new_node;

        }

    }
    temp->next=NULL;    
}
 void function(int n){
    node*special;
    new_node=(node*)malloc(sizeof(node));
    printf("Enter element you want to add->");
    scanf("%d",&new_node->data);
    int i=1;
    temp=head;
    while(i<n-1){ 
        temp=temp->next;
        i++;
    }
    new_node->prev=temp;
    new_node->next=temp->next;
    special=temp->next;
    temp->next=new_node;
    special->prev=new_node;
    


 }
 void display(int n){
    printf("Updated DLL is->\n");  
    for(int i=1;i<=n;i++){
        printf("%d->%d\n",i,head->data);
        head=head->next;
    }

 }

int main(){
    head=NULL;
    int n0,n1;
    printf("How many nodes you want in your DLL?");
    scanf("%d",&n0);

    input(n0);

    printf("At whcih position you want to add the new node?");
    scanf("%d",&n1);

    function(n1);
n0++;
    display(n0);
    return 0; 
}