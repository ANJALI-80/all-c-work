#include<stdio.h>

main()
{ int i,k,j,s;
		
	 	for(i=1;i<=5;i++){
	 		
	 		for(s=1;s<=5-i;s++){
	 			printf(" ");
			 }
			 for(j=1;j<=i;j++){
			 	if(i%2==1){
				 
			 		printf("1");
			 	}
			 	else{
			 		printf("0");
				 }
				 }
			 
			 
			 printf("\n");
		 }
		 		
		 		
	
	
}





