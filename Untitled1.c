#include<stdio.h>

void minmax(int n1,int n2);

int main ()

{

 int a,b;

 printf("Enter the first no:");

 scanf("%d",&a);

 printf("ENter the second no :");

 scanf("%d",&b);

 minmax(a,b);

 return 0;

}

void minmax(int n1,int n2)

{

 if(n1>n2)

 {

 printf("Maximum is : %d\n",&n1);

 printf("Minimun is :%d\n",&n2);

 }

 else

 {



 printf("Maximum is : %d\n",&n2);

 printf("Minimun is :%d\n",&n1);

 }

}
