#include <stdio.h>

int main(void) {
    float radius = 10.0f;
    float volume;

    volume = (4.0f/3.0f) * 3.14159 * (radius * radius * radius);

    printf("The volume of a sphere with a 10-meter radius is %f m^3", volume);

    return 0;
}