#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers:\n");
    printf("First number: ");
    scanf("%d", &a);
    printf("Second number: ");
    scanf("%d", &b);

    printf("\nRelational Operator Results:\n");
    printf("%d > %d  : %d\n", a, b, a > b);
    printf("%d < %d  : %d\n", a, b, a < b);
    printf("%d >= %d : %d\n", a, b, a >= b);
    printf("%d <= %d : %d\n", a, b, a <= b);
    printf("%d == %d : %d\n", a, b, a == b);
    printf("%d != %d : %d\n", a, b, a != b);

    return 0;
}
//The program prints 1 for true and 0 for false.