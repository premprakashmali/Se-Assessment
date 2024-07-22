//33. C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)

#include <stdio.h>

int main() {
    int num,power1, power2, power3;
 
    printf("Enter an integer: ");  // Accept an integer from the user
    scanf("%d", &num);

    // Calculate the powers
    power1 = num;          // N^1
    power2 = num * num;    // N^2
    power3 = num * num * num;  // N^3
    
 
    printf("The first three powers of %d are:\n", num);
    printf("%d^1 = %d\n", num, power1);
    printf("%d^2 = %d\n", num, power2);                    // output
    printf("%d^3 = %d\n", num, power3);

    return 0;
}


