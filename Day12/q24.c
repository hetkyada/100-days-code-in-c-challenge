//Write a program to calculate an electricity bill based on units consumed.
#include <stdio.h>

int main() {
    int units;
    float bill = 0.0;

    printf("Enter total units consumed: ");
    scanf("%d", &units);

    if (units < 0) {
        printf("Invalid input. Units cannot be negative.\n");
        return 1; 
    }

    if (units <= 100) {
        bill = units * 1.50;
    } else if (units <= 200) {
        bill = (100 * 1.50) + (units - 100) * 2.00;
    } else if (units <= 300) {
        bill = (100 * 1.50) + (100 * 2.00) + (units - 200) * 3.00;
    } else {
        bill = (100 * 1.50) + (100 * 2.00) + (100 * 3.00) + (units - 300) * 5.00;
    }

    printf("Total electricity bill: $%.2f\n", bill);

    return 0;
}
