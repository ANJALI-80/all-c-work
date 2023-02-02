#include<stdio.h>
#include<conio.h>
main()
{int a,b,c;
clrscr();
printf("enter value of a :");
scanf("%d",&a);
printf("enter value of b :");
scanf("%d",&b);
printf("enter value of c :");
scanf("%d",&c);
(a<b)
	?(a,c)
		?printf("a is small.")
		:printf("b is small.")
	:(b<c)
		?printf("b is small.")
		:printf("c is small.");

		getch();




}