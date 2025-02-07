/*  95-3.c

    Izayaa
    September XX, 2024

	C Programming: A Modern Approach, Second Edition
	Chapter 5, Programming Project 3

	Modify the broker.c program of Section 5.2 by making
	both of the following changes:

	a. Ask the user to enter the number of shares and the
	  price per share, instead of the value of the trade.

	b. Add statements that compute the commission charged by
	  a rival broker ($33 plus 3 cents per share for fewer
	  than 2000 shares; $33 plus 2 cents per share for 2000
	  shares or more. Display the rival's commission as well
	  as the commission charged by the original broker.

*/

#include <stdio.h>

int main(void) {
	float share, price_share, value, commission, rival_commission;

	printf("Enter the amount of shares: ");
	scanf("%f", &share);
	printf("Enter the price per share: ");
	scanf("%f", &price_share);

	value = share * price_share;

	if (value < 2500.00f) {
		commission = value * 0.0170f + 30.00f;
	} else if (value < 6250.00f) {
		commission = value * 0.0066f + 56.00f;
	} else if (value < 20000.00f) {
		commission = value * 0.0034f + 76.00f;
	} else if (value < 50000.00f) {
		commission = value * 0.0022f + 100.00f;
	} else if (value <= 500000.00f) {
		commission = value * 0.0011f + 155.00f;
	} else 
		commission = value * 0.0009f + 255.00f;

	if (commission < 39.00f) {
		commission = 39.00f;
	}

	printf("Our Commission: $%.2f\n", commission);

	if (share < 2000.00f) {
		rival_commission = 33.00f + 0.03f * share;
	} else 
		rival_commission = 33.00f + 0.02f * share;

	printf("Rival Commission: $%.2f\n", rival_commission);

	return 0;
}