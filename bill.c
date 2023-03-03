#include<stdio.h>
void main ()
{
    char category,type;
    int unit;
    float bill, totalbill;
    printf("Enter Category: \nA. Residential\nB. Agricultural Pumping:\nC. Industrial Area\n");
    scanf("%c",&category);
    printf("Consumed Unit: \n");
    scanf("%d",&unit);
    if(category=='A')
    {
        printf("Residential Area\n");
        if(unit>=0 && unit<=75)
        {
            bill=unit*3.80;
        }
        else if(unit>=76 && unit<=200)
        {
            bill=unit*5.36;
        }
        else if(unit>=301 && unit<=400)
        {
            bill=unit*5.63;
        }
        else if(unit>=401 && unit<=600)
        {
            bill=unit*8.70;
        }
        else if(unit>=601)
        {
            bill=unit*9.98;
        }
        else
        {
            printf("Invalid");
        }
        totalbill=bill+bill*0.2;
    }
    else if(category=='B')
    {
        printf("Industrial Area\nEnter Type\nA.Flat Rate\nB.Off Peak Rate");
        scanf("%c",&type);
        if(type =='A')
        {
            totalbill=unit*7.66;
        }
        else if(type =='B')
        {
            totalbill=unit*9.24;
        }
        else
        {
            printf("Invalid");
        }
    }
    else
    {
        printf("Invalid");
    }
    printf("Electricity Bill = f",totalbill);
}
