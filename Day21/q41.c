//Write a program to swap the first and last digit of a number.(Loops without Arrays/Strings)
#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, firstDigit, lastDigit, numDigits = 0;
    int divisor, middlePart;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;
    lastDigit = num % 10;

    while (num != 0) {
        if (num < 10)
            firstDigit = num;
        num /= 10;
        numDigits++;
    }

    if (numDigits == 1) {
        printf("Swapped number: %d\n", originalNum);
        return 0;
    }
    
    divisor = (int)pow(10, numDigits - 1);

    middlePart = (originalNum % divisor) / 10;

    int swappedNum = lastDigit * divisor + middlePart * 10 + firstDigit;

    printf("Swapped number: %d\n", swappedNum);

    return 0;
}
