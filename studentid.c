#include <stdio.h>

// Define a union to store different data types in the same memory space
union StudentData {
    char grade;
    int studentID;
    float CGPA;
};

int main() {
    union StudentData student;

    // Store and display a grade (character)
    student.grade = 'A';
    printf("Grade: %c\n", student.grade);

    // Store and display a student ID (integer)
    student.studentID = 12345;
    printf("Student ID: %d\n", student.studentID);

    // Store and display a CGPA (float)
    student.CGPA = 3.75;
    printf("CGPA: %.2f\n", student.CGPA);

    return 0;
}
