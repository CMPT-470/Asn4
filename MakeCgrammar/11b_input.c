int main()
{
   int mark;
   int success;
   char pass;
   scanf("%d",&mark);
   if (mark > 40)
   {
      success = 1;
   }
   else
   {
      success = 0;
   }

   if (success == 0)
   {
      printf("you failed");
   }
   else
   {
      printf("you passed");
   }

   return 0;
}
