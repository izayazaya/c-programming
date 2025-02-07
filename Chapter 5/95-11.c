/*  95-11.c

    Izayaa
    October XX, 2024

	C Programming: A Modern Approach, Second Edition
	Chapter 5, Programming Project 11

	Write a program that asks the user for a two-digit number, then
	prints the English word for the number:

	   Enter a two-digit number: 45
	   You entered the number forty-five.

	Hint: Break the number into two digits. Use one switch statement
	to print the word for the first digit. Use a second switch statement
	to print the word for the second digit. Don't forget that the numbers
	between 11 and 19 require special treatment.

*/

#include <stdio.h>

int main(void) {
	int digit, first, second;

	printf("Enter a two-digit number: ");
	scanf("%d", &digit);

	first = digit / 10;
	second = digit % 10;

	if (first >= 2 && first <= 9) {
		switch (first) {
			case 9: printf("You entered the number ninety"); break;
			case 8: printf("You entered the number eighty"); break;
			case 7: printf("You entered the number seventy"); break;
			case 6: printf("You entered the number sixty"); break;
			case 5: printf("You entered the number fifty"); break;
			case 4: printf("You entered the number forty"); break;
			case 3: printf("You entered the number thirty"); break;
			case 2: printf("You entered the number twenty"); break;
		}
		switch (second) {
			case 9: printf("-nine."); break;
			case 8: printf("-eight."); break;
			case 7: printf("-seven."); break;
			case 6: printf("-six."); break;
			case 5: printf("-five."); break;
			case 4: printf("-four."); break;
			case 3: printf("-three."); break;
			case 2: printf("-two."); break;
			case 1: printf("-one."); break;
			case 0: printf("."); break;
		}
	} else 
		switch (digit) {
			case 19: printf("You entered the number nineteen"); break;
			case 18: printf("You entered the number eighteen"); break;
			case 17: printf("You entered the number seventeen"); break;
			case 16: printf("You entered the number sixteen"); break;
			case 15: printf("You entered the number fifteen"); break;
			case 14: printf("You entered the number fourteen"); break;
			case 13: printf("You entered the number thirteen"); break;
			case 12: printf("You entered the number twelve"); break;
			case 11: printf("You entered the number eleven"); break;
			case 10: printf("You entered the number ten"); break;
			default: printf("Error 404: I am not able to comprehend that number since it isn't a two-digit number");
		}

	return 0;
}