#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Using if statement to check if the number is positive
    if (num > 0) {
        printf("%d is a positive number.\n", num);
    }

    return 0;
}
