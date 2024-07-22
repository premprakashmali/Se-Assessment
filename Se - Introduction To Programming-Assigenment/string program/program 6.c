#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int alphabets = 0, digits = 0, specialChars = 0, i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str); 
    
    while (str[i] != '\0') {
       
        if (isalpha(str[i])) {
            alphabets++;
        }
   
        else if (isdigit(str[i])) {
            digits++;
        }
 
        else {
            specialChars++;
        }
        i++; 
    }

    printf("Total number of alphabets: %d\n", alphabets);
    printf("Total number of digits: %d\n", digits);
    printf("Total number of special characters: %d\n", specialChars);

    return 0;
}


