#include <stdio.h>

void incrementDistance(int *kilometers, int *centimeters, int *millimeters, int d) {
    // Increment distance by d millimeters
    *millimeters += d;

    // Adjust kilometers and centimeters if millimeters exceed their respective units
    *centimeters += *millimeters / 1000;
    *millimeters %= 1000;

    *kilometers += *centimeters / 100000;
    *centimeters %= 100000;
}

int main() {
    int kilometers, centimeters, millimeters, d;
    
    // Accept distance and d from the user
    printf("Enter the distance in kilometers, centimeters, and millimeters (separated by spaces): ");
    scanf("%d %d %d", &kilometers, &centimeters, &millimeters);
    
    printf("Enter the number of millimeters to increment the distance by: ");
    scanf("%d", &d);
    
    // Increment the distance using the function
    incrementDistance(&kilometers, &centimeters, &millimeters, d);
    
    // Display the new distance
    printf("New distance: %d kilometers, %d centimeters, %d millimeters\n", kilometers, centimeters, millimeters);
    
    return 0;
}
