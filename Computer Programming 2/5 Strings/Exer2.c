#include <stdio.h>

void caps(char []);

int main(void){
    char x[50];

    printf("Input a string: ");
    fgets(x, sizeof(x), stdin);
    caps(x);

    return 0;

}

void caps(char x[]){
    int count = 0;
    while(x[count] != '\0'){
        if(x[count] >= 'a' && x[count] <= 'z'){
            printf("%c", x[count] - 32);
        }else{
            printf("%c", x[count]);
        }
        count++;
    }
}