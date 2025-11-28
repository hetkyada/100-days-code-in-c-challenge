//Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    float salary;
    char name[30];
};

int main() {
    struct Employee *e = (struct Employee *)malloc(sizeof(struct Employee));

    if (e == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    e->id = 2001;
    e->salary = 55000.75;
    snprintf(e->name, sizeof(e->name), "Het");

    printf("Employee Details:\n");
    printf("ID: %d\n", e->id);
    printf("Salary: %.2f\n", e->salary);
    printf("Name: %s\n", e->name);

    free(e);

    return 0;
}
