#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;

};
void traverse(struct node*p){
    while(p!=NULL){
        printf("Elements of node is:%d\n",p->data);
        printf("addres of %d is %d\n\n",p->data,p);
        p=p->next;
    }


}
struct node* insertation(struct node*q,int index,int item){
    struct node* temp;
    struct node* p;
    p=(struct node*)malloc(sizeof(struct node));
    int i=1;
    temp=q;
    while(i<index-1){
        temp=temp->next;
        i++;
    }
    p->next=temp->next;
    p->data=item;
    temp->next=p;
    return q;


}
int main(){
    int index,item;
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

    traverse(head);
    printf("In which position you want to put the new item?");
    scanf("%d",&index);
    printf("what element you want to insert at %d index?",index);
    scanf("%d",&item);
    head=insertation(head,index,item);
    printf("\n");
    printf("After insertaion>>");
    traverse(head);


    return 0;
     



}
