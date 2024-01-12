#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;

};
struct node*traverse(struct node*p){
    int temp;
    while(p!=NULL){
        printf("Elements of node is:%d\n",p->data);
        printf("addres of %d is %d\n\n",p->data,p);
        temp=p;
        p=p->next;
       
    }
     return temp;


}
struct node*insertation(struct node*q,int item){
    struct node*p;
    p=(struct node*)malloc(sizeof(struct node));
    q->next=p;
    p->data=item;
    p->next=NULL;
    

}
int main(){
    int item;
    struct node* head;
    struct node*secound;
    struct node* third;
    struct node* fourth;
    struct node* fifth;

    head=(struct node*)malloc(sizeof(struct node));
    secound=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    fifth=(struct node*)malloc(sizeof(struct node));

    head->data=20;
    head->next=secound;

    secound->data=30;
    secound->next=third;

    third->data=40;
    third->next=fourth;
     
    fourth->data=50;
    fourth->next=fifth;

    fifth->data=60;
    fifth->next=NULL;
    int temp=head;

   head=traverse(head);
   
   printf("What element you want to insert?");
   scanf("%d",&item);
   
   head=insertation(head,item);
   printf("\n");
   printf("After insertaion at he last>>");
   printf("\n");
   traverse(temp);

    return 0;
     



}
