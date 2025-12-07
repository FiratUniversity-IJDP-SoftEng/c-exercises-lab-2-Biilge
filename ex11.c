#include <stdio.h>

int main(void)
{
    int row, col;
    int size = 5;   // 5x5 grid 

    for (row = 0; row < size; row++)
    {
        for (col = 0; col < size; col++)
        {
          
            if (row == col || row + col == size - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
