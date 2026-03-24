#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a positive integer (N): ");
 
    scanf("%d", &n);

   
    for (i = 1; i <= n; ++i) {
        sum += i; 
    }

    printf("Sum of the series 1 to %d = %d\n", n, sum);

    return 0;
}