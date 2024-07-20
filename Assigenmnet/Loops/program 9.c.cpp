#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    while (num > 0) {
        int digit = num % 10;  
        sum = sum+ digit;  
        num = num / 10; 
    }

    printf("sum number is: %d\n", sum);

    return 0;
}


