//This program demonstrates the use of left shift (<<) and right shift (>>) operators.
#include <stdio.h>

int main() {
    int num, shift;

    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Enter the number of bits to shift: ");
    scanf("%d", &shift);

    printf("Left shift (%d << %d): %d\n", num, shift, num << shift);
    printf("Right shift (%d >> %d): %d\n", num, shift, num >> shift);

    return 0;
}
