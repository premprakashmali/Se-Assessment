//18.Write a C Program to Print the Multiplication Table of N
#include <stdio.h>

int main() {
	
    int N, i;

    printf("Enter a number for print multiplication tabel: "); // Ask the user for the number 
    scanf("%d", &N);


    for (i=1; i<=10; i++) {
        printf("%d * %d = %d\n", N, i, N * i);       // Print the multiplication table of N
    }

    return 0;
}

