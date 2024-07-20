#include <stdio.h>

int main() {
    int n, term = 1;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Series: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", term);
        if (i % 2 == 0) {
            term *= 3;
        } else {
            term *= 2;
        }
    }
    printf("\n");
    return 0;
}

