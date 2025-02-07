/*  50-5.c

    Izayaa
    August 3X, 2024

	C Programming: A Modern Approach, Second Edition
	Chapter 3, Programming Project 5

	Write a program that asks the user to enter the numbers from
	1 to 16 (in any order) and then displays the numbers in a
	4 by 4 arrangement, followed by the sums of the rows, columns,
	and diagonals:

	   Enter the numbers from 1 to 16 in any order:
	   16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1

	   16  3  2 13
	    5 10 11  8
	    9  6  7 12
	    4 15 14  1

	   Row sums: 34 34 34 34
	   Column sums: 34 34 34 34
	   Diagonal sums: 34 34

	If the row, column, and diagonal sums are all the same (as they
	are in this example), the numbers are said to form a magic square.
	The magic square shown here appears in a 1514 engraving by  artist
	and mathematician Albrecht Durer. (Note that the middle numbers in
	the last row give the date of the engraving.)

*/

#include <stdio.h>

int main(void) {
	int one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen, sumrow1, sumrow2, sumrow3, sumrow4, sumcolumn1, sumcolumn2, sumcolumn3, sumcolumn4, sumdiagonal1, sumdiagonal2;

	printf("Enter the numbers from 1 to 16 in any order:");
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