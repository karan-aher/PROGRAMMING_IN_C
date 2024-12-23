#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;
    float result;

    // Implicit conversion (a is converted to float automatically)
    result = a + b;

    printf("Result: %.2f\n", result);
    return 0;
}
