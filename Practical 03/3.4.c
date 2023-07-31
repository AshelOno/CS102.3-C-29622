#include <stdio.h>

int main() {
    const float PI = 3.14159;
    float radius, diameter, circumference, area;

    // Input radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate diameter
    diameter = 2 * radius;

    // Calculate circumference
    circumference = 2 * PI * radius;

    // Calculate area
    area = PI * radius * radius;

    // Print the results
    printf("Diameter of the circle: %.2f\n", diameter);
    printf("Circumference of the circle: %.2f\n", circumference);
    printf("Area of the circle: %.2f\n", area);

    return 0;
}

