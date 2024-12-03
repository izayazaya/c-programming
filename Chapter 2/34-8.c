#include <stdio.h>

int main(void) {
    float loan, interestRate, monthlyPayment;
    float firstBalance, secondBalance, thirdBalance;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interestRate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthlyPayment);

    interestRate = (interestRate * 0.01f) / 12.00f;

    firstBalance = loan + (loan * interestRate) - monthlyPayment;
    secondBalance = firstBalance + (firstBalance * interestRate) - monthlyPayment;
    thirdBalance = secondBalance + (secondBalance * interestRate) - monthlyPayment;

    printf("Balance remaining after first payment: $%.2f\n", firstBalance);
    printf("Balance remaining after second payment: $%.2f\n", secondBalance);
    printf("Balance remaining after third payment: $%.2f\n", thirdBalance);

    return 0;
}