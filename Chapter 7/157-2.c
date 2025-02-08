/*  157-2.c

    Izayaa
    February 8, 2024

    C Programming: A Modern Approach, Second Edition
    Chapter 7, Programming Project 2

    Modify the square2.c program of Section 6.3 so that it
    pauses after every 24 squares and displays the following
    message:

        Press Enter to continue...

    After displaying the message, the program should use
    getchar to read a character. getchar won't allow the
    program to continue until the user presses the Enter
    key.

*/

#include <stdio.h>

int main(void){
    int n;
    long i;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        printf("%10ld%15ld\n", i, i * i);
        if(i % 24 == 0{
            printf("Press Enter to continue...");
            if(getchar() == '\n'){
                continue;
            }else{
                break;
            }
        }
    }

    return 0;
}