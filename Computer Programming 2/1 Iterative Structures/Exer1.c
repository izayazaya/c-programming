#include <stdio.h>

int main(void) {
    int i = 1;
    while(i != 0){
        int a, b, larger, smaller;
        printf("Enter two positive integers: ");
        scanf("%d %d", &a, &b);
        if(a <= 0 || b <= 0){
            printf("Invalid input(s)");
        }
        if(a == 0 && b == 0){
            i = 0;
        }
        if(a > b){
            larger = a;
            smaller = b;
        } else{
            larger = b;
            smaller = a;
        }
        if(larger % smaller == 0){
            printf("The larger number is divisible by the smaller one.\n");
        }else{
            printf("The larger number is not divisible by the smaller one.\n");
        }
    }
    return 0;
}