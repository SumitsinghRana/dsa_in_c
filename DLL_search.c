#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node*pre,*next;
}node;
node *head,*temp,*new_node;

void insert(int n){
    head=NULL;
    printf("Enter values in your DLL->\n");
    for(int i=1;i<=n;i++){
           printf("%d->",i);
           new_node=(node*)malloc(sizeof(node));
           scanf("%d",&new_node->data);
           if(head==NULL){
            head=new_node;
            temp=head;
            new_node->pre=NULL;
           }
        head->next=new_node;
        new_node->pre=head;
        head=head->next;
    }
    head->next=NULL;
}
int search(int key,int n){
    head=temp;
    int flag=0;
    for(int i=1;i<=n;i++){
        if(head->data==key){
            return i;
            flag=1;
        }
        head=head->next;
    }
    if(flag==0){
        return -1;
    }
}
int main(){

int n,key;
printf("How many nodes you want to add in DLL->");
scanf("%d",&n);
insert(n);
printf("Element you want to search?");
scanf("%d",&key);
int ans=search(key,n);
if(ans==-1){
    printf("Element not found.");
}
else{
    printf("Element found at %d node.",ans);
}

return 0;

}