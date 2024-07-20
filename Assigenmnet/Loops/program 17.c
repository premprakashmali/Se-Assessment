//17.Calculate 5 numbers from user and calculate number of even and odd using
//of while loop
#include <stdio.h>

int main() {
    int count = 0;
    int number;
    int evenCount = 0;
    int oddCount = 0;

    //loop  accept the 5 user input
    while (count < 5) {
        printf("Enter number %d: ", count + 1);
        scanf("%d", &number);

        // check if the number is even or odd
        if (number % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }

        count++;
    }

    // Print the results
    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);

    return 0;
}

