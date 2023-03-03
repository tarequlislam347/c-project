// If the number of days are given as n days then how many days, months, years are there calculate

#include <stdio.h>
int main()
{
    int n;
    int years, months, days;
    printf("Enter the number of days: ");
    scanf("%d", &n);

    years = n / 365;
    months = (n % 365) / 30;
    days = (n % 365) % 30;

    printf("Years = %d, Months = %d, Days = %d\n", years, months, days);

    return 0;
}
