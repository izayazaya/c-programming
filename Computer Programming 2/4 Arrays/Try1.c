#include <stdio.h>
#define DAYS_IN_WEEK 6

int main(void){
    short sales[DAYS_IN_WEEK] = {3806, 28, 4522, 1183, 47, 12};
    short day;

    for(day = 0; day < DAYS_IN_WEEK; day++){
        printf("Sales for day %hi = %5hi\n", day, sales[day]);
    }

    return 0;
}