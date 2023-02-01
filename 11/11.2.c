#include <stdio.h>
//declaration
void div();
void main(){
	
	//calling
	div();
}

//defination
void div (){

int a;
printf("enter a :");
scanf("%d",&a);

	if(a%3==0 && a%5==0){
		printf("it can divide by both .");
	}
	else{
		printf("it can't divide by 5 and 3 .");
}
}
