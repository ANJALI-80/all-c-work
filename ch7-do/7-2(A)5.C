#include<stdio.h>
#include<conio.h>
main()
{int i=1,n;
clrscr();
	   printf("enter value :");
	   scanf("%d",&n);
		do{
			if(i%2==1)
			printf("%d\n",i);
			i++;
			}while(i<=n);

getch();
}
