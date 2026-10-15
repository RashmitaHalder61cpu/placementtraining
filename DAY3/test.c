#include <stdio.h>

int main()
{
    int a[10][10], n, i, j, temp;

    printf("Enter the size of matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n / 2; j++)
        {
            temp = a[i][j];
            a[i][j] = a[i][n - 1 - j];
            a[i][n - 1 - j] = temp;
        }
    }

    printf("Matrix after 90 degree clockwise rotation:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

