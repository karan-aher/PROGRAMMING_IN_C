#include <stdio.h>

int main() {
    float percentage;
    int gradeCategory;

    // Input percentage
    printf("Enter the percentage: ");
    scanf("%f", &percentage);

    // Categorize percentage into grade levels
    if (percentage >= 75) {
        gradeCategory = 1; // Distinction
    } else if (percentage >= 60) {
        gradeCategory = 2; // Grade A
    } else if (percentage >= 55) {
        gradeCategory = 3; // Grade B
    } else if (percentage >= 40) {
        gradeCategory = 4; // Pass
    } else {
        gradeCategory = 5; // Fail
    }

    // Use switch statement to display the grade
    switch (gradeCategory) {
        case 1:
            printf("Grade: Distinction\n");
            break;
        case 2:
            printf("Grade: A\n");
            break;
        case 3:
            printf("Grade: B\n");
            break;
        case 4:
            printf("Grade: Pass\n");
            break;
        case 5:
            printf("Grade: Fail\n");
            break;
        default:
            printf("Invalid percentage\n");
    }

    return 0;
}
