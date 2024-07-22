#include <stdio.h>

int main() {
    int i, j, userinput, fact;
    int numbers[5]; 

    
    for(i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    for(i = 0; i < 5; i++) {
        userinput = numbers[i];
        fact = 1;
        for(j = 1; j <= userinput; j++) {
            fact *= j;
        }
        printf("Factorial of %d is %d\n", userinput, fact);
    }

    return 0;
}

