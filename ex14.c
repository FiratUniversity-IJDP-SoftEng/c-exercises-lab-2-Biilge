#include <stdio.h>

int fib(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

int main(void)
{ 
    int n, i;
    do
    {
        printf("Enter n (0 - 20): ");
        scanf("%d", &n);

        if (n < 0 || n > 20)
            printf("Invalid input! Please try again.\n");

    } while (n < 0 || n > 20);

    printf("Fibonacci numbers up to position %d:\n", n);
    for (i = 0; i <= n; i++)
    {
        printf("%d ", fib(i));
    }
    printf("\n");

    printf("Fibonacci(%d) = %d\n", n, fib(n));

    return 0;
}


