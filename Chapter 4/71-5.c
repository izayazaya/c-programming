#include <stdio.h>

int main(void) {
    int one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve;

    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &one, &two, &three, &four, &five, &six, &seven, &eight, &nine, &ten, &eleven);

    twelve = (9 - (((3 * (one + three + five + seven + nine + eleven)) + (two + four + six + eight + ten) - 1) % 10));
    printf("Check digit: %d\n", twelve);

    return 0;
}