#include<stdio.h>
#include<conio.h>
void main()
{
    int pri,roi,year,intrest,ans;

    printf("Enter Princi Amount: ");
    scanf("%d",&pri);

    printf("Enter Rate of Intrest: ");
    scanf("%d",&roi);
    
    printf("Enter Years: ");
    scanf("%d",&year);

    intrest = pri*roi*year/100;
    ans = pri+intrest;

    printf("Total Amount is %d",ans);


    getch();
}