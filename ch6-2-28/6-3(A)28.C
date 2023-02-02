#include<stdio.h>
#include<conio.h>
main()
{ int a,b,c,d,e;
clrscr();
	printf("enter value of a :");
	scanf("%d",&a);
	printf("enter value of b :");
	scanf("%d",&b);
	printf("enter value of c :");
	scanf("%d",&c);
	printf("enter value of d :");
	scanf("%d",&d);
	printf("enter value of e :");
	scanf("%d",&e);

if(a==b,b==c && c==d && d==e && e==a){
	printf("all are same .");

 }
 else if(a==b){
	if(a>c){
		printf("a and b is big.");
	}else{
		printf("c is big.");
	}

 }
 else if(b==c){
	if(b>d){
		printf("b and c is big.");
	}else{
		printf("d is big.");
	}

 }
 else if(c==d){
	if(c>e){
		printf("c and d is big.");
	}else{
		printf("e is big.");
	}

 }
 else if(d==e){
	if(d>a){
		printf("d and e is big.");
	}else{
		printf("a is big.");
	}

 }
 else if(e==a){
	if(e>b){
		printf("e anda  is big.");
	}else{
		printf("b is big.");
	}

 }
 else if(b==d){
	if(b>e){
		printf("b and d is big.");
	}else{
		printf("e is big.");
	}

 }
 else if(c==e){
	if(c>a){
		printf("c and e is big.");
	}else{
		printf("a is big.");
	}

 }
 else if(a==c){
	if(a>d){
		printf("a and c is big.");
	}else{
		printf("d is big.");
	}

 }
 else if(b==e){
	if(b>a){
		printf("b and e is big.");
	}else{
		printf("a is big.");
	}

 }
 else if(a==d){
	if(a>e){
		printf("a and d is big.");
	}else{
		printf("e is big.");
	}

 }

 else if(a==b==c){
	if(a>d){
		printf("a,b and c is big.");

	}else{
		printf("d is big.");
	}

 }
 else if(b==c==d){
	if(b>e){
		printf("b,c and d is big.");

	}else{
		printf("e is big.");
	}

 }
 else if(c==d==e){
	if(c>a){
		printf("c,d and e is big.");

	}else{
		printf("a s big.");
	}

 }
 else if(d==e==a){
	if(d>b){
		printf("d,e and a is big.");

	}else{
		printf("b is big.");
	}

 }
 else if(e==a==b){
	if(e>c){
		printf("e,a and b is big.");

	}else{
		printf("c is big.");
	}

 }
 else if(a==b==c==d){
	if(a>e){
		printf("a,b,c and d is big.");

	}else{
		printf("e is big.");
	}

 }
 else if(b==c==d==e){
	if(b>a){
		printf("b,c,d and e is big.");

	}else{
		printf("a is big.");
	}

 }
 else if(c==d==e==a){
	if(c>b){
		printf("c,d,e and a is big.");

	}else{
		printf("b is big.");
	}

 }
 else if(d==e==a==b){
	if(d>c){
		printf("d,e,a and b is big.");

	}else{
		printf("c is big.");
	}

 }
 else if(e==a==b==c){
	if(e>d){
		printf("e,a,b and c is big.");

	}else{
		printf("d is big.");
	}

 }
 else if(a>b){
	if(a>c){
		if(a>d){
			if(a>e){
				printf("a is big.");
			}else{
				printf("e is big.");
			}
		}
	}


 }

 else if(b>c){
	if(b>d){
		if(b>e){
			printf("b is big.");
		}else{
			printf("e is big.");

		}
	}

 }
else if(c>d){
	if(c>e){
	       printf("c is big.");
	}else{
	       printf("e is big.");
	      }
}
else if(d>e){
	   printf("d is big.");
	   }
	  else{
	   printf("b is big");

}



getch();
}