#include <stdio.h>

int main() {
  int n;
  int sum = 0;
  int count = 0;    
  float average;

  while(1) {
    printf("Enter number (-1 finishes): ");
    scanf("%d", &n);

    if (n == -1) {
      break;
    }

    sum += n;
    count++;    
  }

  if (count > 0) {
    average = (float)sum / count;  
    printf("\nThe numbers entered: %d\n", count);
    printf("Addition: %d\n", sum);
    printf("Average: %.2f\n", average);
  } 
  
  else {
    printf("\nNo numbers were entered.\n");
  } 
}

