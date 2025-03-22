#include <stdio.h>
#include <ctype.h>

void capitalize(char [], char []);

int main(void){
    char str[50], strNew[50];

    printf("Original String: ");
    fgets(str, 50, stdin);

    capitalize(str, strNew);

    return 0;
}

void capitalize(char str[], char strNew[]){
    strNew[0] = toupper(str[0]);
    for(int i = 1; str[i] != '\n'; i++){
        if(str[i - 1] == ' '){
            strNew[i] = toupper(str[i]);
        }else{
            strNew[i] = str[i];
        }
    }

    printf("Output: %s", strNew);
}