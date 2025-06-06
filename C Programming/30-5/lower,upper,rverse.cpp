#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() 
{
    char a1[50],b1[50];
    
    printf("Enter First String: ");
    scanf("%s",&a1);
    
  
    printf("%s",strlwr(a1));//strupr,strrev

    return 0;
}