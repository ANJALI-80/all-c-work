#include<stdio.h>
#include<conio.h>
main()
{ int i=1,n,sum=0,fact=1;
clrscr();

	printf("enter value : ");
	scanf("%d",&n);

		for(i=1;i<=n;i++){
		 sum=sum+i;
		 fact=fact*i;
		printf("%d\n",i);

	}
	printf(" \n fact of %d \n value of %d ",n,fact);

 getch();
}