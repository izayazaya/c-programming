#include <stdio.h>

void rectanglePerimeter();

int main(void){
    rectanglePerimeter();

    return 0;
}

void rectanglePerimeter(){
    float width, length, perimeter;
    printf("Enter the width and length of the rectangle: ");
    scanf("%f %f", &width, &length);
    perimeter = width * 2.00f + length * 2.00f;
    printf("The perimeter of the rectangle with %.2f width and %.2f length is: %.2f", width, length, perimeter);
}