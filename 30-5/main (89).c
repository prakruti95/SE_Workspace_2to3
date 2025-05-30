#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() 
{
    char a1[50],b1[50];
    
    printf("Enter First String: ");
    scanf("%s",&a1);
    
  
      printf("%s",strcpy(b1,a1));

    return 0;
}