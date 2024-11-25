#include <stdio.h>

int main(void) {
	int i, n, d, e;

	printf("Enter number of days in month: ");
	scanf("%d", &n);
	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &d);

	e = 1;
	for (i = 1; i <= n; i++) {
		while (e < d) {
			printf("   ");
			e++;
		}
		printf("%3d", i);
		if ((i + (d - 1)) % 7) {
			continue;
		}
		printf("\n");
	}
	return 0;
}