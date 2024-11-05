//classwork question 3, date:5.11.24
#include <stdio.h>

union StudentData {
    char grade;
    int studentID;
    float CGPA;
};

int main() {
    union StudentData student;

    student.grade = 'A';
    printf("Grade: %c\n", student.grade);

    student.studentID = 12345;
    printf("Student ID: %d\n", student.studentID);

    student.CGPA = 3.75;
    printf("CGPA: %.2f\n", student.CGPA);

    return 0;
}
