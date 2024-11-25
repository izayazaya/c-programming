#include <stdio.h>

int main(void) {
	int numerator, denominator, a, b, lowestNum, lowestdenom, remainder;

	printf("Enter a fraction: ");
	scanf("%d/%d", &numerator, &denominator);
	a = numerator, b = denominator;

	while (b != 0) {
		remainder = a % b;
		a = b;
		b = remainder;
	}

	lowestNum = numerator / a;
	lowestdenom = denominator / a;

	printf("In lowest terms: %d/%d", lowestNum, lowestdenom);

	return 0;
}