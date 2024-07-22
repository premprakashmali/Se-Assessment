#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, compound_interest, amount;
    int compoundings_per_year;

   
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    
    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &rate);
    
    printf("Enter the time (in years): ");
    scanf("%lf", &time);

   
    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &compoundings_per_year);
    amount = principal * pow(1 + (rate / (100 * compoundings_per_year)), compoundings_per_year * time);

    compound_interest = amount - principal;

    printf("The compound interest is: $%.2f\n", compound_interest);
    printf("The total amount after %.2f years is: $%.2f\n", time, amount);

    return 0;
}


