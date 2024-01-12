#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    int item;
    struct node* next;
};

void traverse(struct node*p){
    while(p!=NULL){
        printf("Elements of node is:%d\n",p->data);
        printf("addres of %d is %d\n\n",p->data,p);
        p=p->next;
    }



}
struct node* insertation(struct node*p,int item){
    struct node*q;
    q=(struct node*)malloc(sizeof(struct node));
    q->data=item;
    q->next=p;
    return q;
}

int main(){
int item;
struct node*head;
struct node*secound;
struct node*third;
struct node*fourth;
head=(struct node*)malloc(sizeof(struct node));
secound=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));
fourth=(struct node*)malloc(sizeof(struct node));

head->data=20;
head->next=secound;

secound->data=30;
secound->next=third;

third->data=40;
third->next=fourth;

fourth->data=50;
fourth->next=NULL;


traverse(head);
printf("\n");
printf("Type the item you want to insert at the very first:");
scanf("%d",&item);
head=insertation(head,item);
traverse(head);


return 0;



}