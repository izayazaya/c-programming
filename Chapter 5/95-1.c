#include <stdio.h>

int main(void) {
	int number, digits;

	printf("Enter a number: ");
	scanf("%d", &number);

	if (number >= 0 && number <= 9) {
		digits = 1;
		printf("The number %d has %d digits", number, digits);
	} else if (number >= 10 && number <= 99) {
		digits = 2;
		printf("The number %d has %d digits", number, digits);
	} else if (number >= 100 && number <= 999) {
		digits = 3;
		printf("The number %d has %d digits", number, digits);
	} else if (number >= 1000 && number <= 9999) {
		digits = 4;
		printf("The number %d has %d digits", number, digits);
	} else if (number >= 10000 && number <= 99999) {
		digits = 5;
		printf("The number %d has %d digits", number, digits);
	} else {
		printf("I cannot count digits more than five, I am sorry.");
	}

	return 0;
}