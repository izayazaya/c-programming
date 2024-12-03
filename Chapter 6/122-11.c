#include <stdio.h>

int main(void) {
    double n;
    double eInitial = 1.0f;

    printf("Enter a value for n: ");
    scanf("%lf", &n);

    for(double i = 1.0f; i <= n; i++) {
        double fact = 1.0f;
        for(double j = 1.0f; j <= i; j++) {
            fact *= j;
        }
        eInitial += (1.0f / fact);
    }

    printf("The approximation of e with n = %.0lf is: %.15f",n , eInitial);

    return 0;
}
