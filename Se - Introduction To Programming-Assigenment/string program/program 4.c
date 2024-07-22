#include <stdio.h>
#include <ctype.h>

// Function to count the number of words in a string
int countWords(char* str) {
    int count = 0;
    int inWord = 0;
    int i = 0;

    // Iterate through the string
    while (str[i] != '\0') {
        if (isspace(str[i])) {
            // If the current character is a space and we were inside a word, count it as a word end
            if (inWord) {
                inWord = 0;
            }
        } else {
            // If the current character is not a space and we were not inside a word, count it as a word start
            if (!inWord) {
                inWord += 1;
                count++;
            }
        }
        i++;
    }

    return count;
}

int main() {
    char str[100];

    // Taking input from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count the number of words in the string
    int wordCount = countWords(str);

    // Print the total number of words
    printf("The total number of words in the string is: %d\n", wordCount);

    return 0;
}

