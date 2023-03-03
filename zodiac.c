#include<stdio.h>

int main()
{
    int year;
    cout<<"Enter the year of your birth: ";
    cin>>year;
    switch(year%12)
    {
        case 0:
            cout<<"Monkey Year";
            break;
        case 1:
            cout<<"Rooster Year";
            break;
        case 2:
            cout<<"Dog Year";
            break;
        case 3:
            cout<<"Pig Year";
            break;
        case 4:
            cout<<"Rat Year";
            break;
        case 5:
            cout<<"Ox Year";
            break;
        case 6:
            cout<<"Tiger Year";
            break;
        case 7:
            cout<<"Rabbit Year";
            break;
        case 8:
            cout<<"Dragon Year";
            break;
        case 9:
            cout<<"Snake Year";
            break;
        case 10:
            cout<<"Horse Year";
            break;
        case 11:
            cout<<"Sheep Year";
            break;
    }
    return 0;
}
