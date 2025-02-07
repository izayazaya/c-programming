#include <stdio.h>

int main(void){
    for(int i = 1; i <= 100; i += 2){
        printf("%d\t%d\n", i, i * i);
    }

    return 0;
}