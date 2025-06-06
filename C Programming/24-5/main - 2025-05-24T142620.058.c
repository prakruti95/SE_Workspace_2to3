#include<stdio.h>
#include<conio.h>
int main()
{
    
    int i,j,num;
    
    printf("Enter Value: ");
    scanf("%d",&num);
    
    for(i=0;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            char ch = 'A'+i;
            printf("%c",ch);
        }
        printf("\n");
    }
    
    
    return 0;
}