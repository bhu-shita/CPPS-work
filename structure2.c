#include<stdio.h>
#include<string.h>

#define MAX_STUDENTS 100  // Define maximum number of students

// Define the structure for a student
struct Student {
    char name[50];
    int age;
    float grade;
};
// Function to display all students' details
void displayStudents(struct Student students[], int count) {
    printf("\nStudent Details:\n");
    for (int i = 0; i < count; i++) {
        printf("Student %d:\n", i + 1);
        printf("  Name: %s\n", students[i].name);
        printf("  Age: %d\n", students[i].age);
        printf("  Grade: %.2f\n\n", students[i].grade);
    }
}

int main() {
    struct Student students[MAX_STUDENTS];  // Array of Student structures
    int count;

 // Get the number of students
    printf("Enter the number of students (up to %d): ", MAX_STUDENTS);
    scanf("%d", &count);

    // Ensure count does not exceed the maximum
    if (count > MAX_STUDENTS) {
        printf("Error: Number of students exceeds the maximum limit.\n");
        return 1;
    }

    // Loop to gather input for each student
    for (int i = 0; i < count; i++) {
    	 printf("\nEnter details for student %d:\n", i + 1);
        
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);  // Read string with spaces

        printf("Age: ");
        scanf("%d", &students[i].age);

        printf("Grade: ");
        scanf("%f", &students[i].grade);
    }

    // Display all student details
    displayStudents(students, count);

    return 0;
}
