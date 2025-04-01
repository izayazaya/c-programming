/*  178-10.c

    Izayaa
    March 31, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 8, Programming Project 10

    Modify Programming Project 8 from Chapter 5 so that
    the departure times are stored in an array and the
    arrival times are stored in a second array. (The
    time are integers, representing the number of minutes
    since midnight.) The program will use a loop to
    search the array of departure times for the one clos-
    est to the time entered by the user.

*/

#include <stdio.h>

#define SIZE 8

int main(void) {
    int hour, minute, minutes_passed, closest, hours, minutes, index = SIZE, i;
    int departureTime[SIZE] = {8 * 60 + 0, 9 * 60 + 43, 11 * 60 + 19, 12 * 60 + 47,
                               14 * 60 + 0, 15 * 60 + 45, 19 * 60 + 0, 21 * 60 + 45};
    int arrivalTime[SIZE] = {10 * 60 + 16, 11 * 60 + 52, 13 * 60 + 31, 15 * 60 + 0,
                             16 * 60 + 8, 17 * 60 + 55, 21 * 60 + 20, 23 * 60 + 58};

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    minutes_passed = hour * 60 + minute + 30;

    closest = 1440;

    for(i = SIZE - 1; i >= 0; i--){
        if(minutes_passed < closest){
            closest = departureTime[i];
            index--;
        }
    }

    if(closest < 720){
        hours = closest / 60;
        if(closest < 60){
            hours = 12;
        }
        minutes = closest % 60;
    }else{
        hours = closest / 60 % 12;
        minutes = closest % 60;
        if(hours == 0){
            hours = 12;
        }
    }

    if (hours < 12 && closest < 720) {
        if (arrivalTime[index] / 60 < 12) {
            printf("Closest departure time is %d:%.2d am., arriving at %d:%.2d am\n", hours, minutes, arrivalTime[index] / 60, arrivalTime[index] % 60);
        } else
            printf("Closest departure time is %d:%.2d am., arriving at %d:%.2d pm\n", hours, minutes, arrivalTime[index] / 60 % 12, arrivalTime[index] % 60);
    } else
        printf("Closest departure time is %d:%.2d pm., arriving at %d:%.2d pm\n", hours, minutes, arrivalTime[index] / 60 % 12, arrivalTime[index] % 60);

    return 0;
}