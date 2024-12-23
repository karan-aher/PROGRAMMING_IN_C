//Write C program to demonstrate User defined Functions.
#include <stdio.h>

// Function to print a greeting message
void greet() {
    printf("Hello, Welcome to the C program!\n");
}

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

int main() {
    // Call the greet function
    greet();
    
    int num1 = 10, num2 = 20;
    
    // Call the add function and print the result
    int sum = add(num1, num2);
    printf("Sum of %d and %d is: %d\n", num1, num2, sum);
    
    return 0;
}
