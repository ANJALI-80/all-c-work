#include<stdio.h>
main()
{ int r,c;
	printf("enter value of row : ");
	scanf("%d",&r);
	printf("enter valur of column : ");
	scanf("%d",&c);
	
	int a[r][c],i,j,sum=0,b[r][c];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("enter a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				
					sum=sum+a[i][j];
					printf("%d",a[i][j]);
			}
			printf("\n");
			
			printf(" sum of first array : %d",a[i][j]);
}
		for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("enter b[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				
					sum=sum+b[i][j];
					printf(" %d",b[i][j]);
				}
			printf("\n");
			}
			
		
			
}
