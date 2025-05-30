#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() 
{
    char name[50],surname[50];
    
    printf("Enter Firstname: ");
    scanf("%s",&name);
    
    printf("Enter Lastname: ");
    scanf("%s",&surname);
    
    printf("%s",strcat(name,surname));

    return 0;
}