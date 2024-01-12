#include <stdio.h>
int stack[20];
int top = -1;
void push(int item)
{
    if (top == 19)
    {
        printf("stack Overflowing with burdens\n");
    }
    top++;
    stack[top] = item;
}
void pop()
{
    int a;
    if (top == -1)
    {
        printf("stack is empty like you\n");
    }
    a = stack[top--];
    printf("%d is removed from stack", a);
    printf("\n");
}
void peek()
{
    if (top == -1)
    {
        printf("stack is empty like you\n");
    }
    printf("top element is->%d", stack[top]);
    printf("\n");
}
void isempty()
{
    if (top == 19)
    {
        printf("stack Overflowing with burdens\n");
    }
    printf("stack can take more :)\n");
}
void display()
{
    
    while (stack[top] != -1)
    {
        if(top==0){
            break;
        }
        printf("%d", stack[top]);
        top--;
    }
}
int main()
{
    int choice, item;
    while (1)
    {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Check if Stack is Empty\n");
        printf("5.for display\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter element you want to push:");
            scanf("%d", &item);
            push(item);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            isempty();
            break;
        case 5:
            display();
            break;
        case 6:
            printf("exiting from this cruel program :)");
            return 0;
            break;
        default:
            printf("Invalid input");
            break;
        }
    }
    return 0;
}