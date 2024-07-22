#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    
    // Input string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character from fgets
    str[strcspn(str, "\n")] = 0;

    int start = 0;
    int end = strlen(str) - 1;

    // Recursive lambda to reverse the string
    void (*reverse)(int, int) = NULL;
    reverse= [&](int start, int end) -> void {
        if (start >= end) {
            return;
        }

        // Swap the characters at the start and end positions
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Recur for the remaining substring
        reverse(start + 1, end - 1);
    };

    // Start the recursion
    reverse(start, end);

    // Print the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}

