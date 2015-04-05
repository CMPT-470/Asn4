#include<stdio.h>

int main()
{
   int i, times;
   scanf("%d", &times);
   i = 0;
   j = 0;
   while (i <= times)
   {
     while (j <= times)
     {
       printf("%j\n", j);
       j++;
     }

     if (i > 2) {
       printf("%d\n", i);
     }
     i ++;
   }

   return 0;
}
