#include <stdio.h>
#define PI 3.14159  // Defining a constant using #define

int main() {
    float radius;     // Variable for the radius
    float area;       // Variable for the area

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the area using the constant PI
    area = PI * radius * radius;

    printf("The area of the circle is: %.2f\n", area);
    return 0;
}
