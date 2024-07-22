#include <stdio.h>

int main() {
    int num, rev = 0, large = 0, digit;

    printf("Enter number: ");
    scanf("%d", &num);

    int original_num = num; 
    while (num > 0) {
        digit = num % 10;  

        if (digit > large) {
            large = digit;  
        }

        num = num / 10;  
    }

    printf("Largest digit is: %d\n", large);

    return 0;
}

