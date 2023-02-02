#include<stdio.h>
main()
{int n;
	printf("enter the size of array :");
	scanf("%d",&n);
	
int a[n],i,sum=0;
float avg=0;
	for(i=0;i<n;i++){
		printf("enter a[%d]:",i+1);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
		avg=(float)sum/(float)n;
		
	for(i=0;i<n;i++){
		printf("a[%d]: %d\n",i+1,a[i]);
	}
	printf("sum of : %d\n",sum);
	printf("percentage : %.2f",avg);
			
}
