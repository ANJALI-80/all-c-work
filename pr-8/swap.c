#include<stdio.h>
 main()
{
	int a=10,b=20;
	int *p1,*p2;
	
	p1=&a;
	p2=&b;
	
	printf("valude of a=%d and b=%d\n",a,b);
	
	*p1=*p1+*p2;
	*p2=*p1-*p2;
	*p1=*p1-*p2;
	printf("swap variable :\na:%d\nb:%d :",*p1,*p2);
}
