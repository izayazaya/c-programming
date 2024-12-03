#include <stdio.h>

int main (void) {
	int gsi_prefix, group_identifier, publisher_code, item_no, check_digit;

	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gsi_prefix, &group_identifier, &publisher_code, &item_no, &check_digit);

	printf("GSI prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d", gsi_prefix, group_identifier, publisher_code, item_no, check_digit);

	return 0;
}