//Use malloc() to allocate structure memory dynamically and print details.
#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    float marks;
    char name[30];
};

int main() {
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    s->roll = 101;
    s->marks = 89.5;
    snprintf(s->name, sizeof(s->name), "Het Kyada");

    printf("Student Details:\n");
    printf("Roll Number: %d\n", s->roll);
    printf("Marks: %.2f\n", s->marks);
    printf("Name: %s\n", s->name);

    free(s);

    return 0;
}
