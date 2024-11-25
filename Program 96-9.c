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