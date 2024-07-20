#include <stdio.h>

int main() {
    int customerID;
    char customerName[5];
    int units;
    float totalBill = 0.0;

    // Input customer details
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    printf("Enter Units Consumed: ");
    scanf("%d", &units);

    // Calculate the bill
    if (units <= 100) {
        totalBill = units * 1.50;
    } else if (units <= 300) {
        totalBill = (100 * 1.50) + ((units - 100) * 2.00);
    } else {
        totalBill = (100 * 1.50) + (200 * 2.00) + ((units - 300) * 3.00);
    }

    // Print the bill
    printf("\nElectricity Bill\n");
    printf("----------------\n");
    printf("Customer ID   : %d\n", customerID);
    printf("Customer Name : %s\n", customerName);
    printf("Units Consumed: %d\n", units);
    printf("Total Bill    : $%.2f\n", totalBill);

    return 0;
}

