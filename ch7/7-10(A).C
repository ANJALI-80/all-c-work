#include<stdio.h>
#include<conio.h>
main()
{int i=1,n;
clrscr();
printf("enter number : \n");
scanf("%d",&n);
	while(i<=10){
	printf("%d * %d  : %d\n",i,n,n*i);
	i++;
	}
getch();


}