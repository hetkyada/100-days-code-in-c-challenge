//Write a program to calculate a library fine based on late days.
#include <stdio.h>

int main() {
    int lateDays;
    int fine = 0;

    printf("Enter the number of days the book is late: ");
    scanf("%d", &lateDays);

    if (lateDays < 0) {
        printf("Invalid input. Late days cannot be negative.\n");
        return 1;  
    }

    if (lateDays == 0) {
        fine = 0;
    } else if (lateDays <= 5) {
        fine = lateDays * 1;
    } else if (lateDays <= 10) {
        fine = (5 * 1) + (lateDays - 5) * 2;
    } else {
        fine = (5 * 1) + (5 * 2) + (lateDays - 10) * 5;
    }

    printf("Total fine is: $%d\n", fine);

    return 0;
}
