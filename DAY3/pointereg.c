#include <stdio.h>

int main()
{
    int arr[5], i;
    int *ptr = arr;

    printf("Enter 5 elements:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", ptr + i);
    }

    printf("\nOutput Array:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", *(ptr + i));
    }

    return 0;
}
