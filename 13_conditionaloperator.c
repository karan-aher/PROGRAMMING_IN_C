#include <stdio.h>

int main() {
    int a, b, max;

    printf("Enter two numbers:\n");
    printf("First number: ");
    scanf("%d", &a);
    printf("Second number: ");
    scanf("%d", &b);

    // Using the conditional operator to find the larger number
    max = (a > b) ? a : b;

    printf("The larger number is: %d\n", max);

    return 0;
}
