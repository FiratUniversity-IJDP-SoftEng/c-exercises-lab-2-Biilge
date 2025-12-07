#include <stdio.h>

int main(void)
{
    int numbers[100];
    int index = 0;

    for (int n = 100; n >= 50; n--)
    {
        if (n % 3 == 0)
        {
            numbers[index] = n;
            index++;
        }
    }

    // array elements
    for (int i = 0; i < index; i++)
    {
        printf("%d ", numbers[i]);
    }

    return 0;
}
