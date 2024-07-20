#include <stdio.h>


 main() {
	
    float radius, area, circumference,PI=3.14159265359;

    printf("Enter the radius of the circle: ");  // Input radius of the circle
    scanf("%f", &radius);


    area = PI * radius * radius;     // Area Calculate 

    
    circumference = 2 * PI * radius; // circumference Calculate 


    printf("Area of the circle: %.2f\n", area);  //output
    printf("Circumference of the circle: %.2f\n", circumference);//output

}

