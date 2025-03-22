#include <stdio.h>
#include <ctype.h>

int main(void){
    char str[50], strUPP[50];

    printf("Enter a string: ");
    fgets(str, 50, stdin);

    for(int i = 0; str[i] != '\n'; i++){
        strUPP[i] = toupper(str[i]);
    }

    printf("In uppercase: %s", strUPP);

    return 0;
}