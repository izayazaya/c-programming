#include <stdio.h>

int main(void) {
	float numberEntered1, previousNumber, numberSaved;

	while (1) {
		previousNumber = numberEntered1;
		printf("Enter a number: ");
		scanf("%f", &numberEntered1);
		if (numberEntered1 <= 0) {
			break;
		} if (numberEntered1 > previousNumber && numberEntered1 > numberSaved) {
			numberSaved = numberEntered1;
		}
	}
		
	printf("The largest number entered was %.2f", numberSaved);

	return 0;
}