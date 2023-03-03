#include<stdio.h>
#include<math.h>

int main()
{
 printf("@@AREA OF CIRCLE@@\n");
 int radius;
 float circle;
 printf("enter radius: ");
 scanf("%d",&radius);
 circle=(3.14*radius*radius);
 printf("Area of Circle is: %f\n", circle);


 printf("@@AREA OF TRIANGLE@@\n");
 int base,height;
 float triangle;
 printf("enter base: ");
 scanf("%d",&base);

 printf("enter height: ");
 scanf("%d",&height);

 triangle=(0.5*base*height);

 printf("Area of Triangle is: %f\n",triangle);


 printf("@@AREA OF RECTANGLE@@");
 int length,width;
 int rectangle;

 printf("enter length: ");
 scanf("%d",&length);

 printf("enter width: ");
 scanf("%d",&width);

 rectangle=(length*width);

 printf("Area of Rectangle is: %d\n",rectangle);


 printf("@@AREA OF SQUARE@@\n");
 int side;
 int square;
 printf("enter square: ");
 scanf("%d",&side);

 square=(side*side);

 printf("Area of Square is: %d\n",square);


 printf("@@CIRCUMFERENCE OF a CIRCLE@@\n");
 int r;
 float circumference;

 printf("enter r: ");
 scanf("%d",&r);

 circumference=(2*3.14*r);

 printf("Area of Circumference is: %f\n",circumference);

 return 0;
}
