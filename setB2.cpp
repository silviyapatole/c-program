#include <stdio.h>

void calculateAreaAndPerimeter(float radius, float *area, float *perimeter) {
    *area = 3.14159 * radius * radius; // Area of circle formula: p * r^2
    *perimeter = 2 * 3.14159 * radius; // Perimeter of circle formula: 2 * p * r
}

int main() {
    float radius, area, perimeter;
    
    // Accept radius from the user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    // Calculate area and perimeter using the function
    calculateAreaAndPerimeter(radius, &area, &perimeter);
    
    // Display area and perimeter
    printf("Area of the circle: %.2f\n", area);
    printf("Perimeter of the circle: %.2f\n", perimeter);
    
    return 0;
}
