#include <stdio.h>

int main(void) {
	int firstpart, secondpart, thirdpart;

	printf("Enter phone number (xxxx xxx xxxx): ");
	scanf("%d %d %d", &firstpart, &secondpart, &thirdpart);

	printf("You entered: %.4d.%d.%d", firstpart, secondpart, thirdpart);

	return 0;
}