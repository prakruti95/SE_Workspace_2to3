#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() 
{
    char a1[50],b1[50];
    
    printf("Enter First String: ");
    scanf("%s",&a1);
    
    printf("Enter Second String: ");
    scanf("%s",&b1);
    
    printf("%d",strcmp(a1,b1));

    return 0;
}