/*  157-9.c

    Izayaa
    February 9, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 7, Programming Project 9

    Write a program that asks the user for a 12-hour time,
    then displays the time in 24-hour form:

        Enter a 12-hour time: 9:11 PM
        Equivalent 24-hour time: 21:11

    See Programming Project 8 for a description of the
    input format.

*/

#include <stdio.h>
#include <ctype.h>

int main(void){
    int hour, minute, newHour;
    char time;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hour, &minute, &time);
    time = toupper(time);

    if(time == 'A'){
        newHour = hour;
        if(newHour == 12){
            newHour = 0;
        }
    }else if(time == 'P'){
        newHour = hour + 12;
        if(newHour == 24){
            newHour = 12;
        }
    }

    printf("Equivalent 24-hour time: %.2d:%.2d", newHour, minute);

    return 0;
}