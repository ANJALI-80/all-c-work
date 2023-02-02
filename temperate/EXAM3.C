#include<stdio.h>
#include<conio.h>
main()
{int i=0,n;
clrscr();
	printf("enter number : ");
	scanf("%d",&n);
	while (n!=0){
	n/=10;
	i++;

	}
	printf("numer of digit :%d",i);


getch();
}