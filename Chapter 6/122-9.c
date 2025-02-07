/*  122-9.c

    Izayaa
    October XX, 2024

	C Programming: A Modern Approach, Second Edition
	Chapter 6, Programming Project 9

	Programming Project 8 in Chapter 2 asked you to write a
	program that calculates the remaining balance on a loan
	after the first, second, and third monthly payments.
	Modify the program so that it also asks the user to enter
	the number of payments and then displays the balance
	remaining after each of these payments.

*/

#include <stdio.h>

int main(void) {
	int i, n; 
	float loan, interestRate, monthlyPayment, balance;

	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	printf("Enter interest rate: ");
	scanf("%f", &interestRate);
	printf("Enter monthly payment: ");
	scanf("%f", &monthlyPayment);
	printf("Enter number of payments: ");
	scanf("%d", &n);

	interestRate = interestRate * 0.01f / 12.00f;
	for (i = 1; i <= n; i++) {
		balance = loan - monthlyPayment + (loan * interestRate);
		if (balance >= 0.00f) {
			balance = balance;
		} else {
			balance = 0.00f;
		}
		loan = balance;
		printf("Balance remaining after %d payment(s): $%.2f\n", i, balance);
	}
	return 0;
}