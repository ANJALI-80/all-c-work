#include<stdio.h>
main()
{int n;
	printf("enter value  : ");
	scanf("%d",&n);
	
	int a[n],b[n],c[n+n],i;
	for	(i=0;i<n;i++){
		printf("a[%d] :",i);
		scanf("%d",&a[i]);
		
	}
	for	(i=0;i<n;i++){
		printf("b[%d] :",i);
		scanf ("%d",&b[i]);
	}
	
	for	(i=0;i<n;i++){
		c[i]=a[i];
	}
	for (i=0;i<n;i++){
		c[i+n]=b[i];
	}
	for (i=0;i<n;i++){
		printf("c[%d] %d\n",i+n,a[i]);
		
	}
	for (i=0;i<n;i++){
		printf("c[%d] %d\n",i+n,b[i]);
		
	}
	
	
	
	
	
	}
