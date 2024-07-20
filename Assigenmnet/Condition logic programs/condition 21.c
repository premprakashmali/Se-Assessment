#include <stdio.h>

int main() {
    float basicSalary, HRA, DA, grossSalary;

    printf("Enter the basic salary of the employee: ");
    scanf("%f", &basicSalary);

    if (basicSalary <= 10000) {
        HRA = basicSalary * 0.20;
        DA = basicSalary * 0.80;
    } else if (basicSalary <= 20000) {
        HRA = basicSalary * 0.25;
        DA = basicSalary * 0.90;
    } else {
        HRA = basicSalary * 0.30;
        DA = basicSalary * 0.95;
    }

    grossSalary = basicSalary + HRA + DA;

    printf("Basic Salary: %.2f\n", basicSalary);
    printf("HRA: %.2f\n", HRA);
    printf("DA: %.2f\n", DA);
    printf("Gross Salary: %.2f\n", grossSalary);

    return 0;
}


