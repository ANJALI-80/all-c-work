#include<stdio.h>
#include<conio.h>
main()
{int a,b,c,d,e;
int max;
clrscr();
printf("enter value of a :");
scanf("%d",&a);
printf("enter value of b :");
scanf("%d",&b);
printf("enter value of c :");
scanf("%d",&c);
printf("enter value of d :");
scanf("%d",&d);
printf("enter value of e :");
scanf("%d",&e);
 max = a;
max = (b>max)? b:max;
max = (c>max)? c:max;
max = (d>max)? d:max;
max = (e>max)? e:max;

printf("\n   max is %d",max);
getch();
}
