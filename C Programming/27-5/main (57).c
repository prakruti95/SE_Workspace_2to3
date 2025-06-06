#include<stdio.h>
#include<conio.h>
int main()
{
      
      int age;
      
      printf("Enter Age");
      scanf("%d",&age);
      
      
      tops:if(age<18)
      {
           printf("Not Eligible to vote");             
      }
      break;
     
      
      if(age>=18)
      {
           printf("Eligible to vote"); 
      }
    
      else
      {
           goto tops;
          
      }
     
    
    return 0;
}