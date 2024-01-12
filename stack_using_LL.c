#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
int n, n1 = 0;
node *new_node, *head, *top, *temp;

void push()
{
    head = NULL;
    printf("How many nodes you want in stack:");
    scanf("%d", &n);
    printf("Enter the values in your stack->\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d->", i);
        new_node = (node *)malloc(sizeof(node));
        scanf("%d", &(new_node->data));
        if (head == NULL)
        {
            head = new_node;
            top = new_node;
        }
        else
        {
            top->next = new_node;
            top = new_node;
        }
    }
    top->next = NULL;
    if (n1 != 0)
    {
        n1++;
    }
}

void pop()
{

    if (top == head)
    {
        printf("Underflow comndition.\n");
    }
    else
    {
        temp = head;
        for (int i = 0; i < n - 2; i++)
        {
            temp = temp->next;
        }
        free(top);
        temp->next = NULL;
        top = temp;
        n1 = n;
        n1--;
    }
}
void peek()
{
    if (top == head)
    {
        printf("Underflow condition:");
    }
    else
    {
        printf("%d", top->data);
    }
}
void display()
{
    if (top == head)
    {
        printf("Underflow condition:");
    }
    else
    {
        temp = head;
        for (int i = 0; i < n1; i++)
        {
            printf("%d->%d\n", i, temp->data);
            temp = temp->next;
        }
    }
}

int main()
{
    int a;
    while (1)
    {
        printf("\nPress the following key for operations->\n->1 for push\n->2 for pop\n->3 for peek\n->4 for display\n-->press 0 to exit\n");
        scanf("%d", &a);

        switch (a)
        {
        case 0:
            return 0;
            break;
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        default:
            printf("Invalid input:");
            break;
        }
    }
    return 0;
}