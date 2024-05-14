// Write a C program to create a student database
// using file.
// Perform following operations:
// 1. Open file
// 2. Write five records in file.
// 3. Read all five records from file.
// 4. Search for a particular student from file and
// print his/her details.

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    FILE *file;
    struct Student students[5];
    struct Student searchStudent;
    int found = 0;

    // Open file for writing
    file = fopen("student_database.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    // Write five student records to the file
    for (int i = 0; i < 5; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);
        printf("Marks: ");
        scanf("%f", &students[i].marks);

        fprintf(file, "%s %d %.2f\n", students[i].name, students[i].rollNo, students[i].marks);
    }

    fclose(file);

    // Open file for reading
    file = fopen("student_database.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    // Read all five student records from the file
    printf("\nStudent Records:\n");
    while (fscanf(file, "%s %d %f", searchStudent.name, &searchStudent.rollNo, &searchStudent.marks) != EOF) {
        printf("Name: %s, Roll Number: %d, Marks: %.2f\n", searchStudent.name, searchStudent.rollNo, searchStudent.marks);
    }

    // Search for a particular student
    int searchRollNo;
    printf("\nEnter Roll Number to search: ");
    scanf("%d", &searchRollNo);

    rewind(file); // Reset file pointer to the beginning

    while (fscanf(file, "%s %d %f", searchStudent.name, &searchStudent.rollNo, &searchStudent.marks) != EOF) {
        if (searchStudent.rollNo == searchRollNo) {
            printf("Student Found:\n");
            printf("Name: %s, Roll Number: %d, Marks: %.2f\n", searchStudent.name, searchStudent.rollNo, searchStudent.marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student with Roll Number %d not found.\n", searchRollNo);
    }

    fclose(file);

    return 0;
}
