//2. Write a program in C to separate individual characters from a string

#include <stdio.h>

int main() {
    char str[100]; 
    int i;

    printf("Enter a string: ");
    scanf("%[^\n]", str); 

    printf("Individual characters: ");
    
    for(i = 0; str[i] != '\0'; i++) {
        printf("%c ", str[i]);
    }

    printf("\n");

    return 0;
}
