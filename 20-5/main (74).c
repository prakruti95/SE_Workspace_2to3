#include<stdio.h>
#include<conio.h>
void main()
{
    
    int num;
    
    printf("Enter Any Number");
    scanf("%d",&num);
    
    switch(num)
    {
        case 1:printf("selected language is english");
        break;
        
        case 2:printf("selected language is hindi");
        break;
        
        case 3:printf("selected language is gujarati");
        break;
        
        default:printf("number is not valid");
        break;
        
    }

    

    getch();
}