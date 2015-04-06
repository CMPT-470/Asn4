int main()
{
   int success;
   int number;
   int value;
   char win;

   value = 2;
   scanf("Guess a number: %d",&number);
   if (number == value)
   {
      success = 1;
      win = 'w';
   }
   else
   {
      win = 'l';
   }

   return 0;
}
