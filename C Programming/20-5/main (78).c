#include<stdio.h>
#include<conio.h>
void main()
{
    
    char c;
    
    printf("Enter Character:");
    scanf("%c",&c);
   
    //printf("Character is %c",c);
   
   if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
   {
        printf("It's a Vowel");
   }
   else
   {
        printf("It's a Cosonant");
   }
   
    
    getch();
   
}