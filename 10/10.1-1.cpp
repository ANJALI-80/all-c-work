#include<stdio.h>
main()
{
	char a;
	printf("enter charctor :");
	scanf("%c",&a);
		
	if(a>=65 && a<=90){
		a+=32;
	}
	else{
		printf(" ");
	}
	printf("a : %c",a);
}
