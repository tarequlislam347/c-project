

#include <stdio.h>

int main()
{
    // Implicit type casting
    int a = 10;
    float b = a;

    printf("Implicit type casting :\n");
    printf("Integer value of a : %d\n", a);
    printf("Float value of b : %f\n", b);

    // Explicit type casting
    float c = 10.5;
    int d = (int)c;

    printf("Explicit type casting :\n");
    printf("Float value of c : %f\n", c);
    printf("Integer value of d : %d\n", d);

    return 0;
}
