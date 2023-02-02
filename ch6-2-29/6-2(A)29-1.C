#include<stdio.h>
#include<conio.h>
main()
{int a,b,c,d;
clrscr();
printf("enter value of a :");
scanf("%d",&a);
printf("enter value of b :");
scanf("%d",&b);
printf("enter value of c :");
scanf("%d",&c);
printf("enter value of d :");
scanf("%d",&d);
 (a>b)
	?(a>c)
		?(a>d)
			?printf("a is big.")
			:printf("d is big.")
			 :(c>d)
				?printf("c is big")
				:printf("d is big")
	:(b>c)
		?(b>d)
			?printf("b is big")
			:printf("d is big")


			:(c>d)
				?printf("c is big.")
				:printf("d is big.");
				getch();


  }