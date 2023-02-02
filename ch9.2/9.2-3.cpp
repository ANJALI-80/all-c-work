#include<stdio.h>
main()
{ int r,c;
	printf("enter value of row : ");
	scanf("%d",&r);
	printf("enter valur of column : ");
	scanf("%d",&c);
	
	int a[r][c],i,j,sum=0,rc;
	float avg;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("enter a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				printf("%d",a[i][j]);
				sum=sum + a[i][j];
		}
		printf("\n");
	
			
			}
			rc=r*c;
			avg = (float)sum/(float)rc;
			
				printf(" sum of array : %d \n",sum);
				printf("average of array : %.2f",avg);
				
			
		
		
}

