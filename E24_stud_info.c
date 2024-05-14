// Write a structure to store the roll no., name, age
// (between 11 to 14) and address of students (5
// students). Store the information of the students.

// 1 - Write a function to print the names of all the
// students having age 14.
// 2 - Write a function to print the names of all the
// students having even roll no.
// 3 - Write a function to display the details of the
// student whose roll no is given (i.e. roll no. entered
// by the user).

#include <stdio.h>
#include <string.h>


struct Student {
    int rollNo;
    char name[50];
    int age;
    char address[100];
};

void printStudentsWithAge14(struct Student students[], int count) {
    printf("Students with age 14:\n");
    for (int i = 0; i < count; i++) {
        if (students[i].age == 14) {
            printf("%s\n", students[i].name);
        }
    }
}

void printStudentsWithEvenRollNo(struct Student students[], int count) {
    printf("Students with even roll numbers:\n");
    for (int i = 0; i < count; i++) {
        if (students[i].rollNo % 2 == 0) {
            printf("%s\n", students[i].name);
        }
    }
}

void displayStudentDetails(struct Student students[], int count) {
    int rollNo;
    printf("Enter the roll number to search: ");
    scanf("%d", &rollNo);

    for (int i = 0; i < count; i++) {
        if (students[i].rollNo == rollNo) {
            printf("Roll Number: %d\n", students[i].rollNo);
            printf("Name: %s\n", students[i].name);
            printf("Age: %d\n", students[i].age);
            printf("Address: %s\n", students[i].address);
            return;
        }
    }

    printf("Student with roll number %d not found.\n", rollNo);
}

int main() {
    struct Student students[5];

    printf("Enter details of %d students:\n", 5);
    for (int i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Address: ");
        scanf("%s", students[i].address);
    }

    printStudentsWithAge14(students, 5);
    printf("\n");

    printStudentsWithEvenRollNo(students, 5);
    printf("\n");

    displayStudentDetails(students, 5);

    return 0;
}
