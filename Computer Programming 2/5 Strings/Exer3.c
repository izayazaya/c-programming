#include <stdio.h>
#include <string.h>

#define SIZE 30

void compare(char [], char []);

int main(void){
    char string1[SIZE], string2[SIZE];

    printf("First string? ");
    fgets(string1, SIZE, stdin);
    printf("Second string? ");
    fgets(string2, SIZE, stdin);

    int count = 0;

    while(1){
        if(string1[count] == '\n'){
            string1[count] = '\0';
            break;
        }
        count++;
    }

    count = 0;

    while(1){
        if(string2[count] == '\n'){
            string2[count] = '\0';
            break;
        }
        count++;
    }

    compare(string1, string2);

    return 0;
}

void compare(char x[], char y[]){
    int i = strcmp(x, y);
    if(i > 0){
        printf("%s is greater than %s", x, y);
    }else if(i == 0){
        printf("%s equals %s", x, y);
    }else if(i < 0){
        printf("%s is greater than %s", y, x);
    }
}