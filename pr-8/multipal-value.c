#include <stdio.h>

void compare(int a,int b,int *p,int *p1);
main()
{
	int a,b,g,s;
	printf("enter number : ");
	scanf("%d",&a);
	printf("enter number : ");
	scanf("%d",&b);
	
	compare(a, b, &g, &s);
	printf("The greater number is: %d\nthe smaller number is: %d",g,s);
}

void compare(int a, int b, int *p, int *p1){

	if(a > b) {
		
		*p = a;
		*p1 = b;
	}
	else {
		*p = b;
		*p1 = a;
	}
}
	




