//  11. Find circumference of square formula : C = 4 * a

#include <stdio.h>

 main() {
    float side, circumference;

    
    printf("Enter the side length of the square: ");// Input the side length of the square
    scanf("%f", &side);

    circumference = 4 * side;    // Calculate the circumference

    printf("Circumference of the square: %.2f\n", circumference);//output

    return 0;
}

