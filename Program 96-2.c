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