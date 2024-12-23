//Implement C Programs to perform arithmetic operations using Pointer.
#include <stdio.h>

int main() {
    int num1, num2;
    int *ptr1, *ptr2;
    int sum, diff, prod, quotient;
    
    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    // Assign the addresses of num1 and num2 to pointers
    ptr1 = &num1;
    ptr2 = &num2;
    
    // Perform arithmetic operations using pointers
    sum = *ptr1 + *ptr2;          // Addition
    diff = *ptr1 - *ptr2;         // Subtraction
    prod = *ptr1 * *ptr2;         // Multiplication
    if (*ptr2 != 0) {
        quotient = *ptr1 / *ptr2; // Division
        printf("Quotient: %d\n", quotient);
    } else {
        printf("Cannot divide by zero!\n");
    }
    
    // Display the results
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);

    return 0;
}
