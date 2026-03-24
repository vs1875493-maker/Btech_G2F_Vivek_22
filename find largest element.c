#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Check if n is a positive integer
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Indicate error
    }

    for (i = 1; i <= n; i++) {
        sum = sum + (1.0 / i); // Type casting 1.0 ensures float division
    }

    printf("Sum of series = %f\n", sum);

    return 0;