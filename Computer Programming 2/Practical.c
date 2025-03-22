#include <stdio.h>
#include <string.h>
#include <ctype.h>

int characterChecker(char []);

int passwordUpper(char []);

int passwordLower(char []);

int passwordNum(char []);

int passwordSymbol(char []);

int main(void){
    char password[50];

    printf("Enter a password:");
    fgets(password, 50, stdin);

    if(characterChecker(password) == 1){
        if(passwordUpper(password) == 1){
            if(passwordLower(password) == 1){
                if(passwordNum(password) == 1){
                    if(passwordSymbol(password) == 1){
                        printf("The password is valid!\n");
                    }
                    else{
                        printf("The password doesn't have a symbol.\n");
                    }
                }else{
                    printf("The password doesn't have a number.\n");
                }
            }else{
                printf("The pasword doesn't have a lowecase letter.\n");
            }
        }else{
            printf("The password doesn't have an uppercase letter.\n");
        }
    }else{
        printf("The password doesn't have enough characters (atleast 12).\n");
    }

    printf("\nThank you for trying out my password checker program!\n");

    return 0;
}

int characterChecker(char password[]){
    int character = 0;
    for(int i = 0; password[i] != '\0'; i++){
        character++;
    }
    if(character < 12){
        printf("Password is too short!\n");
        return 0;
    }else{
        printf("The password has %i character(s).\n", character);
        return 1;
    }
}

int passwordUpper(char password[]){
    int upper = 0;
    for(int i = 0; password[i] != '\0'; i++){
        if(isupper(password[i]) > 0){
            upper++;
        }
    }
    printf("The password has %i uppercase letter(s).\n", upper);
    if(upper > 0){
        return 1;
    }else{
        return 0;
    }
}

int passwordLower(char password[]){
    int lower = 0;
    for(int i = 0; password[i] != '\0'; i++){
        if(islower(password[i]) > 0){
            lower++;
        }
    }
    printf("The password has %i lowercase letter(s).\n", lower);
    if(lower > 0){
        return 1;
    }else{
        return 0;
    }
}

int passwordNum(char password[]){
    int num = 0;
    for(int i = 0; password[i] != '\0'; i++){
        if(password[i] >= '0' && password[i] <= '9'){
            num++;
        }
    }
    printf("The password has %i number character(s).\n", num);
    if(num > 0){
        return 1;
    }else{
        return 0;
    }
}

int passwordSymbol(char password[]){
    int symbol = 0;
    for(int i = 0; password[i] != '\0'; i++){
        if(password[i] == '!' || password[i] == '$' || password[i] == '+' || password[i] == '_' || password[i] == '-'){
            symbol++;
        }
    }
    printf("The password has %i symbol character(s).\n", symbol);
    if(symbol > 0){
        return 1;
    }else{
        return 0;
    }
}