//Print all enum names and integer values using a loop.

#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum Role r;

    const char* names[] = {
        "ADMIN",
        "USER",
        "GUEST"
    };

    for (r = ADMIN; r <= GUEST; r++) {
        printf("%d -> %s\n", r, names[r]);
    }

    return 0;
}
