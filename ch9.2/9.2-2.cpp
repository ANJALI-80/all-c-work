#include<stdio.h>
main()
{ int r,c;
	printf("enter value of row : ");
	scanf("%d",&r);
	printf("enter valur of column : ");
	scanf("%d",&c);
	
	int a[r][c],i,j,sum1,sum2;
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
			sum1=sum1+a[i][j];
				printf(" sum of a : %d",sum1);
		
		
		}
			
}

