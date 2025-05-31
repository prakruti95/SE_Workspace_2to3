#include<stdio.h>
#include<conio.h>
void main()
{
    
    int marks[50],i,num;
    
    printf("Enter Number: ");
    scanf("%d",&num);
    
    for(i=0;i<num;i++)
    {
          printf("Enter Marks: ");
          scanf("%d",&marks[i]); 
    }
    
    printf("\n Marks are");
      for(i=0;i<num;i++)
    {
          printf("\n Marks are %d",marks[i]);
         
    }
    
 
    
   
    
    
    getch();
}