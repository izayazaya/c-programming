/*  157-5.c

    Izayaa
    February 9, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 7, Programming Project 5

    In the SCRABBLE Crossword Game, players form words using
    small tiles, each containing a letter and a face value.
    The face value varies from one letter to another, based
    on the letter's rarity. (Here are the face values: 1:
    AEILNORSTU, 2: DG, 3: BCMP, 4: FHVWY, 5: K, 8: JX, 10: QZ.)
    Write a program that computes the value of a word by
    summing the values of its letters:

        Enter a word: pitfall
        Scrabble value: 12

    Your program should allow any mixture of lower-case and
    upper-case letters in the word. Hint: Use the toupper
    library function.

*/

#include <stdio.h>
#include <ctype.h>

int main(void){
    char text;
    int value, sum = 0;

    printf("Enter a word: ");
    text = getchar();

    while(text != '\n'){
        text = toupper(text);

        if(text == 'A' || text == 'E' || text == 'I' || text == 'L' || text == 'N' || text == 'O' || text == 'R' || text == 'S' || text == 'T' || text == 'U'){
            value = 1;
        }else if(text == 'D' || text == 'G'){
            value = 2;
        }else if(text == 'B' || text == 'C' || text == 'M' || text == 'P'){
            value = 3;
        }else if(text == 'F' || text == 'H' || text == 'V' || text == 'W' || text == 'Y'){
            value = 4;
        }else if(text == 'K'){
            value = 5;
        }else if(text == 'J' || text == 'X'){
            value = 8;
        }else if(text == 'Q' || text == 'Z'){
            value = 10;
        }

        sum += value;
        text = getchar();
    }
    printf("Scrabble value: %d", sum);

    return 0;
}