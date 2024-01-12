#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *left, *right;
} node;
node *new_node, *temp, *temp2, *head;
int count = 0;
void input(int n)
{
    head = NULL;
    printf("Enter elements in your node->\n");
    for (int i = 0; i < n; i++)
    {
        new_node = (node *)malloc(sizeof(node));
        scanf("%d", &new_node->data);
        if (head == NULL)
        {
            head = new_node;
            temp = new_node;
            new_node->left = NULL;
        }
        new_node->left = temp;
        temp->right = new_node;
        temp = new_node;
    }
    temp->right = NULL;
}
void delete(int n, int key)
{
    temp = head;
  

    for (int i = 0; i < n; i++)
    {
        if (temp->data == key)
        {
             temp2 = temp;
            if (temp->right != NULL)
            {
                temp->right->left = temp->left;
            }
            if (temp->left != NULL)
            {
                temp->left->right = temp->right;
            }
            if (temp==head)
            {
                head = temp->right;
                head->left=NULL;
            }
            free(temp2);
            count++;
        }
        temp = temp->right;
    }
    if (count == 0)
    {
        printf("key not found.");
    }
}
void display(int n)
{
    printf("After removing your beloved node->\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", head->data);
        head = head->right;
    }
}
int main()
{
    int n, lovely;
    printf("How many nodes you want->");
    scanf("%d", &n);
    input(n);
    printf("Enter your beloved key->");
    scanf("%d", &lovely);
    delete (n, lovely);
    if (count == 1)
    {
        n++;
        display(n);
    }
    return 0;
}