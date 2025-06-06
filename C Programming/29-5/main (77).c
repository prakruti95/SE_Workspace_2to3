#include<stdio.h>
#include<conio.h>

//with para without return type
void add(int a,int b)
{
   
    
    int c = a+b;
    printf("\n %d",c);
}

void main()
{
    int a;
    int b;
    
    printf("Enter a: ");
    scanf("%d",&a);
    
    printf("Enter b: ");
    scanf("%d",&b);
    
    add(a,b);
    
    
}
