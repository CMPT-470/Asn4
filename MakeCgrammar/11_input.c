int main()
{
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
   return 0;
}
