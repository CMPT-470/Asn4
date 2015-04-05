int main()
{
  int i,j,mark;
   char pass;
   for (i = 1;i <= 24;i++)
     {
       if ( i < 10)
	 {
	   printf("H\n");
	 }
     }
   scanf("%d",&mark);
   if (mark > 40)
   {
     if (mark > 90)
       {
	 printf("You are really smart!");
       }
      pass = 'y';
      printf("You passed");
   }
   else
   {
     for (i = 0; i < 3; i++)
       {
	 printf("FAILure!");
       } 
     pass = 'n';
      printf("You failed");
   }


   return 0;
}
