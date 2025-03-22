#include <stdio.h>

void sort(int, int, int);

int main(void){
    int a, b, c;
    printf("Enter 3 numbers to be sorted: ");
    scanf("%d %d %d", &a, &b, &c);
    sort(a, b, c);

    return 0;
}

void sort(int a, int b, int c){
    int low, middle, high;
    if(a > b){
        if(a > c){
            if(b > c){
                high = a;
                middle = b;
                low = c;
            } else{
                high = a;
                middle = c;
                low = b;
            }
        }else{
            high = c;
            middle = a;
            low = b;high = c;
            middle = a;
            low = b;
        }
    }else if(b > c){
        if(c > a){
            high = b;
            middle = c;
            low = a;
        }else{
            high = b;
            middle = a;
            low = c;
        }
    }else if(a > b){
            high = c;
            middle = a;
            low = b;
        }else{
            high = c;
            middle = b;
            low = a;
        }
    printf("The three numbers given in ascending order is %d %d %d", low, middle, high);
}