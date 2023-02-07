
#include<stdio.h>
//declaration

int lenofstring(char str[]);
int main()
{
	char str[50];
	int length;
		printf("enter your string : ");
		scanf("%s",&str);
	//calling
	
	length = lenofstring(str);
	
		printf("length off array by udf : %d",length);
		
		return (0);
}
//defination

int lenofstring(char str[]){
	
	int len = 0;
   while (str[len] != '\0')
      len++;
   return (len);
	
}


