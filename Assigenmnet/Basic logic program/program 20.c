#include <stdio.h>
main() {
    float monthly_salary, insurance_premium, loan_installment, remaining_salary;

    printf("Enter your monthly salary: ");
    scanf("%f", &monthly_salary);

    insurance_premium = 0.10 * monthly_salary;

    loan_installment = 0.10 * monthly_salary;

  
    remaining_salary = monthly_salary - insurance_premium - loan_installment;
    printf("Insurance premium deducted: $%.2f\n", insurance_premium);
    printf("Loan installment deducted: $%.2f\n", loan_installment);
    printf("Remaining salary: $%.2f\n", remaining_salary);

}


