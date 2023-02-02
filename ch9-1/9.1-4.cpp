#include<stdio.h>
main()
{int n;
	printf("enter the size of array :");
	scanf("%d",&n);
	
int a[n],b[n],c[n],i;
	for(i=0;i<n;i++){
		printf("enter a[%d] :",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		printf("enter b[%d] :",i);
		scanf("%d",&b[i]);
		
	}
	
		
	
	for(i=0;i<n;i++){
		printf("a[%d]: %d\n",i,a[i]);
	}	
		for(i=0;i<n;i++){
		printf("b[%d]: %d\n",i,b[i]);
	}
	
	for(i=0;i<n;i++){
		printf("c[%d] : a[%d]+b[%d]\n",c[i]=a[i]+b[i]);
	}
}


