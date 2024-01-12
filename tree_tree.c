#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;
node *createNode(int val)
{
    node *root = (node *)malloc(sizeof(node));
    root->data = val;
    root->left = root->right = NULL;
    return root;
}
node *insert(node *root, int val)
{
    if (root == NULL)
    {
        return createNode(val);
    }
    if (val > root->data)
    {
        root->right = insert(root->right, val);
    }
    else if (val < root->data)
    {
        root->left = insert(root->left, val);
    }
    return root;
}
node *findnode(node *root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root;
}
node *deleteNode(node *root, int val)
{
    if (root == NULL)
    {
        return root;
    }
    if (val < root->data)
    {
        root->left = deleteNode(root->left, val);
    }
    else if (val > root->data)
    {
        root->right = deleteNode(root->right, val);
    }
    else
    {
        if (root->right == NULL)
        {
            node *temp = root->left;
            free(root);
            return temp;
        }
        else if (root->left == NULL)
        {
            node *temp = root->right;
            free(root);
            return temp;
        }
        node *temp = findnode(root->right);
        root->data = temp->data;

        root->right = deleteNode(root->right, temp->data);
    }

    return root;
}

void traversal(node *root)
{
    if (root == NULL)
    {
        return;
    }

    traversal(root->left);
    printf("%d ", root->data);
    traversal(root->right);
}
int main()
{
    int val, n, del;
    node *root = NULL;
    printf("Enter total numbres of nodes needed->");
    scanf("%d", &n);
    printf("values->");
    for (int i = 0; i < n; i++)
    {
        printf("%d->", i + 1);
        scanf("%d", &val);
        root = insert(root, val);
    }
    printf("Enter which element you want to delete->");
    scanf("%d", &del);
    root = deleteNode(root, del);

    printf("Inorder traversal->");
    traversal(root);
}