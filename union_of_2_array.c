#include <stdio.h>
int main()
{
    int a1[50], a2[50], a3[50], n1, n2, i, j, count = 0, flag;
    printf("enter range for array 1:");
    scanf("%d", &n1);
    printf("enter elements for array 1\n");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a1[i]);
    }
    printf("enter range for array 2:");
    scanf("%d", &n2);
    printf("enter elements for array2\n");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &a2[i]);
    }
    for (i = 0; i < n2; i++)
    {
        a1[n1 + i] = a2[i];
    }
    a3[0] = a1[0];
    for (i = 1; i < n1 + n2; i++)
    {
        for (j = 0; j <= count; j++)
        {
            if (a3[j] == a1[i])
            {
                flag = 0;
                break;
            }
            flag = 1;
        }
        if (flag == 1)
        {
            a3[j] = a1[i];
            count++;
        }
    }
    printf("Union of two given arrays:\n");
    for (i = 0; i <= count; i++)
    {
        printf("%d\n", a3[i]);
    }
    return 0;
}