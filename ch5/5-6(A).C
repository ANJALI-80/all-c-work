#include<stdio.h>
#include<conio.h>
main()
{int x=5,y=10,z=15,a;
clrscr();
a=(x*x*x)-(y*y*y)-(z*z*z)-3*(x*x*y)+3*(x*y*y)-3*(y*y*z)-3*(x*z*z)-3*(x*x*z)+6*(x*y*z);
printf("a:%d",a);
getch();



}