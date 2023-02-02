#include<stdio.h>

main()
{ int i,k,j,s;
		
	 	for(i=5;i>=1;i--){
	 		
	 		for(s=1;s<=5-i;s++){
	 			printf(" ");
			 }
			 for(j=i;j>=1;j--){
			 	if(j%2==1){
				 
			 		printf("1");
			 	}
			 	else{
			 		printf("0");
				 }
				 }
			 
			 
			 printf("\n");
		 }
		 		
		 		
	
	
}




