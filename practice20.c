//vowel or consonent using switch
#include<stdio.h>
int main()
{
   char ch;
   printf("enter a letter:\n");
   scanf("%c",&ch);
   switch(ch)
   {
   case 'a': case 'A': case 'o': case 'O': case 'e': case 'E': case 'i': case 'I': case 'u': case 'U':
   {
      printf("the letter is vowel\n");
      break;
   }
   default:
   {
      printf("the letter is consonent\n");
   }
   }
   return 0;
}
