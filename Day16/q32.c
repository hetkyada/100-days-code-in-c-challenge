//Write a program to check if a number is a palindrome.(Loops without Arrays/Strings)
#include <stdio.h>

int main() {
    int num, original, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    if (num < 0) {
        printf("Negative numbers are not considered palindromes.\n");
        return 0;
    }

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}
