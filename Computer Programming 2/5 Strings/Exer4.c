#include <stdio.h>
#include <ctype.h>

int main(void){
    char str[50], strLow[50];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\n'; i++){
        strLow[i] = tolower(str[i]);
    }

    printf("In lowercase: %s", strLow);

    return 0;
}