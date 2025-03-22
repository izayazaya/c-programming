/*  122-12.c

    Izayaa
    November XX, 2024

    C Programming: A Modern Approach, Second Edition
    Chapter 6, Programming Project 12

    Modify Programming Project 11 so that the program
    continues adding terms until the current term becomes
    less than E where E is a small (floating-point) number
    entered by the user.

*/

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
        printf("%.15f\n", eInitial);
    }

    if(eInitial > e) {
        eInitial = eFinal;
    }

    printf("The approximation of e is: %.15f", eInitial);

    return 0;
}