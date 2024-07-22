//20. WAP program to print below output using for loop.
//01 02 03 04 05 06 07 08 09 10
//11 12 13 14 15 16 17 18 19  20

#include <stdio.h>

int main() {
	
    int i, j, number = 1;

    for (i=0; i<2; i++) { 
        for (j=0; j<10; j++) { 
            printf("%02d ", number); 
            number++;
        }
        printf("\n"); 
    }

    return 0;
}

