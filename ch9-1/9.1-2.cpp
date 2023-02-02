#include<stdio.h>
main()
{int n;
	printf("enter the size of array :");
	scanf("%d",&n);
	
int a[n],i,c;
	for(i=0;i<n;i++){
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
		c=n;
	}
	for(i=0;i<n;i++){
		printf("a[%d]: %d\n",i,a[i]);
	}
		printf("length of : %d",c);
		
	}


