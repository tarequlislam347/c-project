#include<stdio.h>
#define pi 3.1416
int main()
{
 int radius;
 float area;
 printf("enter radius: ");
 scanf("%d",&radius);
 area=(pi*radius*radius);

 printf("Area is= %f",area);

 return 0;
}
