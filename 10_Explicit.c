#include <stdio.h>

int main() {
    int x = 7, y = 2;
    float result;

    // Explicit conversion (x is converted to float manually)
    result = (float)x / y;

    printf("Result: %.2f\n", result);
    return 0;
}
