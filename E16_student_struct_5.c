// Write a C Program to read and print name and
// other details like mobile number, marks of 5
// subjects of n number of students using
// Structure. Print data of top 5 students ( top 5
// should be calculated based on the entered
// marks)

#include <stdio.h>
#include <string.h>


struct Student {
    char name[50];
    char mobileNumber[15];
    int marks[5];
    int totalMarks;
};

int main() {
    struct Student students[100];
    int n, i, j;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Input student details
    for (i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Enter name: ");
        scanf("%s", students[i].name);
        printf("Enter mobile number: ");
        scanf("%s", students[i].mobileNumber);
        printf("Enter marks for 5 subjects: ");
        students[i].totalMarks = 0;
        for (j = 0; j < 5; j++) {
            scanf("%d", &students[i].marks[j]);
            students[i].totalMarks += students[i].marks[j];
        }
    }

    // Sort students based on total marks
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (students[j].totalMarks < students[j + 1].totalMarks) {
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    // Print data of top 5 students
    printf("\nTop 5 Students:\n");
    for (i = 0; i < 5 && i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Mobile Number: %s\n", students[i].mobileNumber);
        printf("Total Marks: %d\n", students[i].totalMarks);
    }

    return 0;
}
