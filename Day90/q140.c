//Define a struct with enum Gender and print person's gender.

#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p = {"Alex", MALE};

    if (p.gender == MALE)
        printf("%s is Male\n", p.name);
    else if (p.gender == FEMALE)
        printf("%s is Female\n", p.name);
    else
        printf("%s is Other\n", p.name);

    return 0;
}
