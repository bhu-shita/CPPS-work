//to calculate a function that will calculate and display the real roots of the quadratic equation ax^2+bx+c=0 using the quadratic formula
//roll no 27

#include <stdio.h>
#include <math.h>
void findRoots(float a, float b, float c) {
    float discriminant, root1, root2, realPart, imaginaryPart;
    discriminant = b*b - 4*a*c;    
    if (discriminant > 0) {
        
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and different:\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    } else if (discriminant == 0) {
        root1 = -b / (2*a);
        printf("Roots are real and equal:\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    } else {
        realPart = -b / (2*a);
        imaginaryPart = sqrt(-discriminant) / (2*a);
        printf("Roots are complex and different:\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }
}
int main() {
    float a, b, c;
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);
    findRoots(a, b, c);
    return 0;
}
