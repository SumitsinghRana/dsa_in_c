#include <stdio.h>
#include <stdlib.h>

void function(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum = sum + arr[i];
        }
    }
    display(sum);
}
void display(int total)
{
    printf("sum of even numbers is->%d", total);
}
int main()
{
    int n;
    printf("Enter total element you want->");
    scanf("%d", &n);
    int *p = (int *)malloc(n * sizeof(int));
    printf("enter elements->");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
    }
    function(p, n);
    return 0;
}