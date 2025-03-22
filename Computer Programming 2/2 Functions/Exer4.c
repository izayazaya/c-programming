#include <stdio.h>

int product(int, int, int);

int main(void){
    int a, b, c;
    printf("Enter 3 integers to be multiplied: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("The product of %d * %d * %d is %d\n", a, b, c, product(a, b, c));

    return 0;
}

int product(int x, int y, int z){
    int product;
    product = x * y * z;
    return product;
}