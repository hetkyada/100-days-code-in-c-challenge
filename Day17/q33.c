//Write a program to check if a number is an Armstrong number.(Loops without Arrays/Strings)
#include <stdio.h>
#include <math.h>

int main() {
    int number, originalNumber, temp, digits = 0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;
    temp = number;

    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    temp = number;

    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (sum == originalNumber) {
        printf("%d is an Armstrong number.\n", originalNumber);
    } else {
        printf("%d is not an Armstrong number.\n", originalNumber);
    }

    return 0;
}
