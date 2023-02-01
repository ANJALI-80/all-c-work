#include<stdio.h>
main()
{
	char a;
	printf("enter charctor :");
	scanf("%c",&a);
		
	if(a>=97 && a<=122){
		a-=32;
	}
	else{
		printf(" ");
	}
	printf("a : %c",a);
}
