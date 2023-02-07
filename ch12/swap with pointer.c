#include<stdio.h>

void page1();
void input(int*);
void swap(int*,int*);

void main(){
	page1();
}

void page1(){
	int a,b;
	
		input(&a);
		input(&b);
		
		swap(&a,&b);
		
		printf("a: %d\n",a);
		printf("b: %d\n",b);
		
}

void input(int *p){
	printf("enter number :");
	scanf("%d",p);
}

void swap(int *a,int *b){
	
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

