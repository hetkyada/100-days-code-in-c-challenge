//Write a program to find the 1’s complement of a binary number and print it.(Loops without Arrays/Strings)
#include <stdio.h>

int main() {
    long long binary, digit, onesComp = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary > 0) {
        digit = binary % 10;  

        if (digit != 0 && digit != 1) {
            printf("Invalid binary number.\n");
            return 1;
        }

        if (digit == 0)
            onesComp += 1 * place;
        else
            onesComp += 0 * place;

        place *= 10;     
        binary /= 10;    
    }

    printf("1's complement is: %lld\n", onesComp);

    return 0;
}
