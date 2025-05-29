#include <stdio.h>
#include <conio.h>

void main() 
{

  
    char c;
  
    printf("Enter Character : ");
    scanf("%c",&c);
    
   
    if(c =='A'|| c=='E' || c=='I' || c=='O' || c=='U')
    {
        printf("It's a Vowel");  
    }
    else
    {
         printf("It's a Consonant");  
    }
    
    
    
    
    
   getch();
	
}