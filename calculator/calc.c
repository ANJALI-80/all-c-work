#include<stdio.h>

//declaration
void calc();

void main(){

	//calling
	int a,b;
	printf("enter a : ");
	scanf("%d",&a);
	printf("enter b : ");
	scanf("%d",&b);
	
	calc(a,b);
	
	printf(" thanks for using our system : ");
}
//definatiion
void calc(a,b){
int choice;
do{

float d;
		printf("enter 1 for add .\n");
		printf("enter 2 for sub .\n");
		printf("enter 3 for mult .\n");
		printf("enter 4 for div .\n");
		printf("enter 5 for exit .\n");
		scanf("%d",&choice);
		
		switch(choice){
			
			case 1:
				printf("add  :%d",a+b);
				break;
				
			case 2:
				printf("sub : %d",a-b);
				break;
				
			case 3:
				printf("multi : %d",a*b);
				break;
				
			case 4:
				d=(float)a/(float)b;
				printf("div : %.2f",d);
				break;
				
			case 5:
				break;	
				
			default :
				printf("please enter right choice :");
				break;
				
		}
		printf("\n");
		
	}while(choice!=5);
}

