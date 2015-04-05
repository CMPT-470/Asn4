#include<stdio.h>

/* Author: Your name
   Date: yyyy/mm/dd
   Description:
   Writes the words "Hello World" on the screen */

int main()
{
   printf("Hello World\n"); //prints "Hello World"

   int a;
   char b;
   
   int a,b,c;

   const float pi = 3.14;

   unsigned int a;
   signed int b;

   int a,b;
   a = 5;
   b = a + 3;
   a = a - 3;

   int a;
   scanf("%d",&a);
   a = a * 2;
   printf("The answer is %d",a);

   int mark;
   char pass;
   scanf("%d",&mark);
   if (mark > 40)
      pass = 'y';

   int mark;
   char pass;
   scanf("%d",&mark);
   if (mark > 40)
      pass = 'y';
   else
      pass = 'n';

   int mark;
   char pass;
   scanf("%d",&mark);
   if (mark > 40)
   {
      pass = 'y';
      printf("You passed");
   }
   else
   {
      pass = 'n';
      printf("You failed");
   }

   int a,b;
   scanf("%d",&a);
   scanf("%d",&b);
   if (a > 0 && b > 0)
      printf("Both numbers are positive\n");
   if (a == 0 || b == 0)
      printf("At least one of the numbers = 0\n");
   if (!(a > 0) && !(b > 0))
      printf("Both numbers are negative\n");

   char fruit;
   printf("Which one is your favourite fruit:\n");
   printf("a) Apples\n");
   printf("b) Bananas\n");
   printf("c) Cherries\n");
   scanf("%c",&fruit);
   switch (fruit)
   {
      case 'a':
         printf("You like apples\n");
         break;
      case 'b':
         printf("You like bananas\n");
         break;
      case 'c':
         printf("You like cherries\n");
         break;
      default:
         printf("You entered an invalid choice\n");
   }

   int i;
   for (i = 1;i <= 24;i++)
      printf("H\n");

   int i,times;
   scanf("%d",&times);
   i = 0;
   while (i <= times)
   {
      i++;
      printf("%d\n",i);
   }

   int i,times;
   scanf("%d",&times);
   i = 0;
   do
   {
      i++;
      printf("%d\n",i);
   }
   while (i <= times);

   int i;
   while (i < 10)
   {
      i++;
      if (i == 5)
         break;
   }

   int i;
   while (i < 10)
   {
      i++;
      continue;
      printf("Hello\n");
   }
   return 0;
}
