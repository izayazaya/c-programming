#include <stdio.h>

int summation(int n);

int main(void) {
    int n;
    printf("Enter how many numbers you want the function to add: ");
    scanf("%d", &n);
    printf("%d", summation(n));

    return 0;
}

int summation(int n){
    if(n == 1){
        return 1;
    } else {
        return n + summation(n - 1);
    }
}