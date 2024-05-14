// Write a C program to store student data(roll no, name,
// marks of 5 subjects) in structure. Then calculate the
// grade of a student using a logical operator.

// (76-99 Distinction
// 60-75 First Class
// 50-59 Second Class
// 40-49 Pass Class

#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    int marks[5];
};

char calculateGrade(int totalMarks) {
    if (totalMarks >= 76 && totalMarks <= 99) {
        return 'A'; // Distinction
    } else if (totalMarks >= 60 && totalMarks <= 75) {
        return 'B'; // First Class
    } else if (totalMarks >= 50 && totalMarks <= 59) {
        return 'C'; // Second Class
    } else if (totalMarks >= 40 && totalMarks <= 49) {
        return 'D'; // Pass Class
    } else {
        return 'F'; // Fail
    }
}

int main() {
    struct Student student;
    int totalMarks = 0, i;

    printf("Enter Roll Number: ");
    scanf("%d", &student.rollNo);
    printf("Enter Name: ");
    scanf("%s", student.name);
    printf("Enter Marks for 5 subjects: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &student.marks[i]);
        totalMarks += student.marks[i];
    }

    char grade = calculateGrade(totalMarks);

    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", student.rollNo);
    printf("Name: %s\n", student.name);
    printf("Total Marks: %d\n", totalMarks);
    printf("Grade: %c\n", grade);

    return 0;
}
