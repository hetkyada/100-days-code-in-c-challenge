//Write a program to print the following pattern:(Nested Loops without Arrays/Strings)

*

*
*
*

*
*
*
*
*

*
*
*

*

#include <stdio.h>

int main() {
    int i, j;
    for (i = 1; i <= 1; i++) {
        printf("*\n");
    }
    printf("\n"); 
    for (i = 1; i <= 3; i++) {
        printf("*\n");
    }
    printf("\n"); 
    for (i = 1; i <= 5; i++) {
        printf("*\n");
    }
    printf("\n"); 
    for (i = 1; i <= 3; i++) {
        printf("*\n");
    }
    printf("\n"); 
    for (i = 1; i <= 1; i++) {
        printf("*\n");
    }
    return 0;
}
