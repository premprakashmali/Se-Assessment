//19.patterns.
//1
//0 1
//0 1 0
//1 0 1 0
//1 0 1 0 1
#include <stdio.h>

int main() {
	
    int i,j,n=1;
     

    // Loop for each line
    for (i=1;i<=5;i++) {
        

        // Loop to print numbers in  line
        for (j=1; j<=i; j++) {
            printf("%d ", n);
             n = 1 - n; // Toggle between 1 and 0
        }

        printf("\n"); //Break line
    }

    return 0;
}

