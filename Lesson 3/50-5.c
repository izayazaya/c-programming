#include <stdio.h>

int main(void) {
	int one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen, sumrow1, sumrow2, sumrow3, sumrow4, sumcolumn1, sumcolumn2, sumcolumn3, sumcolumn4, sumdiagonal1, sumdiagonal2;

	printf("Enter the numbers from 1 to 16 in any order:\n");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &one, &two, &three, &four, &five, &six, &seven, &eight, &nine, &ten, &eleven, &twelve, &thirteen, &fourteen, &fifteen, &sixteen);

	printf("%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n", one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen);

	sumrow1 = one + two + three + four;
	sumrow2 = five + six + seven + eight;
	sumrow3 = nine + ten + eleven + twelve;
	sumrow4 = thirteen + fourteen + fifteen + sixteen;
	sumcolumn1 = one + five + nine + thirteen;
	sumcolumn2 = two + six + ten + fourteen;
	sumcolumn3 = three + seven + eleven + fifteen;
	sumcolumn4 = four + eight + twelve + sixteen;
	sumdiagonal1 = one + six + eleven + sixteen;
	sumdiagonal2 = four + seven + ten + thirteen;

	printf("Row sums: %d %d %d %d\n", sumrow1, sumrow2, sumrow3, sumrow4);
	printf("Column sums: %d %d %d %d\n", sumcolumn1, sumcolumn2, sumcolumn3, sumcolumn4);
	printf("Diagonal sums: %d %d\n", sumdiagonal1, sumdiagonal2);

	return 0;
}