/*  34-8.c

    Izayaa
    August 2X, 2024

    C Programming: A Modern Approach, Second Edition
    Chapter 2. Programming Project 8

    Write a program that calculates the remaining balance on a loan
    after the first, second, and third monthly payments:

      Enter amount of loan: 20000.00
      Enter interest rate: 6.0
      Enter monthly payment: 386.66

      Balance remaining after first payment: $19713.34
      Balance remaining after second payment: $19425.25
      Balance remaining after third payment: $19135.71

    Display each balance with two digits after the decimal point.
    Hint: Each month, the balance is decreased by the amount of the
    payment, but increased by the balance times the monthly interest
    rate. To find the monthly interest rate, convert the interest rate
    entered by the user to a percentage and divide it by 12.

*/

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