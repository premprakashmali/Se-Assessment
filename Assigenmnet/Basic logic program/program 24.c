//23. WAP to calculate swap 2 numbers with using of multiplication and division.

#include <stdio.h>

int main() {
    float num1, num2;

    printf("Enter the first number: ");
    scanf("%f", &num1);
                                             // Accept two numbers from the user
    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("Before swapping:\n");
    printf("num1 = %.2f\n", num1);                   // Display original values
    printf("num2 = %.2f\n", num2);
 
    num1 = num1 * num2; 
    num2 = num1 / num2;     // Swap using multiplication and division
    num1 = num1 / num2; 
     
    printf("After swapping:\n");
    printf("num1 = %.2f\n", num1);    // Display swapped values
    printf("num2 = %.2f\n", num2);

    return 0;
}


