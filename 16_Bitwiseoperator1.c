//This program demonstrates the use of AND (&), OR (|), and XOR (^) operators.
#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Bitwise AND: %d & %d = %d\n", num1, num2, num1 & num2);
    printf("Bitwise OR: %d | %d = %d\n", num1, num2, num1 | num2);
    printf("Bitwise XOR: %d ^ %d = %d\n", num1, num2, num1 ^ num2);

    return 0;
}
