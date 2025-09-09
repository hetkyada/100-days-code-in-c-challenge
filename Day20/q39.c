//Write a program to find the product of odd digits of a number.(Loops without Arrays/Strings)
#include <stdio.h>

int main() {
    int number, digit;
    int product = 1;
    int hasOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        number = -number;
    }

    while (number > 0) {
        digit = number % 10;  

        if (digit % 2 == 1) { 
            product *= digit;
            hasOdd = 1;       
        }

        number = number / 10; 
    }

    if (hasOdd) {
        printf("Product of odd digits is: %d\n", product);
    } else {
        printf("No odd digits found.\n");
    }

    return 0;
}
