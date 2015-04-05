int main()
{
   int a,b;
   scanf("%d",&a);
   scanf("%d",&b);
   if (a > 0 && b > 0)
      printf("Both numbers are positive\n");
   if (a == 0 || b == 0)
      printf("At least one of the numbers = 0\n");
   if (!(a > 0) && !(b > 0))
      printf("Both numbers are negative\n");
   return 0;
}
