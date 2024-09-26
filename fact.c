// Calculate the Factorial of a Number Using a Function
//26-09-2024

#include <stdio.h>


unsigned long long factorial(int n);

int main() {
    int number;
    unsigned long long result;

    // Taking user input
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);


    if (number < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
    } else {

        result = factorial(number);

        printf("Factorial of %d is: %llu\n", number, result);
    }

    return 0;
}

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;  
    }
    return n * factorial(n - 1);  
}
