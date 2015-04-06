int main()
{
   int j,i,times;
   scanf("%d",&times);
   i = 0;
   do
   {
      while (j > 1)
      {
         j++;
         printf("%d\n",i);
      }
      i++;
   }
   while (i <= times);
   return 0;
}
