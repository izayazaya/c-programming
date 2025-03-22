#include <stdio.h>

int main(void) {
    int year;
    do{
        printf("Enter a year between 1900 & 2100: ");
        scanf("%d", &year);
        if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
            printf("The year %d is a leap year!\n", year);
        }else{
            printf("The year %d is not a leap year!\n", year);
        }
    }while(year >= 1900 && year <= 2100);

    return 0;
}