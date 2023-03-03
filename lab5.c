#include <stdio.h>
#define PI 3.14159
int main()
{
    float radius, circumference;

    radius = 10;

    // Calculating circumference
    circumference = 2 * PI * radius;

    printf("Circumference of the circle = %f", circumference);
    return 0;
}
