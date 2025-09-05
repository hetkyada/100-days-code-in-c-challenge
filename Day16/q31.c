//Write a program to take a number as input and print its equivalent binary representation.(Loops without Arrays/Strings)
#include <stdio.h>

int main() {
    int num, n, reversedBinary = 0, place = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    n = num;

    if (n == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    while (n > 0) {
        int bit = n % 2;
        reversedBinary = reversedBinary * 10 + bit;
        n = n / 2;
    }

    printf("Binary: ");
    while (reversedBinary > 0) {
        int digit = reversedBinary % 10;
        printf("%d", digit);
        reversedBinary = reversedBinary / 10;
    }

    printf("\n");
    return 0;
}
