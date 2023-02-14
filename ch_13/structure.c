#include<stdio.h>
#include<string.h>

struct subject {
	int maths;
	int ss;
	int sci;
	int eng;
	int guj;
	
};
struct student{
	int id;
	char name[20];
	struct subject sub;
	float per;
	char grade ;
};

void main(){
	
	int n, i;
	
	printf("enter numbers of students : ");
	scanf("%d",&n);
	
	struct student s[n];
	
	for(i=0;i<n;i++){
		
		printf("\nstudent %d/%d\n",i+1,n);
		
		printf("\nenter id\t\t:");
		scanf("%d",&s[i].id);
		
		printf("enter name\t\t:");
		scanf("%s",&s[i].name);
		
		
		printf("\nenter marks of maths\t:");
		scanf("%d",&s[i].sub.maths);
		
		printf("enter marks of ss\t:");
		scanf("%d",&s[i].sub.ss);
		
		printf("enter marks of sci\t:");
		scanf("%d",&s[i].sub.sci);
		
		printf("enter marks of eng\t:");
		scanf("%d",&s[i].sub.eng);
		
		printf("enter marks of guj\t:");
		scanf("%d",&s[i].sub.guj);
		
		s[i].per =((float)(s[i].sub.maths+s[i].sub.ss+s[i].sub.sci+s[i].sub.eng+s[i].sub.guj))/(float)5;
		
		if(s[i].per >=90 && s[i].per <=100){
			s[i].grade = 'a';
			
		}else if (s[i].per >=80 && s[i].per <=89){
			s[i].grade ='b';
			
		}else if(s[i].per >=70 && s[i].per<=79){
			
			s[i].grade ='c';
			
		}else if (s[i].per >=60 && s[i].per <= 69){
			s[i].grade ='d';
			
		}else if (s[i].per >=45 && s[i].per <=59){
			s[i].grade ='e';
			
		}else if (s[i].per >=33 && s[i].per <=44){
			s[i].grade ='e';
			
		}else if (s[i].per >=0 && s[i].per <= 32){
			s[i].grade ='F';
			
		}
	}
		
		printf("id\tname\tmaths\tss\tsci\teng\tguj\tper\tgrade\t\n");
		printf("_______ _______ _______ _______ _______ _______ _______ _______ _______ \n");
		
		for(i=0;i<n;i++){
		
		printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%d\t%.2f\t%c\t\n",s[i].id,s[i].name,s[i].sub.maths,s[i].sub.ss,s[i].sub.sci,s[i].sub.eng,s[i].sub.guj,s[i].per,s[i].grade);
		
	
	}
	
	
	
}
