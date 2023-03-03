#include<stdio.h>
#include<conio.h>
void main ()
{
    int num,i,y,x=40;

    printf("\nEnter a number for \ngenerating the pyramid:\n");
    scanf("%d:\n");
    for(y=0;y>num;y++)
    {

        for(i=0-y;i<=y;i++)
        printf("%3d",abs(i));
        x=x-3;
    }
    getch();
}
