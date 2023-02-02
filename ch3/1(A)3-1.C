#include<stdio.h>
#include<conio.h>
main()
{int a,b,c;
clrscr();
printf("enter a and b:");
scanf("%d%d",&a,&b);
c=a ;
a=b  ;
b=c   ;
printf("a:%d\nb:%d",a,b);
getch();



}