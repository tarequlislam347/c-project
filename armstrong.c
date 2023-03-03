#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    for(i=1;i<=2000;i++)
    {
        int temp=i;
        double c =0;
        while(temp!=0)
        {
            temp=temp/10;
            c++;
        }
        double rem,cube = 0;
        temp = i;
        while(temp!=0)
        {
            rem = temp%10;
            cube = cube+pow(rem,c);
            temp = temp/10;
        }
        if(i == cube)
        {
            printf("%d  ",i);
        }
    }
    return 0;

}
