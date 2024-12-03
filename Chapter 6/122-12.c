#include <stdio.h>

int main(void) {
    double e, eFinal;
    double eInitial = 1.0f;
    double i = 1.0f;

    printf("Enter a value for e: ");
    scanf("%lf", &e);

    while(eInitial < e) {
        eFinal = eInitial;
        double fact = 1.0f;
        for(double j = 1.0f; j <= i; j++) {
            fact *= j;
        }
        eInitial += (1.0f / fact);
        i++;
        printf("%.15lf\n", eInitial);
    }

    if(eInitial > e) {
        eInitial = eFinal;
    }

    printf("The approximation of e is: %.15f", eInitial);

    return 0;
}