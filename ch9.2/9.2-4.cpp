#include<stdio.h>
main()
{ int r,c;
	printf("enter value of row : ");
	scanf("%d",&r);
	printf("enter valur of column : ");
	scanf("%d",&c);
	
	int a[r][c],b[r][c],i,j,sum1=0,sum2=0,d;
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("enter a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				printf("%d",a[i][j]);
				sum1=sum1 + a[i][j];
				
		}
		printf("\n");
}
					printf("sum of first array : %d\n\n\n",sum1);
		
	printf("enter value of row : ");
	scanf("%d",&r);
	printf("enter valur of column : ");
	scanf("%d",&c);
	
		for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("enter b[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				printf("%d",b[i][j]);
				sum2=sum2 + b[i][j];
				
		}
		printf("\n");
}
				
				
			printf("sum of second array : %d\n\n",sum2);
			
			d=sum1+sum2;
			printf("sum of a nd b : %d",d);
		
}

