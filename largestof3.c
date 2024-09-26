//Find the Largest of Three Numbers Using a Function
//26-09-2024

#include <stdio.h>


float findLargest(float a, float b, float c);

int main() {
    float num1, num2, num3, largest;

    // Taking user input for three numbers
    printf("Enter three numbers:\n");
    printf("Number 1: ");
    scanf("%f", &num1);
    printf("Number 2: ");
    scanf("%f", &num2);
    printf("Number 3: ");
    scanf("%f", &num3);

    // Finding the largest number
    largest = findLargest(num1, num2, num3);

    // Displaying the result
    printf("The largest number is: %.2f\n", largest);

    return 0;
}

float findLargest(float a, float b, float c) {
    float largest = a;  

    if (b > largest) {
        largest = b;  
    }
    if (c > largest) {
        largest = c;  
    }

    return largest;  
}
