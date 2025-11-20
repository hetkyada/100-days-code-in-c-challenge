//Show that enums store integers by printing assigned values.

#include <stdio.h>

enum Role {
    ADMIN = 100,
    USER = 200,
    GUEST = 300
}

int main() {
    printf("ADMIN = %d\n", ADMIN);
    printf("USER  = %d\n", USER);
    printf("GUEST = %d\n", GUEST);

    return 0;
}
