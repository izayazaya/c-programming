#include <stdio.h>

int main(void) {
	int n;

	printf("Enter a number: ");
	scanf("%d", &n);

	printf("The reversal is: %.1d", n % 10);

	do {;
		n /= 10;
		if (n != 0) {
			printf("%.1d", n % 10);
		}
	} while (n != 0);

	return 0;
}