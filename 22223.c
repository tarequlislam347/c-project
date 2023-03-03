#include <stdio.h>

#define PI 3.1416
void main()
{
float radius, area;
printf("Enter the value for radius:\n");

scanf("%f",&radius);

area = PI * radius * radius ;
printf("%f", & area);

getch();
}
