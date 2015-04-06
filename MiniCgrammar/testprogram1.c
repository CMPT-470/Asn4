#include<stdio.h>

/* Author: Taylor Wiebee
   Date: yyyy/mm/dd
   Description:
   writes a story about a person */

int main()
{
   int i,j,result;
   char op;
   
   printf("pick a number\n");
   scanf("%d",i);
   printf("pick another number\n");
   scanf("%d",j);
   printf("pick an operation:\n a) *\n b) +\n c)-\nd)/");
   scanf("%c",op);
   
   switch(op)
  {
   case 'a':
     printf("a * b\n");
   break;
   case 'b':
      printf("a + b\n");
   break;
   case 'c':
      printf("a - b\n");
   break;   
   case 'd':
      printf("a / b\n");
   break;   
   default:
      printf("invalid operation");

  }

   printf("%d",result);


   return 0;

}
