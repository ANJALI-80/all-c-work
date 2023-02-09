#include<stdio.h>
#include<string.h>

 
void main() {
   char str[20];
   int *p;
   
   printf("Enter any string :  ");
   gets(str);

   p = strlen(str);
      
   

   printf("The length of the given string is : %d", p);

}

