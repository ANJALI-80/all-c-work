#include<stdio.h>
main()
{ int n;
	printf("enter value of : ");
	scanf("%d",&n);
	
	
	int a[n],i;
	for(i=0;i<n;i++){

			printf("enter a[%d] : ",i);
			scanf("%d",&a[i]);
		}
	
		for(i=0;i<n;i++){
			if(a[i]<0){
					printf("negetive elements of : %d\n",a[i]);
				}
			else {
				printf(" ");
			}
			
		}
		printf("\n");
}

