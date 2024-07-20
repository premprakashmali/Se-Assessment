#include <stdio.h>

int main() {
    int num, rev = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    while (num > 0) {
        int digit = num % 10;  // Get the last digit
        rev = rev * 10 + digit;  // Add the digit to the reversed number
        num = num / 10;  // Remove the last digit from the original number
    }

    printf("Reversed number is: %d\n", rev);

    return 0;
}

