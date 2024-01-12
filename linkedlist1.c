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
int main(){
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

    return 0;
     



}
