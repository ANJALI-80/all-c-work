#include<stdio.h>
#include<string.h>
main()
{
	char a[20];
	char b[20];
	int i,c=0;
	printf("enter name : ");
	gets(a);
	
	strcpy(b,a);
	strrev(a);
	
	c=strcmp(a,b);
	
	if(c==0){
		printf("string\t : ");
		puts(b);
		printf("string\t : ");
		puts(a);
	
		printf("its palindrom");
	}
	else{
		printf("string\t : ");
		puts(b);
		printf("string\t : ");
		puts(a);
		printf("its not palindrom");
	}
	
}

