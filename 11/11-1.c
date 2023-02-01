#include <stdio.h>
//declaration
void cube();
void main(){
	
	//calling
	cube();
}

//defination
void cube (){

int a;
printf("enter a :");
scanf("%d",&a);
printf("cube : %d",a*a*a);
}
