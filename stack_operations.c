#include <stdio.h>
int stack[10];
int top = -1;

void push()
{

    printf("Enter the value's in stack->\n");
    for (int i = 0; i <= 9; i++)
    {

        if (top == 9)
        {
            printf("No more value can be inputed(overflow condition)\n");
            break;
        }
        else
        {
            top++;
            scanf("%d", &stack[top]);
        }
    }
}
void pop()
{
    if (top == -1)
    {
        printf("Underflow comndition.\n");
    }
    else
        top--;
}
void peek()
{
    if (top == -1)
    {
        printf("Underflow condition.\n");
    }
    else
    {
        printf("Top value is->%d\n", stack[top]);
    }
}
void display()
{
    if (top == -1)
    {
        printf("Under flow condition.\n");
    }
    else
    {

        printf("Values of stack are->\n");
        for (int i = 0; i <= top; i++)
        { 
            printf("%d\n", stack[i]);
        } 
    }
}

int main()
{
    int a;
    while (1)
    {
        printf("Press the following key for operations->\n->1 for push\n->2 for pop\n->3 for peek\n->4 for display\n-->press 0 to exit\n");
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
