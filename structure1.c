#include<stdio.h>
#include<string.h>
struct Student {
    char name[50];
    int age;
    float grade;
};
void displayStudent(struct Student student) {
    printf("Student Name: %s\n", student.name);
    printf("Student Age: %d\n", student.age);
    printf("Student Grade: %.2f\n", student.grade);
}

int main() {
   
    struct Student student1;


    strcpy(student1.name, "Alice Johnson");
    student1.age = 20;
    student1.grade = 3.85;

    
    displayStudent(student1);

return 0;
}
