#include<stdio.h>
#include<conio.h>

void newchar(char c)
{
   if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
   {
      printf("It's a Vowel"); 
   }
   else
   {
     printf("It's a Consonant");   
   }
}


void main()
{
   
   char c1;
   
   printf("Enter Character");
   scanf("%c",&c1);
    
    newchar(c1);
    
    
}
