//15.Calculate sum of 10 numbers using of while loop

#include <stdio.h>

int main() {
    int count = 0;         //define count
    int sum = 0;          //define sum  
    int number;           //define a number  

    printf("Enter 10 numbers to calculate sum:\n");

    while (count < 10) {
        printf("Enter number %d: ", count + 1);
        scanf("%d", &number);
        sum += number;   
        count++;         
    }

    printf("The sum of the 10 numbers is: %d\n", sum);//output

    return 0;
}

