#include<stdio.h>

main()
{
int i,j,n;
	printf("enter number : ");
	scanf("%d",&n);
	int k=1;

	for(i=n;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("%d",k);
			k=!k;
	}
			printf("\n");	
	}	
		
}



