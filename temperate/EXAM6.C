#include<stdio.h>
#include<conio.h>
main()
{ int i=1,n,fact=1;
clrscr();
	printf("enter number : ");
	scanf("%d",&n);
	while (i<=n){
	fact=fact*i;
	i++;

	}
	printf("fact of :%d",fact);


getch();
}