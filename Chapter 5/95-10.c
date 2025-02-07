/*  95-10.c

    Izayaa
    October XX, 2024

	C Programming: A Modern Approach, Second Edition
	Chapter 5, Programming Project 10

	Using the switch statement, write a program that converts
	a numerical grade into a letter grade:

	   Enter a numerical grade: 84
	   Letter grade: B

	Use the following grading scale: A = 90-100, B = 80-89,
	C = 70-79, D = 60-69, F = 0-59. Hint: Break the grade
	into two digits, then use a switch statement to test
	the ten's digit.

*/

#include <stdio.h>

int main(void) {
	int num_grade, equivalent;

	printf("Enter numerical grade: ");
	scanf("%d", &num_grade);

	equivalent = num_grade / 10;

	if (num_grade >= 0 && num_grade <= 100) {
		switch (equivalent) {
			case 10:
			case 9: printf("Letter grade: A"); break;
			case 8: printf("Letter grade: B"); break;
			case 7: printf("Letter grade: C"); break;
			case 6: printf("Letter grade: D"); break;
			default: printf("Letter grade: F");
		}
	} else 
		printf("Error 404: Number not recognized");

	return 0;
}