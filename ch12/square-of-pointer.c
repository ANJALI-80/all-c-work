#include<stdio.h>
void input(int*);
void square(int*);
void main(){
	
	int x;
	input(&x);
	square(&x);
}

void input (int *p){
	printf ("enter number ; ");
	scanf("%d",p);
}

void square(int *x){
	
	printf("square of :%d",*x * *x);
}
