#include<stdio.h>
#include<conio.h>
main()
{int i=1,n,sum=0;
clrscr();
	   printf("enter value :");
	   scanf("%d",&n);
		do{

			printf("%d\n",i);
			i++;
			sum=sum+i;
			}while(i<=n);

	     printf("%d sum :\n %d",sum);


getch();
}