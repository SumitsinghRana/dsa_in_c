#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;

} node;
void function(node *head)
{
    
    node *temp;
    temp = (node *)malloc(sizeof(node));
    temp=head;
    for(int i=0;i<=4;i++){
        if(temp->data!=50){
            temp=temp->next;
        }
    }

    for (int i = 0; i <= 4; i++)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main()
{

    node *head = (node *)malloc(sizeof(node));
    node *first = (node *)malloc(sizeof(node));
    node *secound = (node *)malloc(sizeof(node));
    node *third = (node *)malloc(sizeof(node));
    node *fourth = (node *)malloc(sizeof(node));

    head->data = 30;
    head->next = first;
    first->data = 35;
    first->next = secound;
    secound->data = 40;
    secound->next = third;
    third->data = 45;
    third->next = fourth;
    fourth->data = 50;
    fourth->next = head;
  
    function(head);
}