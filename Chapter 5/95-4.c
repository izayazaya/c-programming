#include <stdio.h>

int main(void) {
	float knots;

	printf("Enter the wind speed (in knots): ");
	scanf("%f", &knots);

	if (knots < 1) {
		printf("Calm");
	} else if (knots < 4) {
		printf("Light air");
	} else if (knots < 28) {
		printf("Breeze");
	} else if (knots < 48) {
		printf("Gale");
	} else if (knots < 64) {
		printf("Storm");
	} else
		printf("Hurricane");
}