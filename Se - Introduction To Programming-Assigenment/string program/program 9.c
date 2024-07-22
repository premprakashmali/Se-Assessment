#include <stdio.h>

#define MAX_LENGTH 1000 
int main() {
    char str[MAX_LENGTH + 1]; 
    int length = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str); 
    
    
    while (str[length] != '\0') {
        length++;
    }

    printf("Maximum number of characters in the string: %d\n", length);

    return 0;
}


