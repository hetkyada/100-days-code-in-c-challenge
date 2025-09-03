//Write a program to print the sum of the first n odd numbers.(Loops without Arrays/Strings)
#include <stdio.h>

int main() {
    int n, count = 0, num = 1, sum = 0;

    printf("Enter the number of odd numbers to sum: ");
    scanf("%d", &n);

    while (count < n) {
        sum += num;  
        num += 2;    
        count++;      
    }

    printf("Sum of first %d odd numbers is: %d\n", n, sum);

    return 0;
}
