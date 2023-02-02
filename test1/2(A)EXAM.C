#include<stdio.h>
#include<conio.h>
main()
{int a=2,b=3,c;
clrscr();
printf("enter value of a nd b =");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("a=%d\nb=%d",a,b);
getch();




}