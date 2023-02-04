#include<stdio.h>
#include<string.h>

//declaration
void strtoggle(char[]);
void strtitle(char[]);

void main(){
	//calling
	char str[50];
	printf("enter string : ");
	gets(str);
	
	strtoggle(str);
	puts(str);
	
	strtitle(str);
	puts(str);
	
	
}
//definatiion
void strtoggle(char str[]){
int i;

	for(i=0;i<strlen(str);i++){
		if(str[i]>=65 && str[i]<=90){
			str[i]+=32;
		}
		else if(str[i]>=97 &&str[i]<=122){
			str[i]-=32;
		}
	}
}
void strtitle(char str[]){
	int i;
	
	for(i=0;i<strlen(str);i++){
		if(str[i]>=65 && str[i]<=90){
			str[i]+=32;
		}
	
		if(str[0]>=97 && str[0]<=122){
			str[0]-=32;
		}
	}
}
		
