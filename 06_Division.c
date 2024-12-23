#include <stdio.h>

int main() {
    int num1, num2, quotient;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    quotient = num1 / num2;
    printf("Quotient: %d\n", quotient);
    return 0;
}
