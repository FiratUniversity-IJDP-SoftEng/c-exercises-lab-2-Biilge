#include <stdio.h>

int main(void)
{
    int n;
    int fact = 1;   // result is covered in fact
    int i;

    printf("Enter a number: ");
    scanf("%d", &n);

    // negative integer can not be factorial
    if (n < 0)
    {
        printf("Negative numbers do not have factorial.\n");
        return 0;
    }

    // factoriation 
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("%d! = %d\n", n, fact);

    return 0;
}
