/*  157-8.c

    Izayaa
    February 9, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 7, Programming Project 8

    Modify Programming Project 8 from Chapter 5 so that the
    user enters a time using the 12-hour clock. The input
    will have the form hours:minutes followed by either A,
    P, AM, or PM (either lower-case or upper-case). White
    space is allowed (but not required) between the
    numerical time and the AM/PM indicator. Examples of
    valid input:

        1:15P
        1:15PM
        1:15p
        1:15pm
        1:15 P
        1:15 PM
        1:15 p
        1:15 pm

    You may assume that the input has one of these forms;
    there is no need to test for errors.

*/

#include <stdio.h>
#include <ctype.h>

int main(void) {
    int hour, minutes, minutes_passed, dhour, dminutes, ahour, aminutes;
    char time;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hour, &minutes, &time);
    time = toupper(time);

    minutes_passed = hour * 60 + minutes;

    if(time == 'A'){
        if (minutes_passed < (8 * 60 + 0 + 52)) {
            dhour = 8;
            dminutes = 0;
            ahour = 10;
            aminutes = 16;
        } else if (minutes_passed < (9 * 60 + 43 + 48)) {
            dhour = 9;
            dminutes = 43;
            ahour = 11;
            aminutes = 52;
        } else if (minutes_passed < (11 * 60 + 19 + 44)) {
            dhour = 11;
            dminutes = 19;
            ahour = 1;
            aminutes = 31;
        }
    }else if(time == 'P'){
        if (minutes_passed < (0 * 60 + 47 + 37)) {
            dhour = 12;
            dminutes = 47;
            ahour = 3;
            aminutes = 0;
        } else if (minutes_passed < (2 * 60 + 0 + 53)) {
            dhour = 2;
            dminutes = 0;
            ahour = 4;
            aminutes = 8;
        } else if (minutes_passed < (3 * 60 + 45 + 98)) {
            dhour = 3;
            dminutes = 45;
            ahour = 5;
            aminutes = 55;
        } else if (minutes_passed < (7 * 60 + 0 + 83)) {
            dhour = 7;
            dminutes = 0;
            ahour = 9;
            aminutes = 20;
        } else if (minutes_passed < (9 * 60 + 45 + 60)) {
            dhour = 9;
            dminutes = 45;
            ahour = 11;
            aminutes = 58;
        }
    }

    if (time == 'A') {
        if (time == 'A' && ahour > 1) {
            printf("Closest departure time is %d:%.2d a.m., arriving at %d:%.2d a.m\n", dhour, dminutes, ahour, aminutes);
        } else if(time == 'A'){
            printf("Closest departure time is %d:%.2d a.m., arriving at %d:%.2d p.m\n", dhour, dminutes, ahour, aminutes);
        }
    } else if(time == 'P'){
        printf("Closest departure time is %d:%.2d p.m., arriving at %d:%.2d p.m\n", dhour, dminutes, ahour, aminutes);
    }

    return 0;
}