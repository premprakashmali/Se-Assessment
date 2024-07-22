//17. Calculate person’s insurance premium based on salary

#include <stdio.h>

int main() {
    float salary, premiumPercentage, insurancePremium;


    printf("Enter your annual salary: ");     // Input salary from user
    scanf("%f", &salary);


    printf("Enter the premium percentage(0.05) ");    // Input premium percentage (as a decimal)
    scanf("%f", &premiumPercentage);


    insurancePremium = salary * premiumPercentage;     // Calculate insurance premium


    printf("Your insurance premium: %.2f\n", insurancePremium); //output

    return 0;
}

