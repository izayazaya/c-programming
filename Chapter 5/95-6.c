#include <stdio.h>

int main(void) {
	int one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve, total;

	printf("Enter the 12 digit UPC: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &one, &two, &three, &four, &five, &six, &seven, &eight, &nine, &ten, &eleven, &twelve);

	total = (9 - ((((3 * (one + three + five + seven + nine + eleven)) + (two + four + six + eight + ten)) - 1) % 10));

	if (total == twelve) {
		printf("VALID UPC");
	} else
		printf("INVALID UPC");

	return 0;
}