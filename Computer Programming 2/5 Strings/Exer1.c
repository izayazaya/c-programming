#include <stdio.h>
#include <ctype.h>

int isVowel(char);

int main(void){
    char x;

    printf("Enter a letter to check if it is a vowel or not: ");

    x = getchar();
    x = toupper(x);

    printf("%i", isVowel(x));

    return 0;
}

int isVowel(char x){
    if(x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U'){
        return 1;
    }else{
        return 0;
    }
}