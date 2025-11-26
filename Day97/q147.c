//Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date joinDate;
};

int main() {
    struct Employee e, e_read;

    FILE *fp;

    printf("Enter employee name: ");
    scanf("%49s", e.name);

    printf("Enter employee ID: ");
    scanf("%d", &e.id);

    printf("Enter salary: ");
    scanf("%f", &e.salary);

    printf("Enter joining date (day month year): ");
    scanf("%d %d %d", &e.joinDate.day, &e.joinDate.month, &e.joinDate.year);

    fp = fopen("employee.bin", "wb");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fwrite(&e, sizeof(struct Employee), 1, fp);
    fclose(fp);

    fp = fopen("employee.bin", "rb");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fread(&e_read, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\n--- Employee Details Read From File ---\n");
    printf("Name: %s\n", e_read.name);
    printf("ID: %d\n", e_read.id);
    printf("Salary: %.2f\n", e_read.salary);
    printf("Joining Date: %02d-%02d-%04d\n",
           e_read.joinDate.day, e_read.joinDate.month, e_read.joinDate.year);

    return 0;
}
