//3. WAP to take 10 no. Input from user find out below values
//a. How many Even numbers are there
//b. How many odd numbers are there
//c. Sum of even numbers
//d. Sum of odd numbers



#include <stdio.h>

int main()
{
    int i;
    int numbers[10];
    int evenCount = 0, oddCount = 0;
    int evenSum = 0, oddSum = 0;

    // input 10 number by user
    for(i = 0; i < 10; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for(i = 0; i < 10; i++)
    {
        if(numbers[i] % 2 == 0) // Check if the number is even
        {
            evenCount++;
            evenSum += numbers[i];
        }
        else // Number is odd
        {
            oddCount++;
            oddSum += numbers[i];
        }
    }

    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);
    printf("Sum of even numbers are: %d\n", evenSum);
    printf("Sum of odd numbers are: %d\n", oddSum);

    return 0;
}


