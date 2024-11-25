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