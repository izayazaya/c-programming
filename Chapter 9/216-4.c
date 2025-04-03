/*  216-4.c

    Izayaa
    April 3, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 9, Programming Project 4

    Modify Programming Project 16 from Chapter 8 so
    that it includes the following functions:

        void read_word(int counts[26]);
        bool equal_array(int counts1[26], int counts2
        [26]);

    main will call read_word twice, once for each of
    the two words entered by the user. As it reads a 
    word, read_word will use the letters in the word
    to update the counts array, as described in the
    original project. (main will declare two arrays),
    one for each word. These arrays are used to track
    how many times each letter occurs in the words.)
    main will then call equal_array, passing it the
    two arrays. equal_array will return true if the
    elements in the two arrays are identical (indi-
    cating that the words are anagrams) and false
    otherwise.

*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>

#define SIZE 26

void read_word(int []);

bool equal_array(int [], int []);

int main(void){
    int counts1[SIZE] = {0}, counts2[SIZE] = {0};

    read_word(counts1);
    read_word(counts2);

    if(equal_array(counts1, counts2)){
        printf("The words are anagrams.\n");
    }else{
        printf("The words are not anagrams.\n");
    }

    return 0;
}

void read_word(int counts[]){
    char ch;
    printf("Enter word: ");
    for(int i = 0; (ch = getchar()) != '\n'; i++){
        ch = tolower(ch);
        if(!isalpha(ch)){
            printf("That is not part of the alphabet!\n");
            exit(EXIT_SUCCESS);
        }else{
            counts[ch - 'a']++;
        }
    }
}

bool equal_array(int counts1[], int counts2[]){
    int count = 0;
    for(int i = 0; i < SIZE; i++){
        if(counts1[i] == counts2[i]){
            count++;
        }
    }
    if(count == 26){
        return true;
    }else{
        return false;
    }
}