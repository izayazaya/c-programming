#include <stdio.h>

int main(void) {
	int one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve, thirteen;

	printf("Enter the first 12 digits of an EAN: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &one, &two, &three, &four, &five, &six, &seven, &eight, &nine, &ten, &eleven, &twelve);

	thirteen = (9 - (((3 * (two + four + six + eight + ten + twelve)) + (one + three + five + seven + nine + eleven) - 1) % 10));
	printf("Check digit: %d\n", thirteen);

	return 0;
}