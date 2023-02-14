#include<stdio.h>

struct employee{
	
	int id;
	char name[20];
	int age;
	char role[20];
	char city[20];
	char experience[20];
	char company_name[20];
	
};

void main(){
	int n,i;
	
	printf("enter number of employee : ");
	scanf("%d",&n);
	struct employee e[n];
	for(i=0;i<n;i++){
		printf("\nstudent : %d/%d\n\n",i+1,n);
		
		
		
		printf("enter name\t:");
		scanf("%s",&e[i].name);
		
		printf("enter role\t:");
		scanf("%s",&e[i].role);
		
		printf("enter city\t:");
		scanf("%s",&e[i].city);
		
		printf("enter company_name\t:");
		scanf("%s",&e[i].company_name);
		
		printf("enter id\t:");
		scanf("%d",&e[i].id);
		
		printf("enter age\t:");
		scanf("%d",&e[i].age);
		
		printf("enter experience\t:");
		scanf("%s",&e[i].experience);
		
		printf("\n");
		
	
	}
	
	for(i=0;i<n;i++){
	
	printf("\nname\t\t:%s\nrole\t\t:%s\ncity\t\t:%s\ncompany_name\t:%s\nid\t\t:%d\nage\t\t:%d\nexpeience\t:%s\n\n",e[i].name,e[i].role,e[i].city,e[i].company_name,e[i].id,e[i].age,e[i].experience);
	
	

}
}

