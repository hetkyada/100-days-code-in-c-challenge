//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.(Loops without Arrays/Strings)
#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number.\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        float term = (float)(2 * i - 1) / (2 * i);
        sum += term;
    }

    printf("Sum of the series up to %d terms = %.6f\n", n, sum);

    return 0;
}
