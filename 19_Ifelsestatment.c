#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Using if-else to check if the number is positive or negative
    if (num >= 0) {
        printf("%d is a positive number.\n", num);
    } else {
        printf("%d is a negative number.\n", num);
    }

    return 0;
}
