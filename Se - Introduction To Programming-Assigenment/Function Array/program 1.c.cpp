#include <stdio.h>

// Function to find the maximum value in an array of 5 integers
void findMax() {
    int i, a[5];
    int max;

    // Input elements from the user
    for (i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    // Assume the first element is the maximum
    max = a[0];

    // Find the maximum element
    for (i = 1; i < 5; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    // Print the maximum element
    printf("The maximum element is %d\n", max);
}

// Main function
int main() {
    findMax();
    return 0;
}

