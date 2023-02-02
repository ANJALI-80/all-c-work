#include<stdio.h>

main()
{
int i,j,n;
	printf("enter number : ");
	scanf("%d",&n);
	int k=1;

	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
				if(k%2==1){
				
					printf("-");
				}
				else{
					printf("|");
				}
				k=!k;
		}
			printf("\n");	
	}	
	
}



