#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int data;
struct node*next,*prev;

}node;
node*new_node,*temp,*head;
 void input(int n){
 
for(int i=1;i<=n;i++){
    new_node=(node*)malloc(sizeof(node));
    printf("%d->",i);
    scanf("%d",&(new_node->data));
    if(head==NULL){
        head=new_node;
        temp=new_node;
        new_node->prev=NULL;
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
   // printf("Your enterd node is->\n"); 
    for(int i=1;i<=n;i++){
        printf("%d->%d\n",i,head->data);
        head=head->next; 
    }
    }
 
 
void function(int index){
int i=0;
temp=head;
while(i<index-1){
temp=temp->next;
i++;
}
if(temp->prev!=NULL){
temp->prev->next=temp->next;
}
if(temp->next!=NULL){
temp->next->prev=temp->prev;
if(temp->prev==NULL){
    head=temp->next;
}
}
free(temp);

 }


int main(){
 head=NULL;
 int n,pos;
 printf("How many nodes you want in DLL?");
 scanf("%d",&n);

 input(n);

 //display(n);

printf("Enter which position node you want to delete->");
scanf("%d",&pos);
 function(pos);
 printf("After deleting %d node the new DLL is->\n",pos);
 n--;
 display(n);



 return 0;
}