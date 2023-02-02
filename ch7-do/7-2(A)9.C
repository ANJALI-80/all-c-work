#include<stdio.h>
#include<conio.h>

main()
{int i=1,n, fact;
clrscr();
	printf("enter value : ");
	scanf("%d",&n);
	do{
		printf("%d\n",i,n);
		i++;
		}
		while(i<=n);

		fact=fact*i;

	printf(" fact of :  %d \n value of : %d",n,fact);

getch();
}
