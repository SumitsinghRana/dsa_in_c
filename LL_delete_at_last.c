#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    struct node *next;
    int data;
} node;
node *ptr, *new_node, *temp;
void insert(int n)
{
    ptr = NULL;
    printf("Enter values->\n");
    for (int i = 0; i < n; i++)
    {
        new_node = (node *)malloc(sizeof(node));
        scanf("%d", &new_node->data);
        if (ptr == NULL)
        {
            ptr = new_node;
            temp = new_node;
        }
        temp->next = new_node;
        temp = new_node;
    }
    temp->next = NULL;
}
void delete(int n)
{

    int i = 0, j = 0;
    temp = ptr;
    node *new_temp = ptr;
    node *p, *q;
    while (temp->next != NULL)
    {
        p = temp;
        temp = temp->next;
        i++;
    }
    while (ptr->next != temp)
    {
        q = ptr;
        ptr = ptr->next;
        j++;
    }
    q->next = temp;
    free(p);
    ptr = new_temp;
}
void display(int n)
{
    printf("updated LL->\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    int n;
    printf("tota; nodes?");
    scanf("%d", &n);
    insert(n);
    delete (n);
    n--;
    display(n);
    return 0;
}