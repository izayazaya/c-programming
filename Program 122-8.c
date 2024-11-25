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