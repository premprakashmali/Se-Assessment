#include <stdio.h>
#include <stdbool.h>

// Function to add two numbers
void add() {
    int a, b;
    printf("\nEnter a: ");
    scanf("%d", &a);
    printf("\nEnter b: ");
    scanf("%d", &b);
    printf("\nAddition is: %d\n", a + b);
}

// Function to subtract two numbers
void sub() {
    int a, b;
    printf("\nEnter a: ");
    scanf("%d", &a);
    printf("\nEnter b: ");
    scanf("%d", &b);
    printf("\nSubtraction is: %d\n", a - b);
}

// Function to multiply two numbers
void mul() {
    int a, b;
    printf("\nEnter a: ");
    scanf("%d", &a);
    printf("\nEnter b: ");
    scanf("%d", &b);
    printf("\nMultiplication is: %d\n", a * b);
}

// Function to divide two numbers
void div() {
    int a, b;
    printf("\nEnter a: ");
    scanf("%d", &a);
    printf("\nEnter b: ");
    scanf("%d", &b);
    if (b != 0) {
        printf("\nDivision is: %d\n", a / b);
    } else {
        printf("\nError: Division by zero\n");
    }
}

// Function to get the modulus of two numbers
void mod() {
    int a, b;
    printf("\nEnter a: ");
    scanf("%d", &a);
    printf("\nEnter b: ");
    scanf("%d", &b);
    if (b != 0) {
        printf("\nModulus is: %d\n", a % b);
    } else {
        printf("\nError: Division by zero\n");
    }
}

int main() {
    int choice;

    while (true) {
        printf("\nMenu:\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Modulus (%%)\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add();
                break;
            case 2:
                sub();
                break;
            case 3:
                mul();
                break;
            case 4:
                div();
                break;
            case 5:
                mod();
                break;
            case 6:
                return 0;
            default:
                printf("Invalid choice, please try again.\n");
        }
    }

    return 0;
}

