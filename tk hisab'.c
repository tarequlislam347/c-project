//if I have n taka. In this n amount of money how many notes of different taka is there calculate.
#include<stdio.h>
int main()
{
	int n, ths, hnds, tens, fives, twos, ones;
	printf("Enter the amount of money in taka: ");
	scanf("%d", &n);
	ths = n/1000;
	hnds = (n%1000)/500;
	tens = ((n%1000)%500)/100;
	fives = (((n%1000)%500)%100)/50;
	twos = ((((n%1000)%500)%100)%50)/20;
	ones = (((((n%1000)%500)%100)%50)%20)/1;
	printf("\n1000 taka notes: %d\n500 taka notes: %d\n100 taka notes: %d\n50 taka notes: %d\n20 taka notes: %d\n1 taka coins: %d\n", ths, hnds, tens, fives, twos, ones);

	return 0;
}

