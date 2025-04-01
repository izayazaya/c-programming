/*  178-14.c

    Izayaa
    April 1, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 8, Programming Project 14

    Write a program that reverses the words in a sen-
    tence:

        Enter a sentence: you can cage a swallow can't
                          you?
        Reversal of sentence: you can't swallow a cage
                              can you?

    Hint: Use a loop to read the characters one by one
    and store in a one-dimensional char array. Have the
    loop stop at a period, question mark, or exclamation
    point (the "therminating character"), which is saved
    in a separate char variable. Then use a second loop
    to search backward through the array for the begin-
    ning of the last word. Print the last word, then
    search backward for the next-to-last word. Repeat
    until the beginning of the array is reach. Finally,
    print the terminating character.

*/

#include <stdio.h>

int main(void){
    char sentence[100], terminate, placeholder, count = 0;

    printf("Enter a sentence: ");
    for(int i = 0; (placeholder = getchar()) != '\n'; i++){
        if(placeholder == '.' || placeholder == '?' || placeholder == '!'){
            terminate = placeholder;
        }else{
            sentence[i] = placeholder;
        }
        count++;
    }

    printf("Reversal of sentence: ");
    for(int i = count + 1, j = 0; i >= 0; i--){
        if(sentence[i - 1] == ' ' || i == 0){
            j = i;
            while(sentence[i] != ' ' && i < count){
                printf("%c", sentence[i++]);
            }
            i = j;
            if(i > 0){
                printf(" ");
            }
        }
    }
    printf("%c", terminate);

    return 0;
}