//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>
int main() {
    FILE *file;
    char filename[100] = "students.txt";
    char name[50];
    int roll, n;
    float marks;
    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error creating file!\n");
        return 1;
    }
    printf("Enter the number of students: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", name);
        printf("Roll Number: ");
        scanf("%d", &roll);
        printf("Marks: ");
        scanf("%f", &marks);
        fprintf(file, "%s %d %.2f\n", name, roll, marks);
    }
    fclose(file);
    printf("\nStudent records saved successfully to %s\n\n", filename);
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    printf("--- Student Records ---\n");
    while (fscanf(file, "%s %d %f", name, &roll, &marks) == 3) {
        printf("Name: %s\t Roll: %d\t Marks: %.2f\n", name, roll, marks);
    }
    fclose(file);
    return 0;
}
