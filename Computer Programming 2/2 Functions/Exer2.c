#include <stdio.h>

void imperialToMetric(float, float);

int main(void){
    float foot, inch;
    printf("Enter height in feet and inches: ");
    scanf("%f %f", &foot, &inch);
    imperialToMetric(foot, inch);

    return 0;
}

void imperialToMetric(float x, float y){
    float meter;
    meter = x * 0.3048f + y * 0.0254f;
    printf("Your height in meters is: %.2fm", meter);
}