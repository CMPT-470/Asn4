int main()
{
   char animal;
   printf("which animal do you like best:\n");
   printf("a) cats\n b) dogs");
   scanf("%c",&animal);

   switch (animal)
{
case 'a':
printf("cats are cool!");
break;
case 'b':
printf("dogs are man's best friend!");
break;
default:
printf("you didn't pick a valid option");
}

return 0;

}
