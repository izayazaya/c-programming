/*  178-6.c

    Izayaa
    March 31, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 8, Programming Project 6

    The prototypical internet newbie is a fellow named
    BIFF, who has a unique way of writing messages.
    Here's a typical BIFF communique:

        H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!

    Write a "B1FF filter" that read a message entered
    by the user and translates it into B1FF-speak:

        Enter message: Hey dude, C is rilly cool
        In B1ff-speak: H3Y DUD3, C 15 R1LLY COOL!!!!!!!!!!

    Your program should convert the messages to upper-
    case letters, substitute digits for certain letters
    (A -> 4, B -> 8, E -> 3, I -> 1, O -> 0, S -> 5),
    and then append 10 or so exclamation marks.
    Hint: Store the original message in an array of
    characters, then go back through the array trans-
    lating and printing characters one by one.

*/

#include <stdio.h>
#include <ctype.h>

int main(void){
    char message[100];
    int i = 0, n = 0;

    printf("Enter message: ");
    while((message[i] = getchar()) != '\n'){
        message[i] = toupper(message[i]);
        switch(message[i]){
            case 'A': message[i] = '4'; break;
            case 'B': message[i] = '8'; break;
            case 'E': message[i] = '3'; break;
            case 'I': message[i] = '1'; break;
            case 'O': message[i] = '0'; break;
            case 'S': message[i] = '5'; break;
            default: message[i] = message[i]; break;
        }
        i++;
        n++;
    }

    printf("In B1FF-speak: ");
    for(i = 0; i < n; i++){
        printf("%c", message[i]);
    }
    printf("!!!!!!!!!!\n");

    return 0;
}