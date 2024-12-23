//Write C program to perform following operations without using standard string functions.
//i) Calculate Length of given string ii) Print reverse of given string.
#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // i) Calculate length of the string
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }
    printf("Length of the string: %d\n", length);

    // ii) Print reverse of the string
    printf("Reverse of the string: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
