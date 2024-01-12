#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;

} node;

node *insertion(int len)
{
    node *new_node, *temp, *head;
    head = NULL;
    printf("Enter data in your node's->\n");
    for (int i = 0; i < len; i++)
    {
        new_node = (node *)malloc(sizeof(node));
        printf("%d->", i + 1);
        scanf("%d", &new_node->data);
        if (head == NULL)
        {
            head = new_node;
            temp = head;
            temp->prev = NULL;
        }
        new_node->prev = temp;
        temp->next = new_node;
        temp = temp->next;
    }
    temp->next = NULL;
    return head;
}

void display(node *head)
{
    node *temp;
    temp = head;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

node *reverse(node *head)
{
    node *current, *next_node, *temp;
    current = head;
    temp = head;
    while (current != NULL)
    {

        next_node = current->next;
        current->next = current->prev;
        current->prev = next_node;

        current = next_node;
        if (current != NULL)
        {
            temp = current;
        }
    }
    head = temp;
    return head;
}

int main()
{
    int len;

    printf("Enter nodes needed->");
    scanf("%d", &len);

    node *head = insertion(len);

    printf("Displaying your node with data->\n");
    display(head);

    head = reverse(head);

    printf("After reversing DLL->\n");
    display(head);

    return 0;
}