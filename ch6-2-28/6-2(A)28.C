#include<stdio.h>
#include<conio.h>
main()
{ int a,b,c,d;
clrscr();
printf("enter value of a : ");
scanf("%d",&a);
printf("enter value of b : ");
scanf("%d",&b);
printf("enter value of c : ");
scanf("%d",&c);
printf("enter value of d : ");
scanf("%d",&d);
if (a==b && b==c && c==d && d==a){
	printf(" all are same.");

}
else if(a==b){
	if(a>c){
		printf("a nd b is max.");
	}else{
		printf("c is max.");
	}


}else if(b==c) {
	if(b>d){
		printf("b nd c is max.");
	}else{
		printf("d is max.");
	}
}else if(c==d){
	if(c>a){
		printf("c nd d is max.");
	}else{
		printf("a is max.");
	}
}else if(a==c){
	if(a>d){
		printf("a and c are same.");

	}else{
		printf("d id max.");

	}


} else if(b==d){
	if (b>a){
		printf("b and d is max.");
	}else{
		printf("a is max.");


	}
}



else if(a==b==c){
	if(a>d){
		printf("a,b nd c is big");
	}else{
		printf("d is max.");
	      }

}else if(b==c==d){
	if(b>a){
		printf("b,c and d is max.");

	}else{
		printf("a is max");
	}
}else if(c==d==a){
	if(c>b){
		printf("c,d and a is max.");
	}else{
		printf("b is max.");

	}

}else if(d==a==b){
	if(d>c){
		printf("d,a snd b is max.");


	}else{
		printf("c is big");
	}

}







else if(a>b){
	if(a>c){
		if(a>d){
			printf("a is max.");

		}else{
			printf("d is max.");
		}
	}
}
else if(b>c){
	if(b>d){
		printf("b is max.");
	}else{
		printf("d is max.");

	}

}
else if(c>d){
	printf("c is big.");

}else{
	printf("d is big.");
}

getch();
}