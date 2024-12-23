//Implement 'Structure' in C (e.g. - Add and Subtract complex numbers using structure).
#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

int main() {
    struct Complex num1, num2, sum, diff;

    // Input for first complex number
    printf("Enter real and imaginary parts of first complex number: ");
    scanf("%f %f", &num1.real, &num1.imag);

    // Input for second complex number
    printf("Enter real and imaginary parts of second complex number: ");
    scanf("%f %f", &num2.real, &num2.imag);

    // Adding the complex numbers
    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;
    printf("Sum: %.2f + %.2fi\n", sum.real, sum.imag);

    // Subtracting the complex numbers
    diff.real = num1.real - num2.real;
    diff.imag = num1.imag - num2.imag;
    printf("Difference: %.2f + %.2fi\n", diff.real, diff.imag);

    return 0;
}
