int main()
{
   int i,j,times;
   scanf("%d",&times);
   i = 0;
   while (i <= times)
   {
      i++;
      for(j=0; j < 10;j++)
      {
          printf("%d\n",i);
      }
   }
   return 0;
}
