/*  50-2.c

    Izayaa
    August 3X, 2024

	C Programming: A Modern Approach, Second Edition
	Chapter 3, Programming Project 2

	Write a program that formats product information entered by
	the user. A session with the program should look like this:

	   Enter item number: 583
	   Enter unit price: 13.5
	   Enter purchase date (mm/dd/yyyy): 8/20/2013

	   Item            Unit            Purchase
	                   Price           Date
	   583             $  13.50        08/20/2013

	The item number and date should be left justified; the unit
	price should be right justified. Allow dollar amounts up to
	$9999.99. Hint: Use tabs to line up the columns.

*/

#include <stdio.h>

int main(void) {
	int item_no, m, d, y;
	float item_price;

	printf("Enter item number: ");
	scanf("%d", &item_no);

	printf("Enter unit price: ");
	scanf("%f", &item_price);
	
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &m, &d, &y);
	
	printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%-3d\t\tPhp%8.2f\t%.2d/%.2d/%-3.4d", item_no, item_price, m, d, y);

	return 0;
}