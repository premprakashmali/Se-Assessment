//17. Write a C program to check whether a triangle can be formed with the given
//values for the angles.


#include <stdio.h>

int main() {
	
    int angle1, angle2, angle3, sum;

    
    printf("Enter first angle: ");
    scanf("%d", &angle1);
    printf("Enter second angle: ");     //Enter the Three angles
    scanf("%d", &angle2);
    printf("Enter third angle: ");
    scanf("%d", &angle3);

  
    sum = angle1 + angle2 + angle3;// sum of angles

    // Check if the sum is 180 degrees
    if (sum == 180) {
        printf("The given angles is a triangle.\n");
    } else {
        printf("The given angles can not a triangle.\n");
    }

    return 0;
}

