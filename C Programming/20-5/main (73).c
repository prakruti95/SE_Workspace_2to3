#include<stdio.h>
#include<conio.h>
void main()
{
    int age;
    
    printf("Enter your Age");
    scanf("%d",&age);

    if(age>=18)
    {
        printf("Eligible to vote"); 
        
        //nested if
        if(age>=60)
        {
            printf("Senior citizen category");
        }
        else
        {
            printf("Young Age");
        }
    }
    else
    {
       printf("Not Eligible to vote");  
    }

    getch();
}