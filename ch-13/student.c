#include<stdio.h>

struct student{
	
	int id;
	char name[20];
	int age;
	char course[20];
	char city[20];
	int std;
	char school[20];
	
};

void main(){
	int n,i;
	
	printf("enter number of student : ");
	scanf("%d",&n);
	struct student s[n];
	for(i=0;i<n;i++){
		printf("\nstudent : %d/%d\n\n",i+1,n);
		
		
		
		printf("enter name\t:");
		scanf("%s",&s[i].name);
		
		printf("enter course\t:");
		scanf("%s",&s[i].course);
		
		printf("enter city\t:");
		scanf("%s",&s[i].city);
		
		printf("enter school\t:");
		scanf("%s",&s[i].school);
		
		printf("enter id\t:");
		scanf("%d",&s[i].id);
		
		printf("enter age\t:");
		scanf("%d",&s[i].age);
		
		printf("enter std\t:");
		scanf("%d",&s[i].std);
		
		printf("\n");
		
	
	}
	
	for(i=0;i<n;i++){
	
	printf("\nname\t:%s\ncourse\t:%s\ncity\t:%s\nschool\t:%s\nid\t:%d\nage\t:%d\nstd\t:%d\n\n",s[i].name,s[i].course,s[i].city,s[i].school,s[i].id,s[i].age,s[i].std);
	
	

}
}
