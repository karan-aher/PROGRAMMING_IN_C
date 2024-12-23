#include <stdio.h>

int main() {
    int num1, num2, difference;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    difference = num1 - num2;
    printf("Difference: %d\n", difference);
    return 0;
}
