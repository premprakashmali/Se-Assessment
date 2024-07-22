//8. Write a program in C to count the total number of vowels or consonants in a
//string.
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000]; 
    int vowels = 0, consonants = 0, i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str); 
    
    
    while (str[i] != '\0') {
        char ch = tolower(str[i]); 
        
        if (ch >= 'a' && ch <= 'z') {
            
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            }
            
            else {
                consonants++;
            }
        }
        i++; 
    }

    printf("Total number of vowels: %d\n", vowels);
    printf("Total number of consonants: %d\n", consonants);

    return 0;
}
