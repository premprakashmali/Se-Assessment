//8. Find circumference of Rectangle formula : C = 4 * a

#include <stdio.h>

 main() {
    float length, width, circumference;

  
    printf("Enter the length of the rectangle: ");  // Input the length 
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");// Input the width 
    scanf("%f", &width);

    
    circumference = 2 * (length + width);// Calculate the circumference 

  
    printf("Circumference of the rectangle: %.2f\n", circumference);//output


}

