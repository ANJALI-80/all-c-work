#include<stdio.h>
main()
{ int r,c;
	printf("enter value of row : ");
	scanf("%d",&r);
	printf("enter valur of column : ");
	scanf("%d",&c);
	
	int a[r][c],i,j;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("enter a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				printf("%d",a[i][j]);
				
			}
			printf("\n");
		}
		
		for(i=0;i<r;i++){
			
			int sum=0;
			for(j=0;j<c;j++){
				sum=sum+a[i][j];
			}
		
				printf("sum of column   : %d\n",sum);
	}
}

