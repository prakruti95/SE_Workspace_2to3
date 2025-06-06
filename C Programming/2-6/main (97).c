#include<stdio.h>
#include<conio.h>
void main()
{
    int salary[50];
    int i,num,total=0,yesalary=0;
    
    printf("\n Enter Total Number of Emp: ");
    scanf("%d",&num);
    
    
    
    for(i=0;i<num;i++)
    {
       printf("\n Enter Salary From Emp %d : ",i); 
       scanf("%d",&salary[i]);
    }
    
    printf("\n All Emp Salary is : ");
    for(i=0;i<num;i++)
    {
        total += salary[i];
        printf("\n Salary of Emp no : %d is %d",i,salary[i]);
        
    }
    
    printf("\n Monthly Total Salary is : %d ",total);
    yesalary =  total *12;
    printf("\n Yearly Total Salary is : %d ",yesalary);
    
    
    
    
    
        
    getch();
}