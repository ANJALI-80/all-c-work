#include<stdio.h>
main()
{
	char str[20];
	printf("enter name :");
	scanf("%[^\n]",&str);
	
	
	int a,i;
	for(i=0;str[i]!='\0';i++){
		
			if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122)){
				
				if(i==0 ||str[i-1]=='i'){
					
					if(str[i]>=97 && str[i]<=122){
						str[i]-=32;
					}	
				}
				else{
					if(str[i]>=65 && str[i]<=90){
						str[i]+=32;
				}
			}
		}
	}
				
			printf("string : %s",str);

}
