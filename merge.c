#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    struct node *next;
    int data;
} node;
node *ptr1, *ptr2, *ptr3;

void insert(int n)
{
    node *new_node, *temp;
    ptr1 = NULL;
    printf("Enter values in first LL->\n");
    for (int i = 0; i < n; i++)
    {
        new_node = (node *)malloc(sizeof(node));
        scanf("%d", &new_node->data);
        if (ptr1 == NULL)
        {
            ptr1 = new_node;
            temp = new_node;
        }
        temp->next = new_node;
        temp = new_node;
    }
    temp->next = NULL;
}
void insert2(int n)
{
    node *new_node, *temp;
    ptr2 = NULL;
    printf("Enter values in 2nd LL->\n");
    for (int i = 0; i < n; i++)
    {
        new_node = (node *)malloc(sizeof(node));
        scanf("%d", &new_node->data);
        if (ptr2 == NULL)
        {
            ptr2 = new_node;
            temp = new_node;
        }
        temp->next = new_node;
        temp = new_node;
    }
    temp->next = NULL;
}
void merge()
{
    int i = 0;
    node *temp;
    ptr3 = ptr1;
    while (ptr1->next != NULL)
    {
        temp = ptr1;
        ptr1 = ptr1->next;
        i++;
    }
    temp->next->next = ptr2;
}

void display(int n)
{
    printf("updated LL->\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr3->data);
        ptr3 = ptr3->next;
    }
}

int main()
{
    int n;
    printf("tota; nodes?");
    scanf("%d", &n);
    insert(n);
    insert2(n);
    merge();
    n = n + n;
    display(n);
    return 0;
}