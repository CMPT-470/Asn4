#include <stdio.h>

int main()
{
   // a looping test of loops
   int i, j, k, r;
   j = 10;
   while(r<5)
   {
      for(i = 0;i<j;i++)
      {
         printf("still looping");
         j++;
         k = 5;
         do
         {
		printf("loooping more!");
         } while(k < 1);
      }
      r++;
   }

}


