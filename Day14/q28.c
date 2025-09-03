//Write a program to print the product of even numbers from 1 to n.(Loops without Arrays/Strings)
#include <stdio.h>

int main() {
    int n, i;
    unsigned long long product = 1;  
    int hasEven = 0;  
    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            product *= i;
            hasEven = 1;
        }
    }

    if (hasEven)
        printf("Product of even numbers from 1 to %d is: %llu\n", n, product);
    else
        printf("There are no even numbers between 1 and %d.\n", n);

    return 0;
}
