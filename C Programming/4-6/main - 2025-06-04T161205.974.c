#include<stdio.h>
#include<conio.h>

struct topstech
{
    char name[20];
    char tech[20];
}a1;

void main()
{
    printf("\n Enter Your Details: ");
    
    printf("\n Enter Your Name: ");
    scanf("%s",&a1.name);
    
    printf("\n Enter Your Technology: ");
    scanf("%s",&a1.tech);
    
    printf("\n Your Name and Technology are: ");
     printf("\n");
    printf("%s",a1.name);
    printf("\n");
    printf("%s",a1.tech);
    
    getch();
}