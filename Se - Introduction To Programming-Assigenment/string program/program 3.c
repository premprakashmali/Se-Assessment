#include <stdio.h>

int main() {
    char str[100]; 
    int i;

    printf("Enter a string: ");
    scanf("%[^\n]", str); 

    printf("Individual characters in reverse order: ");
    

    for (i = 0; str[i] != '\0'; i++); 
    
    
    i--;
    
   
    while (i >= 0) {
        printf("%c ", str[i]);
        i--;
    }

    printf("\n");

    return 0;
}


