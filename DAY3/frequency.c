#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, digit, i;
    int *freq;

    freq = (int *)malloc(10 * sizeof(int));

    if (freq == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    for (i = 0; i < 10; i++)
    {
        freq[i] = 0;
    }

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0)
    {
        freq[0] = 1;
    }

    while (n != 0)
    {
        digit = abs(n % 10);
        freq[digit]++;
        n = n / 10;
    }

    printf("Frequency of digits:\n");

    for (i = 0; i < 10; i++)
    {
        if (freq[i] > 0)
        {
            printf("%d occurs %d times\n", i, freq[i]);
        }
    }

    free(freq);

    return 0;
}
