#include <stdio.h>

int main() {
    int number, first_digit, last_digit;
    

    printf("Enter a number: ");
    scanf("%d", &number);


    last_digit = number % 10;

    first_digit = number;
    while (first_digit >= 10) {
        first_digit /= 10;
    }

    int sum = first_digit + last_digit;

    printf("The sum of the first and last digit of %d is: %d\n", number, sum);

    return 0;
}

