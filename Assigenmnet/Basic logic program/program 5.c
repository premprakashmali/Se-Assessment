#include <stdio.h>

int main() {
    float side, surfaceArea;

    // Input the side length of the cube
    printf("Enter the side length of the cube: ");
    scanf("%f", &side);

    // Calculate the surface area
    surfaceArea = 6 * side * side;

    // Print the result
    printf("Surface area of the cube: %.2f\n", surfaceArea);

    return 0;
}

