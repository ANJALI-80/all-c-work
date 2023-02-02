
#include<stdio.h>
#include<conio.h>
main()
{ int i=1,n,sum=0;
clrscr();

	printf("enter value : ");
	scanf("%d",&n);

		for(i=1;i<=n;i++){
		 sum=sum+i;
		printf("%d\n",i);

	}
	printf(" sum : %d \n ",sum);

 getch();
}