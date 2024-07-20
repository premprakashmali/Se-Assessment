#include <stdio.h>
#include <ctype.h>

int main() {
    char sentence[1000];
    int i = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]", sentence);

    while (sentence[i] != '\0') {
        if (islower(sentence[i])) {
            sentence[i] = toupper(sentence[i]);
        }
        else if (isupper(sentence[i])) {
            sentence[i] = tolower(sentence[i]);
        }
        i++;
    }

    printf("Modified sentence: %s\n", sentence);

    return 0;
}


