#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;

node *input()
{
    int val;

    node *root = (node *)malloc(sizeof(node));
    scanf("%d", &val);
    root->data = val;

    if (root->data == 0)
    {
        free(root);
        return NULL;
    }
    printf("Enter data for left of %d->", root->data);
    root->left = input();
    printf("Enter data for right of %d->", root->data);
    root->right = input();

    return root;
}
// 5 6 7 0 9 0 0 4 0 0 10 11 0 0 12 0 13 0 0
void inorder(node *root)
{
    if (root== 0)
    {
        return;
    }
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void preorder(node *root)
{
    if (root== 0)
    {
        return;
    }

    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root)
{
    if (root== 0)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

int main()
{
    int a;
    node *main;
    printf("Enter data of your Tree->");
    main = input();
    printf("Enter 1 dor inorder,2 for preorder,3 for postorder.");
    scanf("%d", &a);
    if (a == 1)
    {
        inorder(main);
    }
    else if (a == 2)
    {
        preorder(main);
    }
    else if (a == 3)
    {
        postorder(main);
    }

    return 0;
}