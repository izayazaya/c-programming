#include <stdio.h>
#include <ctype.h>

int main(void){
    char str[50], strNew[50];

    printf("Enter a string: ");
    fgets(str, 50, stdin);

    for(int i = 0; str[i] != '\n'; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            strNew[i] = toupper(str[i]);
        }else if(str[i] >= 'A' && str[i] <= 'Z'){
            strNew[i] = tolower(str[i]);
        }else{
            strNew[i] = str[i];
        }
    }

    printf("Output: %s", strNew);

    return 0;
}