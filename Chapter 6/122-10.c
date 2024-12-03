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