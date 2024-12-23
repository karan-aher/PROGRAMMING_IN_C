#include <stdio.h>

int main() {
    int num1, num2, remainder;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    remainder = num1 % num2;
    printf("Remainder: %d\n", remainder);
    return 0;
}
