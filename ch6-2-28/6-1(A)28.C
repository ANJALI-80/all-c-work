#include<stdio.h>
#include<conio.h>
main()
{int a,b,c;
clrscr();
printf("enter value of a : ");
scanf("%d",&a);
printf("enter value of b : ");
scanf("%d",&b);
printf("enter value of c : ");
scanf("%d",&c);
if (a==b,b==c,c==a){
	printf("all are same.");
}
else if (a==b){
	if(a<c){
		printf("a nd b is small");

	} else{
		printf("c is small.");
	}
}
else if (b==c){
	if (c<a){
		printf("b nd c are small.");
	}

	else{
		printf ("a is small");

	}
}
else if (a==c){
	if (a<b){
		printf("a and c are small.");
}
	else{
		printf("b is small");
	}
}
 else if (a<b){
	if(a<c){
		printf("a is samll.");

	}else {
	}      printf("c is small.");
}
else if(a<b) {
	if (b<c){
		printf("b is small.");

	}
	else {
		printf("c is small");


	}


}
       getch();
}





