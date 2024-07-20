#include <stdio.h>

int main() {
    char character;

    printf("Enter a character: ");
    scanf(" %c", &character); 

    if ((character >= 'A' && character <= 'Z')) {
        printf("%c is an uppercase letter.\n", character);
    } else if ((character >= 'a' && character <= 'z')) {
        printf("%c is a lowercase letter.\n", character);
    } else if (character >= '0' && character <= '9') {
        printf("%c is a digit.\n", character);
    } else {
        printf("%c is a special character.\n", character);
    }

    return 0;
}


