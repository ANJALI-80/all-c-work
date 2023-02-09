#include<stdio.h>

void main(){

	int n;
	printf("enter your value :");
	scanf("%d",&n);
	
	int a[n],i;
	
	for(i=0;i<n;i++){
		printf("a[%d] :",i);
		scanf("%d",&a[i]);
	}
	int *p[n];
	
	for(i=0;i<n;i++){
		p[i] = &a[i];
	}
	
	printf("\n");
	for(i=n-1;i>=0;i--){
		printf("revers a[%d] : %d\n",i,*p[i]);
	}
	
}


