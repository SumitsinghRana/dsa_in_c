#include <stdio.h>
int main()
{
    int arr1[50], arr2[50], arr3[100], n1, n2, count = 0, duplicate;
    printf("Enter array 1 size->");
    scanf("%d", &n1);
    printf("Enter size of 2nd array->");
    scanf("%d", &n2);
    printf("Enter elements of 1st aray->\n");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter elements of 2nd array->\n");

    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < n1; i++)
    {

        for (int j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                duplicate = 0;
                for (int k = 0; k < count; k++)
                {
                    if (arr3[k] == arr1[i])
                    {
                        duplicate = 1;
                        break;
                    }
                }
                if (!duplicate)
                {
                    arr3[count] = arr1[i];
                    count++;
                }
            }
        }
    }
    printf("intersection of arry is->\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d\n", arr3[i]);
    }
    return 0;
}