#include <stdio.h>

int main(void)
{
    int n = 5;      // the biggest line number in the pyramid
    int i, j;

    // top part
    for (i = 1; i <= n; i++)
    {
        // spaces
        for (j = 1; j <= n - i; j++)
            printf(" ");

        // increasing
        for (j = 1; j <= i; j++)
            printf("%d", j);

        // decreasing
        for (j = i - 1; j >= 1; j--)
            printf("%d", j);

        printf("\n");
    }

    // bottom part
    for (i = n - 1; i >= 1; i--)
    {
        // spaces
        for (j = 1; j <= n - i; j++)
            printf(" ");

        // increasing
        for (j = 1; j <= i; j++)
            printf("%d", j);

        // decreasing
        for (j = i - 1; j >= 1; j--)
            printf("%d", j);

        printf("\n");
    }

    return 0;
}



