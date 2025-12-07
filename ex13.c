#include <stdio.h>

int factorial(int n)
{
    if (n == 0)      // 0! = 1
        return 1;

    return n * factorial(n - 1);  
}

int main(void)
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Negative numbers do not have factorial.\n");
        return 0;
    }

    printf("%d! = %d\n", n, factorial(n));

    return 0;
}

