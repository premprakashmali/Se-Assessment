#include <stdio.h>

int main() {
    char str1[1000], str2[1000], combined[2000];
    int i, j;

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    // Copy the first string to the combined string
    for (i = 0; str1[i] != '\0'; i++) {
        combined[i] = str1[i];
    }

    // Append the second string to the combined string
    for (j = 0; str2[j] != '\0'; j++) {
        combined[i + j] = str2[j];
    }

    combined[i + j] = '\0'; // 

    printf("Combined string: %s\n", combined);

    return 0;
}


