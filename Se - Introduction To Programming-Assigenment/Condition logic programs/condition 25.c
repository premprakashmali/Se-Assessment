#include <stdio.h>

int main() {
    float unit, total_bill, surcharge;

    printf("Enter total units consumed: ");
    scanf("%f", &unit);
    
    
    if (unit <= 50) {
        total_bill = unit * 0.50;
    } else if (unit <= 150) {
        total_bill = (50 * 0.50) + ((unit - 50) * 0.75);
    } else if (unit <= 250) {
        total_bill = (50 * 0.50) + (100 * 0.75) + ((unit - 150) * 1.20);
    } else {
        total_bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((unit - 250) * 1.50);
    }
 
    surcharge = total_bill * 0.20;
    total_bill += surcharge;

    printf("Total electricity bill: Rs. %.2f\n", total_bill);
    
    return 0;
}


