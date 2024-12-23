//This program uses the AND (&&) operator to check if a number is between two values.

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 10 && num <= 50) {
        printf("The number %d is within the range 10 to 50.\n", num);
    } else {
        printf("The number %d is outside the range 10 to 50.\n", num);
    }

    return 0;
}
