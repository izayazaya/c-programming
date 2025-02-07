/*  122-10.c

    Izayaa
    November XX, 2024

    C Programming: A Modern Approach, Second Edition
    Chapter 6, Programming Project 10

    Programming Project 9 in Chapter 5 asked you to write a
    program that determines which of two dates come earlier
    on the calendar. Generalize the program so that the user
    may enter any number of dates. The user will enter 0/0/0
    to indicate that no more dates will be entered.

       Enter a date (mm/dd/yy): 3/6/08
       Enter a date (mm/dd/yy): 5/17/07
       Enter a date (mm/dd/yy): 6/3/07
       Enter a date (mm/dd/yy): 0/0/0
       5/17/07 is the earliest date

*/

#include <stdio.h>

int main(void) {
    int day, month, year, total, prevTotal, earlyDay, earlyMonth, earlyYear;

    do {
        prevTotal = total;
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &month, &day, &year);
        total = (year * 365) + (month * 30) + day;
        if (total < prevTotal && total != 0) {
            earlyMonth = month;
            earlyDay = day;
            earlyYear = year;
        }
    } while (total != 0);

    printf("%d/%d/%.2d is the earliest date", earlyMonth, earlyDay, earlyYear);

    return 0;
}