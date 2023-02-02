#include<stdio.h>
#include<conio.h>
main()
{ int a,bill=0;

start:

clrscr();

	printf("enter 1 for gujarti dish\n");
	printf("enter 2 for chiness dish\n");
	printf("enter 3 for panjabi dish\n");
	printf("enter 4 for cold drinks\n");
	scanf("%d",&a);

	clrscr();

	switch(a){
		case 1:
			printf("you have ordered gujarati dish\n");
				bill +=300;
				printf("enter 1 for more order\n");
				printf("enter 0 for bill\n");
				printf("enter your choice : ");
				scanf("%d",&a);
				if (a==1){
				goto start;
			}
			 break;

		case 2:


				printf("\nenter 1 for manchurian	:	\t\t 130");
				printf("\nenter 2 for momos	:	\t\t 100");
				printf("\n enter 3 for noodle	:	\t\t 100");
				printf("\nenter your choice	:	");
				scanf("%d",&a);
		 switch(a){
			case 1:
				printf("you have ordered manchurian\n");
				bill +=130;

				printf("enter 1 for more order\n");
				printf("enter 0 for bill\n");
				printf("enter your choice : ");
				scanf("%d",&a);
				if (a==1){
				goto start;

				}
				break;

			case 2:
				printf("you have ordered momos\n");
				bill +=100;

				printf("enter 1 for more order\n");
				printf("enter 0 for bill\n");
				printf("enter your choice : ");
				scanf("%d",&a);

				if (a==1){
				goto start;
				}
				break;

			 case 3:
				printf("you have ordered noodles\n");
				bill +=100;

				printf("enter 1 for more order\n");
				printf("enter 0 for bill\n");
				printf("enter your choice : ");
				scanf("%d",&a);

				if (a==1){
				goto start;
				}
				break;
				}
	   clrscr();

		case 3:
				printf("enter 1 for kajukari  	 	:       \t\t\t 240");
				printf("\nenter 2 for angara paneer	:	\t\t 300");
				printf("\n enter 3 for paneer bhurji	:	\t\t 250 ");
				printf("\nenter your choice 	:	");
				scanf("%d",&a);

			switch(a){
			case 1:
				printf("you have ordered kajukari\n");
				bill +=240;

				printf("enter 1 for more order\n");
				printf("enter 0 for bill\n");
				printf("enter your choice : ");
				scanf("%d",&a);
				if (a==1){
				goto start;

				}
				break;

			case 2:
				printf("you have ordered angara paneer\n");
				bill +=300;

				printf("enter 1 for more order\n");
				printf("enter 0 for bill\n");
				printf("enter your choice : ");
				scanf("%d",&a);

				if (a==1){
				goto start;
				}
				break;

			 case 3:
				printf("you have ordered paneer bhurji\n");
				bill +=250;

				printf("enter 1 for more order\n");
				printf("enter 0 for bill\n");
				printf("enter your choice : ");
				scanf("%d",&a);

				if (a==1){
				goto start;
				}

				}
	  clrscr();

	      case 4:
				printf("\nenter 1 for coca cola	:	\t\t20");
				printf("\nenter 2 for maza	:	\t\t20");
				printf("\nenter 3 for sprite	:	\t\t20");
				printf("\n\nenter your choice	:	");
				scanf("%d",&a);

			switch(a){
			case 1:
				printf("you have ordered coca cola\n");
				bill +=20;

				printf("enter 1 for more order\n");
				printf("enter 0 for bill\n");
				printf("enter your choice : ");
				scanf("%d",&a);
				if (a==1){
				goto start;

				}
				break;

			case 2:
				printf("you have ordered maza\n");
				bill +=20;

				printf("enter 1 for more order\n");
				printf("enter 0 for bill\n");
				printf("enter your choice : ");
				scanf("%d",&a);

				if (a==1){
				goto start;
				}
				break;

			 case 3:
				printf("you have ordered sprite\n");
				bill +=20;

				printf("enter 1 for more order\n");
				printf("enter 0 for bill\n");
				printf("enter your choice : ");
				scanf("%d",&a);

				if (a==1){
				goto start;
				}

				}


	}
	printf("bill : %d\n",bill);
	printf("thank you!!\n visit again__/\\__");


getch();
}