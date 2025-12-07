#include <stdio.h>

int main() {
    int arr[10];
    int sum = 0;

    for (int i = 0; i < 10; i++) {
        printf("%d. Enter number: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    float average = sum / 10.0;  

     // Output the results. 
    printf("\nInputs:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\n", arr[i]);
    }

    printf("\nAddition: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}

