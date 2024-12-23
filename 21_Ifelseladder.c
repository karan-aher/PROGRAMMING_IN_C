#include <stdio.h>

int main() {
    float percentage;

    // Input percentage
    printf("Enter the percentage: ");
    scanf("%f", &percentage);

    // if-else ladder to determine grade
    if (percentage >= 75) {
        printf("Grade: Distinction\n");
    } else if (percentage >= 60) {
        printf("Grade: A\n");
    } else if (percentage >= 55) {
        printf("Grade: B\n");
    } else if (percentage >= 40) {
        printf("Grade: Pass\n");
    } else {
        printf("Grade: Fail\n");
    }

    return 0;
}
