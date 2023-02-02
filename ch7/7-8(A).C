#include<stdio.h>
#include<conio.h>
main()
{int i=1,n,sum=0;
clrscr();
printf("enter number : ");
scanf("%d",&n);
	while(i<=n){
	printf("%d\n",i,n);
	i++;
	sum=sum+i;
	}
	printf("\nsum of %d\nvalue : %d",n,sum);
getch();


}