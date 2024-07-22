#include <stdio.h>

int main() {
    char str[1000];
    char substring[1000];
    int start, length, i;

    printf("Enter a string: ");
    scanf("%s", str); // Read the string
    
    printf("Enter the starting index of the substring: ");
    scanf("%d", &start); // Read the starting index
    
    printf("Enter the length of the substring: ");
    scanf("%d", &length); // Read the length of the substring
    
 
    for (i = 0; i < length && str[start + i] != '\0'; i++) {
        substring[i] = str[start + i];
    }
    substring[i] = '\0'; 
    printf("Substring: %s\n", substring);

    return 0;
}


