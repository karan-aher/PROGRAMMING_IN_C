#include <stdio.h>
#include <math.h>   // For mathematical functions
#include <string.h>  // For string functions

int main() {
    // Mathematical functions
    double num = 9.0;
    
    printf("Square root of %.2f = %.2f\n", num, sqrt(num));  // Square root
    printf("Power of %.2f^2 = %.2f\n", num, pow(num, 2));   // Power
    
    // String functions
    char str[50] = "hello";
    
    printf("Length of string: %zu\n", strlen(str));  // String length
    printf("String to uppercase: %s\n", strupr(str)); // Uppercase string (Windows-specific)

    return 0;
}
