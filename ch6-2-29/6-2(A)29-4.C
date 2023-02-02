#include<stdio.h>
#include<conio.h>

main ()
{ char x;
clrscr();
printf("enter value of x : ");
scanf("%d",&x);
if (isupper(x)){

	printf("%c is uppercase.",x);


}else if(islower(x))
   {
      printf("%c is DIGIT. ",x);


   }else if(isdigit(x)){

	printf("%c is LOWERCASE. ",x);
      }
  else{
     printf("%c is spacial charctor : ",x);
  }



   getch();

  }


