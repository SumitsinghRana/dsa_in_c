#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    struct node *next, *prev;
    int data;
} node;
node *q, *temp, *new_node;
void insert(int n)
{
    q = NULL;
    printf("Start inputing values of your node->\n");
    for (int i = 0; i < n; i++)
    {
        new_node = (node *)malloc(sizeof(node));
        scanf("%d", &(new_node->data));
        if (q == NULL)
        {
            q = new_node;
            temp = new_node;
            new_node->prev = NULL;
        }
        temp->next = new_node;
        temp->next->prev = temp;
        temp = new_node;
    }
    temp->next = NULL;
}
void insert_at_last(int val)
{

    int i = 0;
    temp = q;
    while (temp->next != NULL)
    {
        temp = temp->next;
        i++;
    }
    node *fresh_node = (node *)malloc(sizeof(node));
    fresh_node->data = val;
    temp->next = fresh_node;
    fresh_node->prev = temp;
    fresh_node->next = NULL;
}
void display(int n)
{
    printf("Final node is->\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", (q->data));
        q = q->next;
    }
}
int main()
{

    int n, val;
    printf("Node required?\n");
    scanf("%d", &n);
    insert(n);
    printf("What value you want to insert at the last of the node?\n");
    scanf("%d",&val);
    insert_at_last(val);
    n++;
    display(n);

    return 0;
}