//4. WAP to print table up to given numbers


#include <stdio.h>

int main()
{
    int n, i, j;

    
    printf("Enter the number up to which you want the table: ");//User input the number
    scanf("%d", &n);

    //
    
    for(i = 1; i <= n; i++)
    {
        printf("Table of %d:\n", i); // Current number ka table header

        // Table print karne ke liye loop
        for(j = 1; j <= 10; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        
        printf("\n");// Har table ke baad ek line break
    }
    
    return 0;
}

