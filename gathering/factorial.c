#include<stdio.h>
//recursion function

//factorial 5*4*3*2*1

//declaration

int fact(int);
void main(){
	int n, result;
	 printf("enter value :");
	 scanf("%d",&n);
	 
	 //calling
	 
	 result=fact(n);
	 printf("factorial of  %d : %d",n,result);
}

//defination
//according to the rulse,if user puts 0,1 or any big number in mins,the ans will be 1.

int fact (int n){
	if(n<=1){
		return 1;
	}
	
	else{
		return n*fact(n-1);
	}
}
