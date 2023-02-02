#include<stdio.h>
main()
{
	int r,c;
	printf("enter value of row : ");
	scanf("%d",&r);
	printf("enter value of column : ");
	scanf("%d",&c);
	
	int a[r][c],i,j,sum=0;
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("enter a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
    }
    
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(i==j || i+j==r-1){
				sum=sum+a[i][j];
					printf("%d",a[i][j]);
			}
			else {
				printf(" ");
			}
		
		}
		printf("\n");

}	printf("sum of cross digonal matrix :%d ",sum);
	
	

	
	
}
